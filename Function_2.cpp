#include <iostream>
using namespace std;

const int TWINKIE_PRICE = 350;

int accept_money();

int compute_change(int total_paid);

int main()
{

    int money_entered, change;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    money_entered = accept_money();


    change = compute_change(money_entered);

    cout << "\nEnjoy your deep-fried twinkie. Your change is $"
         << change/100.0 << endl;

    return 0;
}

int accept_money()
{
  int total = 0;
  string coin;

  while (total < TWINKIE_PRICE)
  {
    cout<<"Enter coin(dollar, quarter, dime, nickel): ";
    cin >> coin;

    int value = 0;
    if (coin == "dollar") value = 100;
    else if (coin == "quarter") value = 25;
    else if (coin == "dime") value = 10;
    else if (coin == "nickel") value = 5;
    else {
      cout << "Invalid coin. Please enter dollar, quarter, dime, or nickel."<<endl;
      continue;
    }

    total += value;
    cout<< "Total entered so far: $"<< total / 100.0<<endl;
  }

  return total;
}

int compute_change(int total_paid) 
{
return total_paid - TWINKIE_PRICE;
}

