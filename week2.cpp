#include<iostream>
/*
Dylan Carroll
January 25h
Lab 01
Lab Prof: Kaci Taouch
*/
using namespace std;

namespace cst8219 {
	class Vehicle;
}
using namespace cst8219;

	class cst8219::Vehicle {

	private:
		int numWheels;
		int numDoors;

	public:
		Vehicle(int w, int d) { // constructors 
			cout << "In constructor with 2 parameters" << endl;
			numWheels = w;
			numDoors = d;

		}
		Vehicle(int w) {
			cout << "In constructor with 1 parameters, wheels = " << w << endl;
			Vehicle(w, 4); //mfc? 
		}
		Vehicle() {
			cout << "In constructor with 0 parameters" << endl;
			Vehicle(4);
		}

		~Vehicle() {
			cout << "in destructor" << endl;
		}


	};

int main(int argc, char **argv)
{
	int w, d;
	Vehicle veh1;
	cout << "Vehicle takes " << sizeof(veh1) << endl;
	Vehicle veh2(4);
	cout << "Vehicle takes " << sizeof(veh1) << endl;
	Vehicle veh3(4, 2);
	cout << "Vehicle takes " << sizeof(veh1) << endl;
   
	int leave = 0;
	string quit = "s";

	while (leave == 0) {
		Vehicle* pVehicle; // Pointer for vehicle 
		cout << "enter number of doors" << endl;

	
		while (!(cin >> d ) || d < 0) { // input validation
			cout << "Please make sure to enter a positive integer" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}
		cout << "enter number of wheels" << endl;
		while (!(cin >> w) || w < 0) { // input validation
			cout << "Please make sure to enter a positive integer" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}

		pVehicle = new Vehicle(w, d);

		cout << "Would you like to quit or stay and make another vehicle?(q/s): " << endl;
		cin >> quit;
		if (quit == "q") {
			leave = 1;
		}
		delete pVehicle;//As the destructor should be called each time it iterates again
	}

   cout << "Hello World!" << endl;
   return 0;
}


