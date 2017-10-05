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

int main ()
{
	int o=0;

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
	}
	
	
	return 0;
}



