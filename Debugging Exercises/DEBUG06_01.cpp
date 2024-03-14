#include <iostream>
#include <string>

using namespace std;

int main() {
// A high school is holding a recycling competition,
// and this program allows a user to enter a student's 
// year in school (1 through 4) and number of cans collected
// for recycling. Data is entered continually until the user
// enters 9 for the year.
// After headings, output is four lines --
// one for each school year class.

   // Declarations
      int year;
      int cans;
      const int SIZE = 4;
      const int QUIT = 9;
      int collectedArray[4] = {0, 0, 0, 0};
      string HEAD1 = "Can Recycling Report";
      string HEAD2 = "Year Cans Collected";

   cout << "Enter year of student (1-4) or " << QUIT << " to quit ";
   cin >> year;

    while (year != QUIT) {
        if (year < 1 || year > 4) {
            cout << "Invalid year. Please enter a value between 1 and 4." << endl;
            cout << "Enter year of student (1-4) or " << QUIT << " to quit ";
            cin >> year;
            continue;
        }

        cout << "Enter number of cans collected (non-negative integer) ";
        cin >> cans;
        while (cans < 0) {
            cout << "Invalid input. Please enter a non-negative integer." << endl;
            cin >> cans;
        } 

        collectedArray[year - 1] = collectedArray[year - 1] + cans;

        cout << "Enter year of student (1-4) or " << QUIT << " to quit ";
        cin >> year;
    }

    cout << HEAD1 << endl;
    cout << HEAD2 << endl;

    year = 0;
    while (year < SIZE) {
        cout << year + 1 << " " << collectedArray[year] << endl;
        year = year + 1;
    }

    return 0;
}
