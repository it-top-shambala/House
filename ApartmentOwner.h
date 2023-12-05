#ifndef HOME_APARTMENTOWNER_H
#define HOME_APARTMENTOWNER_H

#include <string>

#include "Person.h"

using namespace std;

struct ApartmentOwner {
    Person* person;
    double portian;

    void Init(Person* person, double portion) {
        this->person = person;
        this->portian = portion;
    }

    void Init(string last_name, string first_name, double portion) {
        this->person = new Person;
        person->Init(last_name, first_name);

        this->portian = portion;
    }

    string ToString() {
        return person->FullName() + ": " + to_string(portian);
    }
};

#endif //HOME_APARTMENTOWNER_H
