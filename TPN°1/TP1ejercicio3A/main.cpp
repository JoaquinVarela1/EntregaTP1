#include <iostream>

using namespace std;

int main()
{
    float x;
    cout<< "Ingrese velocidad (km/h): " << endl;
    cin >> x;
    cout << "La velocidad en m/s es:" << endl;
    cout<< x/3.6 << endl;
    return 0;
}
