// A. Patrick and Shopping

#include <iostream>

using namespace std;

int main() {
    int d1, d2, d3;

    // get input
    cin >> d1 >> d2 >> d3;

    // there are four possible paths...
    int paths[3] = { d1 * 2 + d2 * 2,
                     d3 * 2 + d2 * 2,
                     d1 * 2 + d3 * 2  };

    int d_min = d1 + d2 + d3;

    for (int i = 0; i < 3; ++i) {
        if (paths[i] < d_min) d_min = paths[i];
    }

    cout << d_min << endl;

    return 0;
}


