#include <iostream>
#include <limits>
#include <iomanip>

int main() {
	// Variables
    int numP;
    double weight, new_weight;
    constexpr double mWeight = 0.38, vWeight = 0.91, maWeight = 0.38, jWeight = 2.34, sWeight = 1.06, uWeight = 0.92, nWeight = 1.19;

  // Introduces the function of the program to the user.
  std::cout << "Planet Boxing's weight converter - from your weight in Earth's gravity to your weight in another planet's gravity.\n";

  // Prompts the user to enter their weight as it measures in Earth's gravity and saves it to weight.
  std::cout << "What is your weight in Earth's gravity?\n";
  while (true) {
	  //Takes the input and checks it's a positive number, if not then asks to enter a posative number.
      if (!(std::cin >> weight) || weight <= 0) {
          std::cout << "Invalid input, please enter a positive number.\n";

          std::cin.clear(); // Clear error state
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input

          continue;
      }
      break;
  }

  while (true) {
  // It prompts the user to input the number from a list that correlates to the planet to which gravity you would like to convert and saves it in numP.  
  std::cout << "Please enter the below number between 1 and 7 that correlates to the planet which gravity you would like to convert to: \n";
  // List of planets by number.
  std::cout << "1. Mercury \n";
  std::cout << "2. Venus \n";
  std::cout << "3. Mars \n";
  std::cout << "4. Jupiter \n";
  std::cout << "5. Saturn \n";
  std::cout << "6. Uranus \n";
  std::cout << "7. Neptune \n";

      //Takes the input and checks it's a number between 1 and 7, if not then asks to enter a number between 1 and 7.
      if (!(std::cin >> numP) || numP < 1 || numP > 7) {

          std::cout << "Invalid input.\n";

          continue;
      }
	  break;
  }

  std::cout << std::fixed << std::setprecision(2); // Set precision for floating-point output

  // Switch Statement to calculate the weight difference between Earth and other planets based on gravity and then print the result.
  switch (numP) {
    // Mercury — 0.38 * Earth's gravity.
    case 1:
    new_weight = weight * mWeight;
    std::cout << "On Mercury, your weight is " << new_weight << "!\n";
    break;
    // Venus — 0.91 * Earth's gravity.
    case 2:
    new_weight = weight * vWeight;
    std::cout << "On Venus, your weight is " << new_weight << "!\n";
    break;
    // Mars — 0.38 * Earth's gravity.
    case 3:
    new_weight = weight * maWeight;
    std::cout << "On Mars, your weight is " << new_weight << "!\n";
    break;
    // Jupiter — 2.34 * Earth's gravity.
    case 4:
    new_weight = weight * jWeight;
    std::cout << "On Jupiter, your weight is " << new_weight << "!\n";
    break;
    // Saturn — 1.06 * Earth's gravity.
    case 5:
    new_weight = weight * sWeight;
    std::cout << "On Saturn, your weight is " << new_weight << "!\n";
    break;
    // Uranus — 0.92 * Earth's gravity.
    case 6:
    new_weight = weight * uWeight;
    std::cout << "On Uranus, your weight is " << new_weight << "!\n";
    break;
    // Neptune — 1.19 * Earth's gravity.
    case 7:
    new_weight = weight * nWeight;
    std::cout << "On Neptune, your weight is " << new_weight << "!\n";
    break;
    default:
    std::cout << "Invalid selection. Please choose a number between 1 and 7.\n";
    break;
  }

  std::cout << "\n";
  std::cout << "Thank you for using Planet Boxing's weight converter.\n";
  std::cout << "Have a nice day!\n";

  // Pause so the user can read the output
  std::cout << "Press Enter to close the program...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
  std::cin.get();
  
}