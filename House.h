#ifndef HOME_HOUSE_H
#define HOME_HOUSE_H

#include <map>

#include "Apartment.h"

using namespace std;

using Apartments = map<int, Apartment*>;

struct House {
    Apartments* aparments;
    string address;

    void Init(string address) {
        this->address = address;
        aparments = new Apartments;
    }

    bool AddApartment(Apartment* apartment) {
        //TODO Дописать проверку на количество квартир в доме
        aparments->emplace(apartment->number, apartment);
        return true;
    }

    bool AddApartment(int number) {
        Apartment* apartment = new Apartment;
        apartment->Init(number);

        aparments->emplace(apartment->number, apartment);

        return true;
    }
};

#endif //HOME_HOUSE_H
