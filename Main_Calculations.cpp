/* This Project will calculate various things based on the user input. It is a projectile velocity calculatior, and it will use the formula Vy = Voy -gt, where Voy is initial velocity in m/s,
g is 9.81 m/s^2, and t is time in seconds. */
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome! This program will calculate projectile motion unknown variables/quantities based on the known variables.\nThis program uses the equation Vy = Voy -gt. " << endl;
	const double g = 9.80665; // units : m/s^2= meters / second^2

	int choice;
	cout << "What do you want to solve for? Please only type in 1,2 or 3.\n";
	cout << "1) Vy\n"
		 << "2) Voy\n"
		 << "3) t\n";
	cin >> choice;

	double Voy, t, Vy;
	if (choice == 1)
	{
		// Vy = Voy -gt. First defined variables as double data type, then gathered their values from the user.

		cout << "Please enter in the value for the initial y velocity in units of m/s or meters/second." << endl;
		cin >> Voy;

		cout << "Please enter in the desired time of the trajectory in the units of seconds." << endl;
		cin >> t;

		// next, plugging known values into equation to find y velocity.
		double Vy = Voy - g * t;
		cout << "Here is your y-velocity at the given time. If the sign is negative, asume velocity is in downward direction. \n"
			 << Vy << "m/s" << endl;
	}
	else if (choice == 2)
	{
		cout << "Please enter in the value for the y velocity at a specific time in units of m/s or meters/second." << endl;
		cin >> Vy;

		cout << "Please enter in the time of the trajectory in the units of seconds." << endl;
		cin >> t;

		// using rearranged equation of Voy = Vy + gt
		double Voy = Vy + g * t;
		cout << "Your initial velocty is \n"
			 << Voy << "m/s" << endl;
	}
	else if (choice == 3)
	{
		cout << "Please enter in the value for the y velocity at a specific time in units of m/s or meters/second." << endl;
		cin >> Vy;

		cout << "Please enter in the value for the initial y velocity in units of m/s or meters/second." << endl;
		cin >> Voy;

		// re-arranging for time from equation Vy = Voy - gt
		t = (Vy - Voy) / g;
		cout << "Your value for time in seconds is " << t << "seconds" << endl;
	}
	else
	{
		cout << "\Not a valid choice, please type in 1, 2, or 3 based on what is unknown."; // This acts like input validation, because if anything else is typed, then the user will get this statement.
	}

	return 0;
}
