#include <iostream>
using namespace std;

bool check_prime(int);

int main() 
{

	cout<<"Virani Hiral"<<endl;
	cout<<"220130318062"<<endl;

 	int a;

    cout << "Enter a positive  integer: ";
    cin >> a;

    if (check_prime(a))
    cout << a << " is a prime number.";
   else
	cout << a << " is not a prime number.";

  return 0;
}

bool check_prime(int a) 
{
  bool is_prime = true;

  if (a == 0 || a == 1) 
  {
    is_prime = false;
  }

  for (int i = 2; i <= a / 2; ++i)
{
    if (a % i == 0) 
	{
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
