
#include<iostream>
using namespace std;

namespace cst8219
{
	class Vehicle {

	private:
		int numWheels;
		int numDoors;


		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;

		}
		Vehicle(int w) {
			Vehicle(w, 4);
		}
		Vehicle() {
			Vehicle(4);
		}


	};
}

int main(int argc, char **argv)
{
   cout << "Hello World!" << endl;
   return 0;
}