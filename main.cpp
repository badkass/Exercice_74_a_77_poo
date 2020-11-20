#include <iostream>
#include "Cpoint.h"


using namespace std;
const int SIZE = 4;

int main() {
		
	CPoint* tabPoint = new CPoint[SIZE];

	delete[] tabPoint;
	
	return 0;
}

