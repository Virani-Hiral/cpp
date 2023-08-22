 #include <iostream>
 
 double fahrenheitToCelsius(double fahrenheit)
 {
     double celsius;
 
     celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
     return celsius;
 }
 
 int main()
 {
 	cout<<"Virani Hiral"<<endl;
	cout<<"220130318062"<<endl;
     double fahrenheit;
 
     std::cout << "Enter temperature in fahrenheit (in class) ";
     std::cin  >> fahrenheit;
     std::cout << "Temperature in Celsius (in class) = "
               << fahrenheitToCelsius(fahrenheit) << std::endl;
 }
