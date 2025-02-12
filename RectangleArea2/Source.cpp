#include <iostream>
#include <conio.h>

using namespace std;

int Area;
int Width;
int Length;

int GetLengthFromUser() {
	cout << "What is the length of the Rectangle :";
	cin >> Length;
	return Length;
};

int GetWidthFromUser() {
	cout << "What is the length of the Rectangle :";
	cin >> Width;
	return Width;
};

int CalculateArea() {
	
	return Length * Width;
	
}

void DisplayArea(int) {
	cout << "The area is :" << Area;
}

int main() {
	GetLengthFromUser();
	GetWidthFromUser();
	Area = CalculateArea();
	DisplayArea(Area);


}

