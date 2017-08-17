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
    
    // Calculating probabilities
    float twoRecessive = (n/sum) * ((n - 1)/(sum - 1));
    float twoHeteros = (m/sum) * ((m - 1)/(sum - 1));
    float heteroRecessive = (m/sum) * (n/(sum - 1)) + (n/sum) * (m / (sum - 1));
    
    cout << 1 - (twoRecessive + twoHeteros * 0.25 + heteroRecessive * 0.5) << endl; // Outputting total probability
    
    return 0;
