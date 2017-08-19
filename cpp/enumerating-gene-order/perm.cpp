#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int factorial(int number);
void permute (vector <int> a, int l, int r);

int main()
{
    int n;
    vector <int> allFactors;
    
    cin >> n;

    cout << factorial(n) << endl;
    
    for (int i = 0; i < n; i ++) // Populating vector array
    {
        allFactors.push_back(i + 1);
    }
    
    do
    {
        for (int i = 0; i < allFactors.size(); i ++)
        {
            cout << allFactors[i] << " ";
        }
        
        cout << endl;
    } while (next_permutation(allFactors.begin(), allFactors.end()));
    
    
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

