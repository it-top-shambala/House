#ifndef HOME_APARTMENTOWNER_H
#define HOME_APARTMENTOWNER_H

#include <string>

#include "Person.h"

using namespace std;

struct ApartmentOwner {
    Person* person;
    double portian;

    ApartmentOwner(Person* person, double portion) {
        this->person = person;
        this->portian = portion;
    }

    ApartmentOwner(string last_name, string first_name, double portion) {
        this->person = new Person(last_name, first_name);
        this->portian = portion;
    }

    ~ApartmentOwner() {
        delete person;
    }

    string ToString() {
        return person->FullName() + ": " + to_string(portian);
    }
};

#endif //HOME_APARTMENTOWNER_H
