# COSC1430_Exercise1

Given a class FamilyVacation below

    class FamilyVacation
    {
       public:
            void  SetNumDays(int dayCount);
            void  SetNumPeople(int peopleCount);
            void  SetNames(string [], int);
            void  Print() const;
            FamilyVacation operator+(int moreDays);
       private:
            int   numDays;
            int   numPeople;
            string *names;
      };
      
Define three constructors:

    ·A default constructor that sets the default values for the three members as numDays=0, numPeople=0, names = nullptr
    ·An overloaded constructor that takes three parameters as input in the order of (int days, int people, string *names)
    ·A copy constructor that properly handles the deep copy of the member variable *names
    ·Define a destructor that releases the memory of the *names member variable.

Overload the following operators:

    ·A '+' operator that allows the calculation of newVacation = oldVacation + 5; (both newVacation and oldVacation are objects of FamilyVacation). This calculation will return a new vacation with 5 more days (i.e., add 5 to numDays member).
    ·A '+' operator that allows the calculation of newVacation = Vacation1 + Vacation2;, which will add the numDays of the Vacation1 and Vacation2 and merge the names lists of the two objects
    ·A '==' operator that compares two FamilyVacation objects, i.e., Vacation1 == Vacation2;,. If the two objects have identical numDays, numPeople and names lists, the function return true; otherwise, it returns false
    ·The '<<' operator that enables the direct output of FamilyVacation object as cout << myVacation;
    ·The '=' operator that assign a FamilyVacation object to another using deep copy
