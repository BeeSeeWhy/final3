#ifndef CABLECAR_H
#define CABLECAR_H
#include "MuniVehicle.h"

class CableCar : public MuniVehicle
{
private:
    int totalFares;
public:
    void setTotalFares(int fare)
    { totalFares = fare; }

    int getTotalFares()
    {   return totalFares; }

    void paidFare()
    { totalFares += 7; }
};
#endif
