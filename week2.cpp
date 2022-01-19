
#include<iostream>
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
		Vehicle(int w, int d) {
			cout << "In constructor with 2 parameters" << endl;
			numWheels = w;
			numDoors = d;

		}
		Vehicle(int w) {
			cout << "In constructor with 1 parameters, wheels = " << w << endl;
			Vehicle(w, 4);
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
	Vehicle myVehicle;
   
   cout << "Hello World!" << endl;
   return 0;
}


