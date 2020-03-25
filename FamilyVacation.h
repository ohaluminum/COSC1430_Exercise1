#pragma once
#include <iostream>
#include <cstring>

using namespace std;

#ifndef FamilyVacation_h
#define FamilyVacation_h

class FamilyVacation {
public:
    FamilyVacation();
    FamilyVacation(int days, int people, string* names);
    FamilyVacation(const FamilyVacation& copy);
    ~FamilyVacation();

    void setNumDays(int dayCount);
    void setNumPeople(int peopleCount);
    void setNames(string* who, int people);
    int getNumDays();
    int getNumPeople();
    string* getNames();


    //Declare overloaded operators
    FamilyVacation operator+(int moreDays);
    FamilyVacation operator+(FamilyVacation other);
    bool operator==(FamilyVacation other);
    void operator=(const FamilyVacation& other); //must be a member function !!!

    //Note that overloaded << CANNOT be declared as a member of the class!!!!!!
    friend ostream& operator<<(ostream& o, FamilyVacation v);

private:
    int numDays;
    int numPeople;
    string* names;
};

#endif /*FamilyVacation.h*/