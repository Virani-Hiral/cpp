#include <iostream>
using namespace std;

int main()
{
	cout<<"Virani Hiral"<<endl;
	cout<<"220130318062"<<endl;

    int p, t, r, SI;
    
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the time period(in years): ";
    cin >> t;
    cout << "Enter the rate of interest: ";
    cin >> r;
    SI = (p*r*t) / 100;
    cout << "Simple Interest: " << SI << endl;
    return 0;
}
