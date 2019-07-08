// File: random.c
// Programmer: Sean Mahady <smahady@iu.edu>
// Date: 5/14/2015
// Description: Simple Dice Roller

#include <iostream>	// iostream will give us input and output
#include <stdlib.h>  // stdlib.h gives us srand and rand  
#include <string>		// for string functions

#ifndef __HP_aCC
using namespace std;	// This is namespace standard. Gives me cin and cout I think?
#endif

// Only real part of this program. It just rols dice after all.
int main(void)
{
	int diceNum;
	int sideNum;
	int totalNum;
	int v1; //random result
	bool binFinished;
	string strYesNo;

	// initialize random seed
  	srand (time(NULL));

	


	// keep going until we are finished
	do {

		totalNum = 0;		

		cout << "\nNumber of dice:\n";		
		cin >> diceNum;

		cout << "\nNumder sided:\n";
		cin >> sideNum;

		for (int i=0; i < diceNum; i++) {
			v1 = (rand() % sideNum) + 1;
			cout << "Roll: " << i << ", Result: " << v1 << "\n";
			totalNum += v1;
		}
		cout << "Total: " << totalNum <<"\n";
		cout << "Continue? [y] or [n]\n";
		
		cin >> 	strYesNo;
		if (strYesNo == "n") {
			binFinished = true;
		}

	}
	while (binFinished == false);




 return 0;
}
