// Including all libraries
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

// Making mapping function that puts external codon table into C++ dictionary
map <string, string> make_map(const char* path = "codon_table.txt")
{
    map <string, string> map;
    
    fstream table(path);
    string codon, aminoAcid;
    
    while (table >> codon >> aminoAcid)
    {
        map.emplace(codon, aminoAcid);
    }
    
    return map;
}

int main()
{
    string rnaSequence, protein;
    map <string, string> codonTable = make_map();
    
    getline(cin,rnaSequence); // Gets input
    
    for (int i = 0; i < rnaSequence.length(); i += 3) // Passes codon to function
    {
        string substring = rnaSequence.substr(i, 3);
        
        for (auto j = codonTable.begin(); j != codonTable.end(); j ++)
        {
            if (j -> first == substring)
            {
                if ( j -> second == "Stop")
                {
                    cout << endl;
                }
                else
                {
                    protein += j -> second;
                }
            }
        }
    }
    
    cout << protein << endl;
    
    return 0;
}
