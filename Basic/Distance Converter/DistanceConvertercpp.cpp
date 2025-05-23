#include <iostream>
#include <limits>
#include <iomanip>

int main() {
    // Variables
    double distM;
    constexpr double milesToKm = 1.6;

  // Introduces the function of the program to the user.
  std::cout << "Convert miles to kilometers - \n";

  while (true) {
      // Prompt the user to input the number of miles they wish to convert to kilometers and save the input to distM.
      std::cout << "Enter the distance in miles: ";
      //Takes the input and checks it's a number, if not then asks to enter a number.
      if (!(std::cin >> distM)) {

          std::cout << "Invalid input, please enter a number.\n";

          std::cin.clear(); // Clear error state
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input

          continue;
      }
	  // Check if the input is negative.
      if (distM <= 0) {

          std::cout << "Invalid input, please enter a positive number.\n";
		  
          continue;
      }
      break;
  }

  // Convert miles to kilometers (formula = m / 1.6) and save it to distK.
  double distK = distM / milesToKm;

  // Set precision for floating-point output.
  std::cout << std::fixed << std::setprecision(2);

  // Print result to terminal.
  std::cout << distM << " miles is " << distK << " kilometers.\n";

  // Pause so the user can read the output
  std::cout << "Press Enter to close the program...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
  std::cin.get();

}