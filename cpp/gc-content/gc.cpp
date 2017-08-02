// Declaring libraries
#include <iostream>
#include <string>

using namespace std;

// Program finding GC percentage, implement in function
int main()
{
    string userInput;
    float gcNum = 0;
    
    // Getting string input
    cin >> userInput;
    
    // Finding number of 'G' or 'C' characters there are
    for (int i = 0; i < userInput.length(); i ++)
    {
        if (userInput[i] == 'G' || userInput[i] == 'C')
        {
            gcNum ++;  
        }
    }
    
    cout << "GC percentage: " << (gcNum/userInput.length()) * 100 << endl; // Outputting percentage
    
    return 0;
}
