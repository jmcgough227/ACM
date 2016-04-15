// A. Guest from the Past

#include <iostream>

using namespace std;

int main() {
	unsigned long long int money, plastic, glass, resell;
	cin >> money >> plastic >> glass >> resell;

	unsigned long long int count = 0;

//	while (money >= plastic || money >= glass) {
//		if (plastic < glass - resell) {
//			money -= plastic;
//			++count;
//		}
//		else {
//			money -= (glass - resell);
//			++count;
//		}
//	}

	if (money < plastic && money < glass) {
		cout << 0;
		return 0;
	}

	if (glass - resell <= plastic) {
		count = (money - resell) / (glass - resell);
		
		money -= (count * (glass - resell));

		count += (money / plastic);
	}
	else {
		count = money / plastic;
	}

	cout << count << endl;

	return 0;
}


