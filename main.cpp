#include "FamilyVacation.h"

int main()
{
    // Check the constructor with default values and overloaded << operator
    FamilyVacation vac0;

    cout << vac0;

    // Check the copy constructor
    string names1[3] = { "Ying", "Yang", "Bagu" };
    FamilyVacation vac1(3, 3, names1);
    FamilyVacation vac2 = vac1;
    cout << vac2;

    // Check the overloaded + operator
    FamilyVacation vac3 = vac2 + 5;
    cout << vac3;

    // Check the second overloaded + operator
    string names2[2] = { "Smith", "Mozart" };
    FamilyVacation vac4(5, 2, names2);
    FamilyVacation merged_vac = vac3 + vac4;
    cout << merged_vac;
}