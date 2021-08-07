#include <iostream>
#include "LearningLoopsLibrary.h"


using namespace std;

void LearningLoops() {
	//TestingWhile();
	/*TestingFor();*/
	TestingDoWhile();
}

void TestingWhile() {
	
	/*total += num;
	total = total + num;*/
	
	int num = 1;
	
	while (num < 9) {
		cout << "Number : " << num << endl;
		num = num + 2;
	}

}

void TestingFor() {
	for (int a = 1; a <= 10; a+=2) {
		cout << a << endl;
	}
}

void TestingDoWhile() {
	int a = 0;
	do {
		cout << a << endl;
		a++;
	} while (a < 5);
}