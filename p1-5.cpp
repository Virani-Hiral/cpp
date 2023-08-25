#include <iostream>
using namespace std;

int main()
{
	cout<<"Virani Hiral"<<endl;
	cout<<"220130318062"<<endl;

    int x = 20, y = 15, temp;

    cout << "Before swapping." << endl;
    cout << "x = " << x << ", y = " << y << endl;

    temp = x;
    x = y;
    y = temp;

    cout << "\nAfter swapping." << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
