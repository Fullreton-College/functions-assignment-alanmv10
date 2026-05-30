#include <iostream>
using namespace std;
// We will use cents for all monetary values. This will let us
// work with integer, rather than floating-point, variables.
const int TWINKIE_PRICE = 350;

// Prompt the user to insert coins until enough has been paid to buy
// a twinkie. The total amount inserted, in cents, is returned.
int accept_money();

// Returns the amount of change that should be returned to the user.
int compute_change(int total_paid);

int main()
{
      // Declare variables for the amount of money that the user enters,
    // along with the change that is to be returned to them.
    int money_entered, change;

    // Make sure that monetary values we output are formatted with
    // two digits after the decimal point.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // Collect money from the user
    money_entered = accept_money();

    // Figure out how much change to return
    change = compute_change(money_entered);

    // Dispense the twinkie
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

