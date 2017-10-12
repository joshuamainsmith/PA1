#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define PI 3.14
#define G pow(6.67*10, -11)


// Menu Screen //

int option ()
{
	int opt=0;

	cout << "Select an option" << endl;
	cout << "1. Calculate Newton's Second Law of Motion" << endl;
	cout << "2. Volume of a cylinder" << endl;
	cout << "3. Character encoding" << endl;
	cout << "4. Gravitational force between two objects" << endl;
	cout << "5. Tangent of a right triangle" << endl;
	cout << "6. Finding parallel resistance between three resistors" << endl;
	cout << "7. Distance between two points" << endl;
	cout << "8. General equation" << endl;
	cin >> opt;

	return opt;
}


// 1. Newton's Second Law //

double secondLaw (double mass, double acc, double force)
{
	cout << "What is the mass in kg? ";
	cin >> mass;
	cout << "What is the acceleration in m/s/s? ";
	cin >> acc;

	force = mass * acc;

	cout << "The force is "<< force << " N" << endl;


	return 0;
}


// 2. Volume of a Cylinder //

double volCyl (double r, double h, double cVol)
{
	cout << "What is the height? ";
	cin >> h;
	cout << "What is the radius? ";
	cin >> r;

	cVol = PI * (r * r) * h;

	cout << "The volume is " << cVol << endl;

	return 0;
}



// 3. Character Encoding //

char encode (char plainText, char encodeText)
{
	cout << "Enter plaintext: ";
	cin >> plainText;
	
	encodeText = 10 + (plainText - 'a') + 'A';

	cout << "Encoded Text is: " << encodeText << endl;

	return 0;

}



// 4. Gravity //

double grav(double m1, double m2, double d, double force)
{
	cout << "All mass is in kg, distance is in km" << endl;
	cout << "Enter the first mass ";
	cin >> m1;
	cout << "Enter the second mass ";
	cin >> m2;
	cout << "Enter the distance between the masses ";
	cin >> d;

	force = (G * m1 * m2) / (d * d);

	cout << "Mass 1 is " << m1 << " kg ";
	cout << "Mass 2 is " << m2 << " kg ";
	cout << "Distance between the masses is " << d << " km" << endl;	
	cout << "The gravitational force between the two masses is " << force << " N" << endl;

	return 0;
}



// 5. Tangent //

double tan(double theta, double tan_theta)
{
	cout << "What is the value of theta in degrees? ";
	cin >> theta;

	tan_theta = sin (theta) / cos (theta);
	
	cout << "tan(theta) is " << tan_theta << endl;

	return 0;
}



// 6. Parallel Resistance //

double parRes (int R1, int R2, int R3, double parallel_resistance)
{
	cout << "Enter the values for three resistors in Ohms, seperated by a space." << endl;
	cin >> R1 >> R2 >> R3;
	
	parallel_resistance = 1/(1/(double)R1 + 1/(double)R2 + 1/(double)R3);

	cout << "The parallel resistance between resistors is "  << parallel_resistance << " ohms" << endl;

	return 0;
}



// 7. Distance Between Two Points //

double disPoints(double x1, double y1, double x2, double y2, double distance)
{
	cout << "Enter the x and y coordinate of the first point (seperated by a space)." << endl;
	cin >> x1 >> y1;

	cout << "Enter the x and y coordinate of the second point (seperated by a space)." << endl;
	cin >> x2 >> y2;

	distance = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));

	cout << "The distance between (" << x1 << "," << y1 << ") and (" << x2 << "," << y2
		<< ") is " << distance << endl;

	return 0;
}



// 8. General Equation //

double genEq(int a, double x, double y, double z)
{
	cout << "The general equation is y= (7/5) * x / a + z - a / (a % 2) + PI" << endl;
	
	cout << "Enter the value for x ";
	cin >> x;
	
	cout << "Enter the value for a (needs to be an integer) ";
	cin >> a;
	
	cout << "Enter the value for z ";
	cin >> z;

	y = ((double)7 / (double)5) * (x / (double)a) + z -((double)a / (a % 2) + PI);

	cout << "y is equal to " << y << endl;

	return 0;
}


// Main Function //

int main ()
{
	int o=0, dec=0;
	double num1=0, num2=0, num3=0, num4=0, result=0;
	int iNum1=0, iNum2=0, iNum3=0;
	char ch1, rCh;
	
	do
	{
		o = option();

		switch (o)
		{
			case 1: // Newton's Second Law //
				secondLaw(num1, num2, result);
				break;
			case 2: // Volume of a Cylinder //
				volCyl(num1, num2, result);
				break;
			case 3: // Character Encoding //
				encode(ch1, rCh);
				break;
			case 4: // Gravity //
				grav(num1, num2, num3, result);
				break;
			case 5: // Tangent //
				tan(num1, result);
				break;
			case 6: // Parallel Resistance //
				parRes(iNum1, iNum2, iNum3, result);
				break;
			case 7: // Distance Between Points //
				disPoints(num1, num2, num3, num4, result);
				break;
			case 8: // General Equation //
				genEq(iNum1, num1, num2, result);
				break;
			default:
				cout << "Choose a valid option." << endl;
				break;
		}
		
		cout << "Would you like to continue (0 for no, any other number for yes)?" << endl;
		cin >> dec;

	} while (dec != 0);	
	
	return 0;
}



