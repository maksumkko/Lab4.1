#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double N;
    double E = 0;  
    int i = 1;

    cout << "N = ";
    cin >> N;

    while (i <= N)
    {
        E += (1.0 / i) + (sqrt(1 + pow(sin(i), 2))); 
        i++;
    }
    cout << "Result (while) = " << E << endl;

    E = 0;  
    i = 1; 

    do
    {
        E += (1.0 / i) + (sqrt(1 + pow(sin(i), 2))); 
        i++;
    } while (i <= N);
    cout << "Result (do-while) = " << E << endl;

    E = 0; 
    for (int i = 1; i <= N; i++)
    {
        E += (1.0 / i) + (sqrt(1 + pow(sin(i), 2)));  
    }
    cout << "Result (for increment) = " << E << endl;

    E = 0; 
    for (int i = N; i >= 1; i--)
    {
        E += (1.0 / i) + (sqrt(1 + pow(sin(i), 2))); 
    }
    cout << "Result (for decrement) = " << E << endl;

    return 0;
}
