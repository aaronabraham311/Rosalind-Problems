// Linking all relevant libraries
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dnaSequence;
    int acount = 0;
    int ccount = 0;
    int tcount = 0;
    int gcount = 0;
    
    cin >> dnaSequence;
    
    for (int i = 0; i < dnaSequence.length(); i ++)
    {
        char tempChar = dnaSequence[i];
        
        if (tempChar == 'A')
        {
            acount ++;
        }
        else if (tempChar == 'C')
        {
            ccount ++;
        }
        else if (tempChar == 'T')
        {
            tcount ++;
        }
        else if (tempChar == 'G')
        {
            gcount ++;
        }
    }
    
    cout << acount << " " << ccount << " " << gcount << " " << tcount << endl;
    
    return 0;
}
