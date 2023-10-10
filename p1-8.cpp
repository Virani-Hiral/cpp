#include<iostream>
#include<math.h>
 
using namespace std;
 
int main()
{
	cout<<"Virani Hiral"<<endl;
	cout<<"220130318062"<<endl; 
	float p,r,t,ci;
	cout<<"Enter Principle, Rate and Time:\n";
	cin>>p>>r>>t;
	ci=p*pow((1+r/100),t) - p;
	cout<<"\nCompound Interest = "<<ci;
 
return 0;
}
