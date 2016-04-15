// A. Joysticks

// Jason McGough
// j.mcgough227@gmail.com

#include <iostream>

int main() {
  int charge1, charge2;
  std::cin >> charge1 >> charge2;

  int minutes = 0;

  while ( charge1 !=0 && charge2 != 0 ) {
    if ( charge1 == 1 && charge2 == 1 ) {
      break;
    }
    else if ( charge1 <= charge2 || charge1 == 1 ) {
      charge1 += 1;
      charge2 -= 2;
      ++minutes;
    }
    else if ( charge2 <= charge1 || charge2 == 1 ) {
      charge2 += 1;
      charge1 -= 2;
      ++minutes;
    }
  }

  std::cout << minutes << "\n";

  return 0;
}

