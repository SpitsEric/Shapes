#include <iostream>
#include <iomanip>
using namespace std;

void TriangleArea();
void ParallelogramArea();
void RectangleArea();
void TrapezoidArea();
void CircleArea();
void ConeVolume();
void CylinderVolume();
void RectangularPrismVolume();
void TrapezoidPrismVolume();
void SphereVolume();

int main()
{
	// Variables for area and volume choices
	int area_volume, shape_type;
	// Set the desired output formatting for numbers.  
	cout << setprecision(2) << fixed << showpoint;
	//menu
	cout << "===============================\n ";
	cout << "= Enter 1-Area or 2-Volume: =\n";
	cout << "===============================\n ";
	
	cout << "Your entry:  \n ";
	cin >> area_volume;
	// choice for area or volume
	if (area_volume == 1)
	{
		
		cout << "======================\n";
		cout << " 1- Triangle\n 2- Parallelogram\n 3- Rectangle\n 4- Trapezoid\n 5- Circle\n";
		cout << "======================\n ";
		
		cout << "Your entry:  \n ";
		cin >> shape_type;

		//area choice
		switch (shape_type)
		{
			//
		case (1):

			TriangleArea();
			break;

			//
		case(2):

			ParallelogramArea();
			break;

			//
		case (3):

			RectangleArea();
			break;

			//
		case (4):

			TrapezoidArea();
			break;

			//
		case(5):

			CircleArea();
			break;

			//
		default:
			break;
		}
		
	}
	//volume choice
	else if (area_volume == 2)
	{
		
		cout << "======================\n";
		cout << "1- Cone\n2- Cylinder\n3- Rectangular Prism\n4- Trapezoid Prism\n5- Sphere\n";
		cout << "======================\n ";
		
		cout << "Your entry:  \n ";
		cin >> shape_type;
		
		switch (shape_type)
		{
			
		case (1):

			ConeVolume();
			break;

			
		case(2):

			CylinderVolume();
			break;

			
		case (3):

			RectangularPrismVolume();
			break;

			
		case (4):

			TrapezoidPrismVolume();
			break;

			
		case(5):

			SphereVolume();
			break;

			
		default:
			break;
		}
		
	}
	
	else
		cout << "Invalid Entry\n";
	
	system("pause");
	
	return 0;
}
//area calculations 
void TriangleArea()
{
	double height;
	double length;
	double area;

	cout << "Please enter the height of the triangle: " << endl;
	cin >> height;
	cout << "Please enter the length of the triangle: " << endl;
	cin >> length;

	area = (height * length) * 0.5;

	cout << "The area of the triangle is: " << area << endl;
	
}

void ParallelogramArea()
{
	double height;
	double base;
	double area;

	cout << "Please enter the height of the parallelogram: " << endl;
	cin >> height;
	cout << "Please enter the length of the parallelogram: " << endl;
	cin >> base;

	area = (height * base);

	cout << "The area of the parallelogram is: " << area << endl;

}

void RectangleArea()
{
	double height;
	double base;
	double area;

	cout << "Please enter the height of the rectngle: " << endl;
	cin >> height;
	cout << "Please enter the length of the rectangle: " << endl;
	cin >> base;

	area = (height * base);

	cout << "The area of the rectangle is: " << area << endl;

}

void TrapezoidArea()
{
	double height;
	double base1;
	double base2;
	double area;

	cout << "Please enter the the length for base 1: " << endl;
	cin >> base1;
	cout << "Please enter the length of base 2: " << endl;
	cin >> base2;
	cout << "Please enter the height: " << endl;
	cin >> height;

	area = (base1 + base2) * height / 2;

	cout << "The area of the trapezoid is: " << area << endl;

}

void CircleArea()
{
	double radius;
	double area;

	cout << "Please enter the radius of the circle: " << endl;
	cin >> radius;

	area = pow(radius, 2) * 3,14;

	cout << "The area of the circle is: " << area << endl;

}
//volume calculations
void ConeVolume()
{
	double height;
	double radius;
	double volume;

	cout << "Please enter the height of the cone: " << endl;
	cin >> height;
	cout << "Please enter the radius of the cone: " << endl;
	cin >> radius;

	volume = pow(radius, 2) * 3.14 * (height / 3);

	cout << "The volume of the cone is: " << volume << endl;

}

void CylinderVolume()
{
	double height;
	double radius;
	double volume;

	cout << "Please enter the height of the cylinder: " << endl;
	cin >> height;
	cout << "Please enter the radius of the cylinder: " << endl;
	cin >> radius;

	volume = pow(radius, 2) * 3.14 * height;

	cout << "The volume of the cylinder is: " << volume << endl;

}

void RectangularPrismVolume()
{
	double height;
	double length;
	double width;
	double volume;
	
	cout << "Please enter the height of the rectangular prism: " << endl;
	cin >> height;
	cout << "Please enter the length of the rectangular prism: " << endl;
	cin >> length;
	cout << "Please enter the width of the rectangular prism: " << endl;
	cin >> width;

	volume = length * width * height;

	cout << "The volume of the rectangular prism is: " << volume << endl;

}

void TrapezoidPrismVolume()
{
	double height;
	double length;
	double base1;
	double base2;
	double area;
	double volume;

	cout << "Please enter the the length of base 1: " << endl;
	cin >> base1;
	cout << "Please enter the length of base 2: " << endl;
	cin >> base2;
	cout << "Please enter the height of the trapezoid face: " << endl;
	cin >> height;
	cout << "Please enter the length between the two trapezoids: " << endl;
	cin >> length;


	area = (base1 + base2) * height / 2;
	volume = area * length;

	cout << "The volume of the trapezoid prism is: " << volume << endl;

}

void SphereVolume()
{
	double radius;
	double volume;

	cout << "Please enter the radius of the sphere: " << endl;
	cin >> radius;

	volume = pow(radius, 3) * (1.33 * 3.14);

	cout << "The volume of the sphere is: " << volume << endl;

}