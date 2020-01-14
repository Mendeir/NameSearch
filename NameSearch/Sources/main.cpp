#include <iostream>
#include <string>

int main()
{
	
	//initialization
	//put names you want to be included in search here
	std::string names[] = { "Adrianne", "Alex", "Betty", "Caroline", "Dave", "Emily", 
							"Fred", "Greg", "Hannah", "Holly", "Magracia", "MG" };
	std::string userInputName;
	bool search = false;

	//get user input
	std::cout << "Enter a name: ";
	std::cin >> userInputName;

	//look for matching input for user
	for (const auto &counter : names)
		if (counter == userInputName)
		{
			search = true;
		}

	//check if the program found the said input
	if (search)
		std::cout << userInputName << " was found.\n";
	else
		std::cout << userInputName << " was not found.\n";
	

}