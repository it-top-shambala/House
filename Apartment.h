#ifndef HOME_APARTMENT_H
#define HOME_APARTMENT_H

#include <vector>

#include "ApartmentOwner.h"

using namespace std;

struct Apartment {
    const int TOTAL = 1;

    int number;
    vector<ApartmentOwner*>* owners;

    Apartment(int number) {
        this->number = number;
        owners = new vector<ApartmentOwner*>;
    }

    ~Apartment() {
        delete owners;
    }

    bool AddOwner(ApartmentOwner* owner) {
        double total = owner->portian + SumPortion();

        if (total > TOTAL) return false;

        owners->push_back(owner);
        return true;
    }

    bool AddOwner(string last_name, string first_name, double portion) {
        double total = portion + SumPortion();

        if (total > TOTAL) return false;

        ApartmentOwner* owner = new ApartmentOwner(last_name, first_name, portion);
        owners->push_back(owner);
        return true;
    }

    double SumPortion() {
        double sum = 0;
        for (auto owner : *owners) {
            sum += owner->portian;
        }
        return sum;
    }

    string ToString() {
        string result = "";

        for (auto o : *owners) {
            result += o->ToString() + "\n";
        }

        return result;
    }
};

#endif //HOME_APARTMENT_H
