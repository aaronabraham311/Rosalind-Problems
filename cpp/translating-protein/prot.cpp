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
        else if (temp == "UAU" || temp == "UAC")
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
        else if (temp == "CUU" || temp == "CUC" || temp == "CUA" || temp == "CUG")
        {
            protein += "L";
        }
        else if (temp == "CCU" || temp == "CCC" || temp == "CCA" || temp == "CCG")
        {
            protein += "P";
        }
        else if (temp == "CAU" || temp == "CAC")
        {
            protein += "H";
        }
        else if (temp == "CAA" || temp == "CAG")
        {
            protein += "Q";
        }
        else if (temp == "CGU" || temp == "CGC" || temp == "CGA" || temp == "CGG")
        {
            protein +=  "R";
        }
        else if (temp == "AUU" || temp == "AUC" || temp == "AUA")
        {
            protein += "I";
        }
        else if (temp == "AUG")
        {
            protein += "M";
        }
        else if (temp == "ACU" || temp == "ACC" || temp == "ACA" || temp == "ACG")
        {
            protein += "T";
        }
        else if (temp == "AAU" || temp == "AAC")
        {
            protein += "N";
        }
        else if (temp == "AAA" || temp == "AAG")
        {
            protein += "K";
        }
        else if (temp == "AGU" || temp == "AGC")
        {
            protein += "S";
        }
        else if (temp == "AGA" || temp == "AGG")
        {
            protein += "R";
        }
        else if (temp == "GUA" || temp == "GUU" || temp == "GUG" || temp == "GUC")
        {
            protein += "V";
        }
        else if (temp == "GCU" || temp == "GCG" || temp == "GCA" || temp == "GCC")
        {
            protein += "A";
        }
        else if (temp == "GAU" || temp == "GAC")
        {
            protein += "D";
        }
        else if (temp == "GAA" || temp == "GAG")
        {
            protein += "E";
        }
        else if (temp == "GGU" || temp == "GGA" || temp == "GGC" || temp == "GGG")
        {
            protein += "G";
        }
        else if (temp == "UAA" || temp == "UAG" || temp == "UGA")
        {
            cout << protein << endl;
            protein.clear();
        }
    }
    
    cout << protein << endl;
    
    return 0;
}
