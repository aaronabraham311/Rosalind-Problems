// INCOMPLETE

#include <iostream>
#include <cmath>

using namespace std;

float probs (float firstIndividual, float secondIndividual, float sum); // Finds probability of mating pair

int main()
{
    float k, m, n;
    float sum;
    
    // Getting values
    cin >> k >> m >> n;
    sum = k + m + n;
    
    cout << 1 - 0.25 * probs(m, m, sum) - 0.5 * probs(m, n, sum) - probs(n, n, sum) << endl; // Outputs chance
       
    return 0;
}

float probs (float firstIndividual, float secondIndividual, float sum)
{
    return (firstIndividual/sum) * (secondIndividual /sum) ;
}
