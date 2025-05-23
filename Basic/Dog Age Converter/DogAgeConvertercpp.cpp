#include <iostream>
#include <string>
#include <limits>

int main() {
	// Variables.
	std::string dog_name;
	int dog_age, later_years, human_years;
	constexpr int early_years = 21, ageMultiplier = 4, minAge = 2, maxAge = 25;

  // Explains the function of the program and prompts the user to input their dog's name and age.
  std::cout << "Let's find out what your dog's age is in human years!\n";
  std::cout << "First, what is your furry friend's name?\n";
  std::cin >> dog_name;
  std::cout << dog_name << " what a ruff-tastic name!\n";
  std::cout << "How old is " << dog_name << "?\n";
  
  while (true) {
	  //Takes the input and checks it's a number, if not then asks to enter a number.
	  if (!(std::cin >> dog_age)) {

		  std::cout << "Invalid input, please enter a number.\n";

		  std::cin.clear(); // Clear error state.
		  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input

		  continue;
	  }
	  // Check if the input is a number between 2 and 25.
	  if (dog_age < minAge || dog_age > maxAge) {

		  std::cout << "Invalid input, please enter a number between 2 and 25.\n";
		  
		  continue;
	  }
	  break;
  }

  // Calculates the dog's age excluding the first two years with the formula b = (a - 2) * 4.
  later_years = (dog_age - 2) * ageMultiplier;
  // Calculates dog's age by adding early_years to later_years.
  human_years = early_years + later_years;

  // Finally prints a sentence with the dog's name and age in human years.
  std::cout << dog_name << " is " << human_years << " years old in human years!\n";

  // Pause so the user can read the output
  std::cout << "Press Enter to close the program...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
  std::cin.get();
}