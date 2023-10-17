#include <iostream>
using namespace std;

int main()
{
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

    int n, num, digit, rev = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
