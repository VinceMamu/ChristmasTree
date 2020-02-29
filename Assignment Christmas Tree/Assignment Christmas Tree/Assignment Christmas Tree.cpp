#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;
//In order to understand this code, one must acknowledge that colors are identified by numbers (for example, 1, 2, or 3). 
int main()
{	
	//Function to get different colors each iteration.
	for (int press = 0; press < 10+press; ++press){
		int colornum;
		if (press % 10 == 0) {
			colornum = press % 9;
		}
		else {
			colornum = press % 10;
		}
		//Setting console text color.
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
		
		//
		for (int rows = 0; rows < 5; rows++) {
			for (int extraspace = (6 - rows); extraspace > 0; (extraspace = extraspace - 1)) {
				cout << " ";

			}

			for (int extraplus = 0; extraplus < (rows + 1); extraplus++) {
				cout << "++";
			}
			cout << endl;

		}
		for (int rows = 0; rows < 4; rows++) {
			for (int extraspace = (5 - rows); extraspace > 0; (extraspace = extraspace - 1)) {
				cout << " ";

			}

			for (int extraplus = 0; extraplus < (rows + 2); extraplus++) {
				cout << "++";
			}
			cout << endl;

		}
		for (int rows = 0; rows < 2; rows++) {
			cout << "     ++++";
			cout << endl;

		}
		Sleep(200);
		system("CLS");
		
	}
	return 0;
}
