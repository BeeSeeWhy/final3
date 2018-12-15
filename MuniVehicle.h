#ifndef MUNIVEHICLE_H
#define MUNIVEHICLE_H

class MuniVehicle
{
private:
  int totalFares;
public:
  MuniVehicle()
  { totalFares = 0; }

  int getTotalFares()
  { return totalFares; }

  virtual void paidFare()
  { totalFares += 2; }

};
#endif
