// Including all libraries
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dnaSequence;
    
    cin >> dnaSequence; // Accepting input
    
    // Looping through whole string to replace characters
    for (int i = 0; i < dnaSequence.length(); i ++)
    {
         if (dnaSequence[i] == 'T')
         {
            dnaSequence.replace (i, 1, "U");
         }
    }
    
    cout << dnaSequence << endl; // Outputting data
    
    return 0;    
}
