// Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<fstream>

using namespace std;





int main()
{

	int choice;
	int quant;

	//quantity
	int Qrooms, Qpasta, Qnoodles, Qburger, Qshake, Qchicken;
	//food items sold
	int Srooms, Spastas, Snoodles, Sburger, Sshake, Schicken;
	//total price of items
	int total_rooms = 0, total_pastas = 0, total_burger = 0, total_shake = 0, total_chicken = 0, total_noodles = 0;

	cout << "Quantity of item we have \n";
	cout << "Quantity of rooms \n";
	cin >> Qrooms;
	cout << "Quantity of pasta \n";
	cin >> Qpasta;
	cout << "Quantity of noodles \n";
	cin >> Qnoodles;
	cout << "Quantity of burger \n";
	cin >> Qburger;
	cout << "Quantity of shake \n";
	cin >> Qshake;
	cout << "Quantity of chicken \n";
	cin >> Qchicken;


	start:
	cout << "\n\t\tPlease select from the menu options \n";
	cout << "1) room     \n";
	cout << "2) pasta    \n";
	cout << "3) noodles  \n";
	cout << "4) burger   \n";
	cout << "5) shake    \n";
	cout << "6) chicken  \n";
	cout << "7) Information regarding sales and collections \n";
	cout << "8) Exit \n";

	cout << "enter your choice \n";
	cin >> choice;

	switch (choice) {

	case 1:
		cout << "enter number of rooms you want ";
		cin >> quant;
		if (Qrooms - Srooms >= quant) {

			Srooms += quant;
			total_rooms += quant * 1200;
			cout << quant << " room/rooms have been alloted to you \n";
		}
		else {

			cout << "Only " << Qrooms - Srooms << " rooms are available " << endl;
		}
		break;

	case 2:
		cout << "enter number of pasta you want ";
		cin >> quant;
		if (Qpasta - Spastas >= quant) {

			Spastas += quant;
			total_pastas += quant * 200;
			cout << quant << " pasta/pastas is the order \n";
		}
		else {

			cout << "Only " << Qpasta - Spastas << " pasta are available " << endl;
		}
		break;

	case 3:
		cout << "enter number of rooms you want ";
		cin >> quant;
		if (Qnoodles - Snoodles >= quant) {

			Snoodles += quant;
			total_noodles += quant * 400;
			cout << quant << " is the order \n";
		}
		else {

			cout << "Only " << Qnoodles - Snoodles << " noodles are available " << endl;
		}
		break;

	case 4:
		cout << "enter number of burger you want ";
		cin >> quant;
		if (Qburger - Sburger >= quant) {

			Sburger += quant;
			total_burger += quant * 300;
			cout << quant << " burger/burgers is the order \n";
		}
		else {

			cout << "Only " << Qburger - Sburger << " burger are available " << endl;
		}
		break;

	case 5:
		cout << "enter number of shake you want ";
		cin >> quant;
		if (Qshake - Sshake >= quant) {

			Sshake += quant;
			total_shake += quant * 1200;
			cout << quant << " is the order \n";
		}
		else {

			cout << "Only " << Qshake - Sshake << " shake/shakes are available " << endl;
		}
		break;

	case 6:
		cout << "enter number of chicken you want ";
		cin >> quant;
		if (Qchicken - Schicken >= quant) {

			Schicken += quant;
			total_chicken += quant * 500;
			cout << quant << " chicken/chickens is the order \n";
		}
		else {

			cout << "Only " << Qchicken - Schicken << " chicken are available " << endl;
		}
		break;

	case 7:
		cout << "\n\t\t Details of sales and collection \n";
		cout << "Number of rooms we had " << Qrooms << endl;
		cout << "Number of rooms we have given for rent " << Srooms << endl;
		cout << "Remaining rooms " << Qrooms - Srooms << endl;
		cout << "Total rooms collection for the day " << total_rooms << endl;


		cout << "Number of pastas we had " << Qpasta << endl;
		cout << "Number of pastas we sold " << Spastas << endl;
		cout << "Remaining pastas " << Qpasta - Spastas << endl;
		cout << "Total pastas collection for the day " << total_pastas << endl;

		cout << "Number of noodles we had " << Qnoodles << endl;
		cout << "Number of noodles we sold " << Snoodles << endl;
		cout << "Remaining noodles " << Qnoodles - Snoodles << endl;
		cout << "Total noodles collection for the day " << total_noodles << endl;

		cout << "Number of burgers we had " << Qburger << endl;
		cout << "Number of burgers we sold " << Sburger << endl;
		cout << "Remaining burgers " << Qburger - Sburger << endl;
		cout << "Total burger collection for the day " << total_burger << endl;

		cout << "Number of shake we had " << Qshake << endl;
		cout << "Number of shakes we shake " << Sshake << endl;
		cout << "Remaining shake " << Qshake - Sshake << endl;
		cout << "Total shakes collection for the day " << total_shake << endl;

		cout << "Number of chickens we had " << Qchicken << endl;
		cout << "Number of chickens we have given for rent " << Srooms << endl;
		cout << "Remaining chickens " << Qchicken - Schicken << endl;
		cout << "Total chicken collection for the day " << total_chicken << endl;

		break;

	case 8:
		exit(0);

	default:
		cout << "please select the numbers mentioned above \n";


	}

	goto start;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
