// Declaring libraries
#include <iostream>

using namespace std;

int recurrence (int n, int k);

int main()
{
    int months, litter;
    
    // Getting number of months to run sim and litter count
    cin >> months;
    cin >> litter;
    
    cout << recurrence(months, litter) << endl; // Calling function to output total number of rabbits
    
    return 0;
}

// Logic: 1st and 2nd month will always have 1 rabbit pair. Afterwards, total number of rabbits will be equal to rabbits born
// one month ago plus the rabbits born on that month (rabbits born 2 months ago * litter size)
int recurrence (int n, int k)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return recurrence(n-1, k) + (recurrence(n - 2, k) * k);
    }
}
