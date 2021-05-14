#include <iostream>

using namespace std;

int main()
{
    float y , m1 , b1 , m2 , b2 , x ;
    cout<< " Dadas 2 rectas (y1=m1.x + b1) (y2=m2.x + b2), ingrese " << endl;
    cout << " Valor de m1:" << endl;
    cin>> m1;
    cout << "Valor de b1:" << endl;
    cin >> b1;
    cout << "Valor de m2:" << endl;
    cin >> m2;
    cout << "Valor de b2:" << endl;
    cin >> b2;
    if (m1==m2)
    {
        cout << "estas rectas son paralelas" << endl;
    }
    else
    {
        x= ((b2-b1)/(m1-m2));
    y = ((m1*x)+b1);



    cout << "Estas rectas se intersectan en el eje x en:" << endl;
    cout << x << endl ;
    cout << "Y en el eje y en:" << endl ;
    cout << y << endl;


    }









    return 0;
}
