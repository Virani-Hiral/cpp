#include<iostream>
using namespace std;

int main()
{
	cout<<"Virani Hiral"<<endl;
	cout<<"220130318062"<<endl;
    int n;
    cout << "Enter a number : "; 
    cin >> n;
    
    int sum=0;
    
    for(int i=1;i<=n;i++) 
    sum+=i;

    cout << sum;

    return 0;
}
