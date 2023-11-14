#include <iostream>
#include <string>
using namespace std;


struct Container {
	string name;
	int x;
	int y;
	int z;
};

int main() {
	
	int a = 100;
	int b = 50;
	int* aPtr;
	aPtr = &a;

	cout << aPtr << endl;
	cout << *aPtr << endl;

	aPtr = &b;
	cout << aPtr << endl;
	cout << *aPtr << endl;


	int nums[] = {3, 4, 5, 6, 7, 8, 9, 0};
	int* numPtr;
	numPtr = nums;
	cout << *numPtr << endl;

	numPtr += 5;
	cout << *numPtr << endl;

	/////////////////////////////////
	Container cntr = { "Killian", 5, 6, 7 };
	Container* cntrPtr = &cntr;
	
	cout << (*cntrPtr).name << endl;
	cout << (*cntrPtr).x << endl;
	cout << (*cntrPtr).y << endl;
	cout << (*cntrPtr).z << endl;

	cout << cntrPtr->name << endl;
	cout << cntrPtr->x << endl;

	system("pause");
}