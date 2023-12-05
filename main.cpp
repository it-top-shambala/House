#include <iostream>

#include "House.h"

void PrintApartments(Apartments* apartments);

int main() {
    House* house = new House;
    house->Init("Voronezh");

    house->AddApartment(1);

    Apartment* apartment2 = new Apartment;
    apartment2->Init(2);
    apartment2->AddOwner("Starinin", "Andrey", 1);
    house->AddApartment(apartment2);

    PrintApartments(house->aparments);

    auto temp = house->aparments->at(2);
    auto owner1 = temp->owners->at(0);
    owner1->portian = 0.5;
    temp->AddOwner("Starinin", "Andrey", 0.5);

    PrintApartments(house->aparments);


    return 0;
}

void PrintApartments(Apartments* apartments) {
    for (auto a : *apartments) {
        int number = a.first;
        Apartment* apartment = a.second;

        cout << number << " -> ";
        if (apartment->owners->empty()) {
            cout << "NULL" << endl;
        } else {
            cout << apartment->ToString() << endl;
        }
    }
}