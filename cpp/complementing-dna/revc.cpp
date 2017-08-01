// Including libraries
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sequence;
    
    cin >> sequence; // Getting DNA sequence
    
    // Goes through each instance and replaces letters
    for (int i = 0; i < sequence.length(); i ++)
    {
        if (sequence[i] == 'A')
        {
            sequence.replace(i, 1, "T");   
        }
        else if (sequence[i] == 'T')
        {
            sequence.replace(i, 1, "A");
        }
        else if (sequence[i] == 'C')
        {
            sequence.replace(i, 1, "G");
        }
        else if (sequence[i] == 'G')
        {
            sequence.replace(i, 1, "C");
        }
    }
    
    cout << sequence << endl; // Outputting formated sequence
    
    return 0;   
}
