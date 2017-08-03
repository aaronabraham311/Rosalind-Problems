// Including all libraries
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaring variables
    string first, second;
    int hammingDistance = 0;
    
    // Getting two strings
    cin >> first;
    cin >> second;
    
    // Loops through both strings and counts how many characters are different
    for (int i = 0; i < first.length(); i ++)
    {
        if (first[i] != second[i])
        {
            hammingDistance ++;
        }
    }
    
    // Outputting number of different characters
    cout << hammingDistance << endl;
    
    return 0;   
}
