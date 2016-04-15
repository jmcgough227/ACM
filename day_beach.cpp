// C. Day at the Beach

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> h;

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        h.pushback(temp);
    }

    // block max and min values are useful?

    // start with blocks = n;
    // compare last block's min against first block's max?
    // continue incrementing through blocks unless first min < last max
    // change block size until this is always true (guaranteed at 1 block)

    int blocks = n;
    int block_size = 1;

    for (int x = 0; x < blocks; ++x) {
        
    }

    return 0;
}


