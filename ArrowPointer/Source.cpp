#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <cstdlib>  // rand library
#include <ctime> // clock in our pc
#include "Ferdi.h"

using namespace std;

int main()

{	//  Aroow Member Selectin Operator
	//Arrow using for pointer, dot using for object

	Ferdi ferdiObject;
	Ferdi *ferdiPointer = &ferdiObject;

	ferdiObject.printCrap();
	ferdiPointer->printCrap();



	_getch();
	return 0;
}

