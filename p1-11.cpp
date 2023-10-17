#include <iostream>
using namespace std;
	
	cout<<"Virani Hiral"<<endl;
	cout<<"220130318062"<<endl;
	
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}


int main()
{
	int a = 10, b = 20;

	
	int n = max(a, b);

	cout << "n is " << n;
	return 0;
}
