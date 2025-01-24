#include <iostream>
using namespace std;

int main() {
  int year;
  cin >> year;

  if (year <= 0) {
    cerr << "error";
    return 0;
  }

  if (year % 400 == 0) {
    cout << "Yes";
  }

  else if (year % 100 == 0) {
    cout << "No";
  }

  else if (year % 4 == 0) {
    cout << "Yes";
  }

  else {
    cout << "No";
  }
}
