#include <iostream>

int main () {

    using namespace std;
    const double usd_per_eur {1.19};

    cout << "Welcome to Eur to USD converter\n";
    cout << "Enter value in Eur: ";

    double euros {0.0};
    double dollars {0.0};

    cin >> euros;
    dollars = euros * usd_per_eur;

    cout << euros << "Euros is equivalent to " << dollars << " dollars\n";

}