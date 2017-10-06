#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define PI 3.14

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

float secondLaw ()
{
	
	float force=0, mass=0, acc=0;

	cout << "What is the mass in kg? ";
	cin >> mass;
	cout << "What is the acceleration in m/s/s? ";
	cin >> acc;

	force = mass * acc;

	cout << "The force is "<< force << " N" << endl;


	return 0;
}

float volCyl ()
{
	float r=0, h=0, cVol=0;
	//const double PI=3.14;

	cout << "What is the height? ";
	cin >> h;
	cout << "What is the radius? ";
	cin >> r;

	cVol = PI * (r * r) * h;

	cout << "The volume is " << cVol << endl;

	return 0;
}

char encode ()
{
	char plainText, encodeText;

	cout << "Enter plaintext: ";
	cin >> plainText;
	
	encodeText = 10 + (plainText - 'a') + 'A';

	cout << "Encoded Text is: " << encodeText << endl;

	return 0;

}

float grav()
{
	float m1=0, m2=0, d=0, force=0;

	cout << "All mass is in kg, distance is in km" << endl;
	cout << "Enter the first mass ";
	cin >> m1;
	cout << "Enter the second mass ";
	cin >> m2;
	cout << "Enter the distance between the masses ";
	cin >> d;

	force = (m1 * m2) / (d * d);

	cout << "Mass 1 is " << m1 << " kg ";
	cout << "Mass 2 is " << m2 << " kg ";
	cout << "Distance between the masses is " << d << " km" << endl;	
	cout << "The gravitational force between the two masses is " << force << " N" << endl;

	return 0;
}

float tan()
{
	float theta=0, tan_theta=0;

	cout << "What is the value of theta? ";
	cin >> theta;

	tan_theta = sin (theta) / cos (theta);
	
	cout << "tan(theta) is " << tan_theta << endl;

	return 0;
}

float parRes ()
{
	float parallel_resistance=0;
	int R1=0, R2=0, R3=0;

	cout << "Enter the values for three resistors in Ohms, seperated by a space." << endl;
	cin >> R1 >> R2 >> R3;
	
	parallel_resistance = 1/(1/(float)R1 + 1/(float)R2 + 1/(float)R3);

	cout << "The parallel resistance between resistors is "  << parallel_resistance << " ohms" << endl;

	return 0;
}

float disPoints()
{
	float distance=0, x1=0, x2=0, y1=0, y2=0;
	cout << "Enter the x and y coordinate of the first point (seperated by a space)." << endl;
	cin >> x1 >> y1;

	cout << "Enter the x and y coordinate of the second point (seperated by a space)." << endl;
	cin >> x2 >> y2;

	distance = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));

	cout << "The distance between (" << x1 << "," << y1 << ") and (" << x2 << "," << y2
		<< ") is " << distance << endl;

	return 0;
}

float genEq()
{
	int a=0;
	float x=0, y=0, z=0;

	cout << "The general equation is y= (7/5) * x / a + z - a / (a % 2) + PI" << endl;
	
	cout << "Enter the value for x ";
	cin >> x;
	
	cout << "Enter the value for a (needs to be an integer) ";
	cin >> a;
	
	cout << "Enter the value for z ";
	cin >> z;

	y = ((float)7 / (float)5) * (x / (float)a) + z -((float)a / (a % 2) + PI);

	cout << "y is equal to " << y << endl;

	return 0;
}

int main ()
{
	int o=0, dec=0;
	
	do
	{
		o = option();

		switch (o)
		{
			case 1:
				secondLaw();
				break;
			case 2:
				volCyl();
				break;
			case 3:
				encode();
				break;
			case 4:
				grav();
				break;
			case 5:
				tan();
				break;
			case 6:
				parRes();
				break;
			case 7:
				disPoints();
				break;
			case 8:
				genEq();
				break;
		}
		
		cout << "Would you like to continue (0 for no, any other number for yes)?" << endl;
		cin >> dec;

	} while (dec != 0);
	
	
	return 0;
}



