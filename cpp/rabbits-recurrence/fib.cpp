// Declaring libraries
#include <iostream>

using namespace std;

int main()
{
    int months, litter;
    
    // Getting number of months to run sim and litter count
    cin >> months;
    cin >> litter;
    
    // Initializing more variables
    int tooYoung = 1; // Rabbits that cannot reproduce
    int ready = 0; // Rabbits that can reproduce
    int newChildren; // Rabbits born every month
    
    // Looping through months and updating rabbit population
    for (int i = 1; i < months; i ++)
    {
        newChildren = ready * litter;
        
        ready += tooYoung;
        tooYoung = newChildren;
    }
    
    cout << tooYoung + ready << endl; // Outputting number of rabbits
    
    return 0;
}
