// INCOMPLETE
#include <iostream>
#include <string>

using namespace std;

// Logic: Substrings of 3 --> compare to 2D array that takes codon and gives protein letter --> puts in new string using .append()

int main()
{
    string rnaSequence;
    string protein;
    string temp;
    
    cin >> rnaSequence;
    
    cout << rnaSequence.substr(0, 3) << endl;
    
    for (int i = 0; i < rnaSequence.length(); i += 3)
    {
        temp = rnaSequence.substr(i,3);
        
        if (temp == "UUU" || temp == "UUC")
        {
            protein += "F";
        }
        else if (temp == "UUL" || temp == "UUG")
        {
            protein += "L";
        }
        else if (temp == "UCU" || temp == "UCC" || temp == "UCA" || temp == "UCG")
        {
            protein += "S";
        }
        else if (temp == "UAU" || temp == "UAC") // Skipped stop codons
        {
            protein += "Y";
        }
        else if (temp == "UGU" || temp == "UGC")
        {
            protein += "C";
        }
        else if (temp == "UGG")
        {
            protein += "W";
        }
    }
    
    cout << protein << endl;
    
    return 0;
}
