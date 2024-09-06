#include <iostream>
#include <limits>
#include <windows.h>
#include <conio.h>
using namespace std;

int main() {
  float amount;
  int choice;
  char y_n;
  float exchange_rate = 41;

  do {
    cout << "\n[1] - Conversion from Canadian Dollar to Philippine Peso." << endl;
    cout << "[2] - Conversion from Philippine Peso to Canadian Dollar." << endl;
    cout << "[3] - Exit Conversion." << endl;
    cout << "\nSELECT AN OPTION: ";

    while (!(cin >> choice) || (choice != 1 && choice != 2 && choice != 3)) {
      cout << "Invalid input. Please enter 1, 2 or 3: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      
    }

    if (choice == 1) {
      cout << "\nEnter the amount in Canadian dollars: ";

      while (!(cin >> amount) || amount <= 0) {
        cout << "\nInvalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }

      float PHP = amount * exchange_rate;
      cout << "\n\nThe equivalent amount in Philippine pesos is: " << PHP << " PHP" << endl;cout << "\n\nPRESS [ENTER] TO CONTINUE... "; getch(); system("CLS");
      
    } else if (choice == 2) {
      cout << "\nEnter the amount in Philippine pesos: ";

      while (!(cin >> amount) || amount <= 0) {
        cout << "\nInvalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }

      float CAD = amount / exchange_rate;
      cout << "\n\nThe equivalent amount in Canadian dollars is: " << CAD << " CAD" << endl; cout << "\n\nPRESS [ENTER] TO CONTINUE... "; getch(); system("CLS");
      
    } else if (choice == 3) {
      break;
    }

    cout << "\n\nDo you want to continue? [Y/N] ";

    while (!(cin >> y_n) || (y_n != 'y' && y_n != 'n' && y_n != 'Y' && y_n != 'N')) {
      cout << "\nInvalid input. Please enter y or n: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      
    }
  } while (y_n == 'y' || y_n == 'Y');

  cout << "\n\nExiting the program." << endl;
  return 0;
}


