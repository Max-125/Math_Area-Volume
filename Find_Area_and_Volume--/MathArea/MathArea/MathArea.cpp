// MathArea.cpp : Defines the entry point for the application.
//

#include "MathArea.h"
#include <cmath>
using namespace std;

int main()
{
	int choise;
	cout << "\t\t----------------------------------------------------\n\n\n";
	cout << "\t\t------------Welcome to the MathArea page------------\n\n\n";
	cout << "\t\t-----------------------MENU-------------------------\n\n\n";
	cout << "\t\t|Press 0 to find AREA of Triangle                  |" << endl;
	cout << "\t\t|Press 1 to find AREA of Circle	                   |" << endl;
	cout << "\t\t|Press 2 to find AREA of Square	                   |" << endl;
	cout << "\t\t|Press 3 to find AREA of Rhombus	           |" << endl;
	cout << "\t\t|Press 4 to find AREA of Rectangle	           |" << endl;
	cout << "\t\t|Press 5 to find AREA of Parallelogram             |" << endl;
	cout << "\t\t|Press 6 to find AREA of Trapeze                   |" << endl;

	cout << "\t\t|Press 7 to find AREA of DirectPrism               |" << endl;
	cout << "\t\t|Press 8 to find VOLUME of DirectPrism             |" << endl;

	cout << "\t\t|Press 9 to find AREA of DirectPeramide            |" << endl;
	cout << "\t\t|Press 10 to find VOLUME of DirectPeramide         |" << endl;

	cout << "\t\t|Press 11 to find AREA of Cylinder                 |" << endl;
	cout << "\t\t|Press 12 to find VOLUME of Cylinder               |" << endl;

	cout << "\t\t|Press 13 to find AREA of Conus                    |" << endl;
	cout << "\t\t|Press 14 to find VOLUME of Conus                  |" << endl;

	cout << "\t\t|Press 15 to find AREA of Globe                    |" << endl;
	cout << "\t\t|Press 16 to find VOLUME of Globe                  |" << endl;

	// new !!!
	cout << "\t\t|Press 17 find hypotenuse (you know side a and b)  |" << endl;
	cout << "\t\t|Press 18 find unknown side of right triangle      |" << endl; 
	cout << "\t\t|Press 19 to find cos_a of right triangle          |" << endl;
	cout << "\t\t|Press 20 to find sin_a of right triangle          |" << endl;
	cout << "\t\t|Press 21 to find tan_a of right triangle          |" << endl;

	cout << "\t\t|Press * to EXIT                                   |" << endl;
	cout << "\n\t\t PLEASE ENTER YOUR CHOISE : ";
	cin >> choise;
	cout << endl;

	switch (choise) {
	case 0 : 
		showTriangleArea();
		break;
	case 1 :
		showCircleArea();
		break;
	case 2 :
		showSquareArea();
		break;
	case 3 :
		showRhombusArea();
		break;
	case 4 :
		showRectangleArea();
		break;
	case 5 :
		showParallelogramArea();
		break;
	case 6 :
		showTrapezeArea();
		break;
	case 7 :
		showDirectPrismArea();
		break;
	case 8:
		showDirectPrismVolume();
		break;
	case 9:
		showDirectPeramideArea();
		break;
	case 10:
		showDirectPeramideVolume();
		break;
	case 11 :
		showCylinderArea();
		break;
	case 12 :
		showCylinderVolume();
		break;
	case 13 :
		showConusArea();
	case 14 :
		showConusVolume();
	case 15 :
		showGlobeArea();
	case 16 :
		showGlobeVolume();
	case 17 :
		theorem_of_Pythagorus();
	case 18 :
		find_side_of_rightTriangle();
	case 19 :
		cos_a_of_right_triangle();
	case 20:
		sin_a_of_right_triangle();
	case 21 :
		tan_a_of_right_triangle();
	default :
		system("cls");
		cout << "\t\t PLEASE SELECT YOUR OPTION \n\n\n" << endl;
		main();
	}
}


void find_side_of_rightTriangle() {
	double a , c;
	system("cls");
	cout << "\t\t Please enter the side and hypotenuse of triangle: " << endl;
	cout << "\t\t Side : ";
	cin >> a;
	cout << "\t\t Hypotenuse : ";
	cin >> c;
	cout << "\t\t Unknown side = ";
	cout << sqrt((c * c) - (a * a));
	cout << "" << endl;
	main();
}

void tan_a_of_right_triangle() {
	double a, b;
	system("cls");
	cout << "\t\t Please enter the a side and b side of triangle: " << endl;
	cout << "\t\t 1st side : ";
	cin >> a;
	cout << "\t\t 2nd side : ";
	cin >> b;
	cout << "\t\t tan_a = ";
	cout << a << " / " << b << " = " << a / b;
	cout << "" << endl;
	main();
}

void sin_a_of_right_triangle() {
	double a, c;
	system("cls");
	cout << "\t\t Please enter the a side and c side of triangle: " << endl;
	cout << "\t\t 1st side : ";
	cin >> a;
	cout << "\t\t 2nd side : ";
	cin >> c;
	cout << "\t\t sin_a = ";
	cout << a << " / " << c << " = " << a / c;
	cout << "" << endl;
	main();

}

void cos_a_of_right_triangle() {
	double b, c;
	system("cls");
	cout << "\t\t Please enter the b side and c side of triangle: " << endl;
	cout << "\t\t 1st side : ";
	cin >> b;
	cout << "\t\t 2nd side : ";
	cin >> c;
	cout << "\t\t cos_a = ";
	cout << b << " / " << c << " = " << b / c;
	cout << "" << endl;
	main();
}

void theorem_of_Pythagorus() {
	double a, b, c;
	system("cls");
	cout << "\t\t Please enter the a side and b side of triangle: " << endl;
	cout << "\t\t 1st side : ";
	cin >> a;
	cout << "\t\t 2nd side : ";
	cin >> b;
	cout << "\t\t Hypotenuse = ";
	cout << a << " + " << b << " = " << sqrt((a * a) + (b * b)) ;
	cout << "" << endl;
	main();
}


void showTriangleArea() {
	double base, height;
	system("cls");
	cout << "\t\t Please enter the base and height of triangle: " << endl;
	cout << "\t\t BASE : ";
	cin >> base;
	cout << "\t\t HEIGHT : ";
	cin >> height;
	cout << "\t\t Area : ";
	cout << (base * height) / 2 << endl;
	cout << "" << endl;
	main();
};

void showCircleArea() {
	double radius;
	double Numberπ = 3.14;
	system("cls");
	cout << "\t\t Please enter the radius of circle : " << endl;
	cout << "\t\t RADIUS : ";
	cin >> radius;
	cout << "\t\t Area : ";
	cout << Numberπ * (radius * radius) << endl;
	cout << "" << endl;
	main();
};

void showSquareArea() {
	double side;
	system("cls");
	cout << "\t\t Please enter the side of square : " << endl;
	cout << "\t\t SIDE : " ;
	cin >> side;
	cout << "\t\t Area : ";
	cout << side * side << endl;
	cout << "" << endl;
	main();
};

void showRhombusArea() {
	double diagonal1, diagonal2;
	system("cls");
	cout << "\t\t Please enter the first and second diagonals of rhombus : " << endl;
	cout << "\t\t FIRST_DIAGONAL : ";
	cin >> diagonal1;
	cout << "\t\t SECOND_DIAGONAL : ";
	cin >> diagonal2;
	cout << "\t\t Area : ";
	cout <<  0.5 * diagonal1 * diagonal2;
	cout << "" << endl;
	main();
};

void showRectangleArea() {
	double width, length;
	system("cls");
	cout << "\t\t Please enter the width and length of rectangle : " << endl;
	cout << "\t\t WIDTH : ";
	cin >> width;
	cout << "\t\t LENGTH : ";
	cin >> length;
	cout << "\t\t Area : ";
	cout <<  width * length;
	cout << "" << endl;
	main();
};

void showParallelogramArea() {
	double base, height;
	system("cls");
	cout<< "\t\t Please enter the base and height of rectangle : " << endl;
	cout << "\t\t BASE : ";
	cin >> base;
	cout << "\t\t HEIGHT : ";
	cin >> height;
	cout << "\t\t Area : ";
	cout <<  base * height;
	cout << "" << endl;
	main();
};

void showTrapezeArea() {
	double baseA, baseB;
	double height;
	system("cls");
	cout << "\t\t Please enter the baseA , baseB and height of rectangle : " << endl;
	cout << "\t\t BASE_A : ";
	cin >> baseA;
	cout << "\t\t BASE_B : ";
	cin >> baseB;
	cout << "\t\t HEIGHT : ";
	cin >> height;
	cout << "\t\t Area : ";
	cout << ((baseA + baseB) / 2) * height;
	cout << "" << endl;
	main();
};

void showDirectPrismArea() {
	double areaOfLiteralSide, areaOFBase;
	system("cls");
	cout << "\t\t Please enter the area of literal side and area of base prism : " << endl;
	cout << "\t\t AREA_OF_LITERAL_SIDE : ";
	cin >> areaOfLiteralSide;
	cout << "\t\t AREA_OF_BASE : ";
	cin >> areaOFBase;
	cout << "\t\t Area : ";
	cout <<  areaOfLiteralSide + (2 * areaOFBase);
	cout << "" << endl;
	main();
};

//FORMULA 

//A = (B + 4 × sl) / 2
//Where: A is the surface area of the pyramid, B is the area of the base, and sl is the slant height of the pyramid, which is the perpendicular distance from the 
//center of the base to the vertex of the pyramid.

void showDirectPeramideArea() {
	double slantHeight, areaOFBase;
	system("cls");
	cout << "\t\t Please enter the area of base and slantHeight prism : " << endl;
	cout << "\t\t SLANT_HEIGHT : ";
	cin >> slantHeight;
	cout << "\t\t AREA_OF_BASE : ";
	cin >> areaOFBase;
	cout << "\t\t Area : ";
	cout << (areaOFBase + 4 * slantHeight) / 2;
	cout << "" << endl;
	main();
};

void showCylinderArea() {
	double Numberπ = 22 / 7;
	double radius , height;
	system("cls");
	cout << "\t\t Please enter the radius and height of cylinder : " << endl;
	cout << "\t\t RADIUS : ";
	cin >> radius;
	cout << "\t\t HEIGHT : ";
	cin >> height;
	cout << "\t\t Area : ";
	cout <<   2 * Numberπ * radius * height;
	cout << "" << endl;
	main();
};

void showConusArea() {
	double Numberπ = 22 / 7;
	double slantHeight, radius;
	system("cls");
	cout << "\t\t Please enter the radius and slantHeight of Conus : " << endl;
	cout << "\t\t SLANT_HEIGH : ";
	cin >> slantHeight;
	cout << "\t\t RADIUS : ";
	cin >> radius;
	cout << "\t\t Area : ";
	cout << Numberπ * slantHeight * radius;
	cout << "" << endl;
	main();
};

void showGlobeArea() {
	double Numberπ = 22 / 7;
	double radius;
	system("cls");
	cout << "\t\t Please enter the radius and height of Globe : " << endl;
	cout << "\t\t RADIUS : ";
	cin >> radius;
	cout << "\t\t Area : ";
	cout <<  4 * Numberπ * (radius * radius);
	cout << "" << endl;
	main();
};

//Volume======================

void showDirectPrismVolume() {
	double  areaOFBase , height;
	system("cls");
	cout << "\t\t Please enter the area of base and height of prism : " << endl;
	cout << "\t\t AREA_OF_BASE : ";
	cin >> areaOFBase;
	cout << "\t\t HEIGHT : ";
	cin >> height;
	cout << "\t\t Area : ";
	cout <<  areaOFBase * height;
	cout << "" << endl;
	main();
};

void showDirectPeramideVolume() {
	double areaOFBase, height;
	system("cls");
	cout << "\t\t Please enter the radius and height of direct peramide : " << endl;
	cout << "\t\t AREA_OF_BASE : ";
	cin >> areaOFBase;
	cout << "\t\t HEIGHT : ";
	cin >> height;
	cout << "\t\t Area : ";
	cout <<  0.3 * areaOFBase * height;
	cout << "" << endl;
	main();
};

void showCylinderVolume() {
	double radius, height;
	double Numberπ = 22 / 7;
	cout << "\t\t Please enter the radius and height of cylinder : " << endl;
	cout << "\t\t RADIUS : ";
	cin >> radius;
	cout << "\t\t HEIGHT : ";
	cin >> height;
	cout << "\t\t Area : ";
	cout <<  Numberπ * (radius * radius) * height;
	cout << "" << endl;
	main();
};

void showConusVolume() {
	double radius, height;
	double Numberπ = 22 / 7;
	cout << "\t\t Please enter the radius and height of conus : " << endl;
	cout << "\t\t RADIUS : ";
	cin >> radius;
	cout << "\t\t HEIGHT : ";
	cin >> height;
	cout << "\t\t Area : ";
	cout <<  0.3 * Numberπ * (radius * radius) * height;
	cout << "" << endl;
	main();
};

void showGlobeVolume() {
	double radius;
	double Numberπ = 22 / 7 ;
	cout << "\t\t Please enter the radius of globe : " << endl;
	cout << "\t\t RADIUS : ";
	cin >> radius;
	cout << "\t\t Area : ";
	cout <<  1.3 * Numberπ * (radius * radius);
	cout << "" << endl;
	main();
};



