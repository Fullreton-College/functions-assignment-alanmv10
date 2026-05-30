#include <iostream>
using namespace std;

void computeCoins(int coinValue, int& num, int& amountLeft) {
  num = amountLeft / coinValue;
  amountLeft = amountLeft % coinValue;
}

int main()
{
int amount;
char repeat;

do{
  cout<<"Enter an amount of change (1-99 cents): ";
  cin >> amount;

  int quarters, dimes, pennies;
  int amountLeft = amount;

  computeCoins(25, quarters, amountLeft);
  computeCoins(10, dimes, amountLeft);
  computeCoins(1, pennies, amountLeft);

  cout << amount << " cents can be given as" <<endl;
  cout << quarters << " quarter(s) "
       << dimes << " dime(s) and "
       << pennies << " penny(Pennies) " << endl;
       
       cout << "Do you want try again? (y/n) ";
       cin >> repeat;

} while (repeat == 'y' || repeat == 'Y');
  
cout << "Goodbye!" << endl;

return 0;
}

