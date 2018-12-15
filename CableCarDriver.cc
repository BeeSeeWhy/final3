#include <iostream>
#include "CableCar.h"
#include "MuniVehicle.h"
using namespace std;

int main() {
    CableCar trolley;
    
    for (int i = 0; i < 2; i++)
        trolley.paidFare();
    cout << trolley.getTotalFares();

    return 0;
}
