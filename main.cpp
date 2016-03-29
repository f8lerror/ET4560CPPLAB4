#include <iostream>
#include <math.h>


using namespace std;

int main() {

    double present_value;
/*    const float future_value = 10000;
    const float annual_interest_rate = .042;
    const float number_of_years = 10;*/

    float future_value;
    float annual_interest_rate;
    float number_of_years;

    //present_value = future_value / pow(1 + annual_interest_rate, number_of_years);

    cout << "How much do you want after 10 years: $" << endl;
    cin >> future_value;

    cout << "How much interest will it earn each year $" << endl;
    cin >> annual_interest_rate;

    cout << "How many years will it earn interest: " << endl;
    cin >> number_of_years;

    present_value = future_value / pow(1 + annual_interest_rate, number_of_years);

    cout << "You need to deposit $" << present_value << endl;


 //   cout << "You need to deposit $" << present_value << " to have earned $" << future_value << " in 10 years" << endl;
    cin.get();
    return 0;
}