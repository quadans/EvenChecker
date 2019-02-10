/*Write a program that asks the user to input an integer, 
and tells the user whether the number is even or odd. 
Write a function called isEven() that returns true if an integer passed to it is even. 
Use the modulus operator to test whether the integer parameter is even.q*/
#include <iostream>

bool isEven(int zahlEingabe)
{
	return zahlEingabe % 2;
}

int main()
{
	std::cout << "Gebe eine Zahl ein: ";
	int zahlEingabe = 0;
	std::cin >> zahlEingabe;
	bool Auswertung= isEven(zahlEingabe);
	if (Auswertung == 0)
	{
		std::cout << "Zahl ist gleich!\n";
	}
	if (Auswertung == 1)
	{
		std::cout << "Zahl ist ungleich!\n";
	}
}
