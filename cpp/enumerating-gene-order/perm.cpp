// INCOMPLETE
#include <iostream>

using namespace std;

int factorial(int number);

int main()
{
    int n;
    
    cin >> n;

    cout << factorial(n) << endl;
    
    
    
    return 0;
}

int factorial(int number) // Recursive factorial function
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
