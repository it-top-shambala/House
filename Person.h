#ifndef HOME_PERSON_H
#define HOME_PERSON_H

#include <string>

using namespace std;

struct Person {
    string last_name;
    string first_name;

    Person(string last_name, string first_name) {
        this->last_name = last_name;
        this->first_name = first_name;
    }

    ~Person() { }

    string FullName() {
        return last_name + " " + first_name;
    }
};

#endif //HOME_PERSON_H
