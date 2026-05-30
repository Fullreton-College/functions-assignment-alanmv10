#include <iostream>
#include <cstdlib>
using namespace std;

string CoinFlip()
{
    if (rand() % 2 == 1){
        return "heads";
    } else {
        return "Tails";
    }
}

int main() {
    srand(2);

    int flips;
    cin >> flips;

    for (int i = 0; i < flips; i++) {
        cout<< CoinFlip() << endl; 
    }

    return 0;
}