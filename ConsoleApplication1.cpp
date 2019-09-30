// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your first name:";
	std::string first_name;
	std::cin>> first_name;
	std::cout << "Enter your last name:";
	std::string last_name;
	std::cin >> last_name;
	std::cout << "Enter your age:";
	int age = 39;
	std::cin >> age;
	std::cout << "Enter your confidence in programmers (in percentage 0-100%):";
    int confidence = 39;
	std::cin >> confidence;
	int dogyears = age * 7;
	std::cout << "Hello," << first_name<<" "<<last_name<< "!";
	std::cout << "You might be" << " " << age << " " "in human years, but in dog years you are" << " " << dogyears << "!\n";
	if (confidence > 50) {

		std::cout << "Writing code takes hard work!\n";
	}
	else
		std::cout << "I agree, programmers cant be trusted!";
	return 0;
		
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
