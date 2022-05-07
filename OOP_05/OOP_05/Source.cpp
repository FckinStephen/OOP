#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	
	Car* Fcar = new Car(1, 1800, 5, 210, "Red", "Skoda", 499999, "Auto"); //Vytvoří objekt třídy Car
	Car* Scar = new Car(2, 1450, 5, 280, "Silver", "Ford", 690000, "Manual"); //Vytvoří objekt třídy Car

	cout << "------------------------------------------CAR-------------------------------------------" << endl;
	cout << "ID \t WEIGHT (Kg) \t Seats \t Max Speed \t Color \t \t Brand \t Price \t Transmission" << endl;
	cout << Fcar->getID() << " \t " << Fcar->getWeight() << " \t \t " << Fcar->getSeats() << " \t " << Fcar->getMaxspeed() << " \t \t " << Fcar->getColor() << " \t \t " << Fcar->getBrand() << " \t " << Fcar->getPrice() << "\t " << Fcar->getTrans() << endl;
	cout << Scar->getID() << " \t " << Scar->getWeight() << " \t \t " << Scar->getSeats() << " \t " << Scar->getMaxspeed() << " \t \t " << Scar->getColor() << " \t " << Scar->getBrand() << " \t " << Scar->getPrice() << "\t " << Scar->getTrans() << endl;

	Truck *Ftruck = new Truck(1, 7000, "Volvo", 3500000, "Manual", 120, 80, 25000); //Vytvoří objekt třídy Truck
	cout << "-----------------------------------------TRUCK------------------------------------------" << endl;
	cout << "ID \t WEIGHT (Kg) \t Brand \t Price (Czk) \t Transmission \t Max Speed \t Max Speed with Trailer \t Trailer Volume (litres)" << endl;
	cout << Ftruck->getID() << " \t "<<Ftruck->getWeight()<< " \t \t " << Ftruck->getBrand() << " \t " << Ftruck->getPrice() << " \t " << Ftruck->getTrans() << " \t " << Ftruck->getMaxSpeed() << " \t \t " << Ftruck->getMaxSpeedTrailer() << "\t \t \t \t " << Ftruck->getMaxTrailerVolume()  << endl;
	
	delete Fcar, Ftruck;

	return 0;
}