#include "includes.h"
#include "Date.h"
#include "Person.h"
#include "Place.h"
#include "Trip.h"
#include "Vehicle.h"


long displayMainMenu()
{
	string user_in;
	cout << "\n Welcome to LyFtEr! \n\n"<< endl
		<< " +============================================================================+" << endl <<
		" | 1.  Login!                                                                 |" << endl <<
		" | 2.  Search for next trip                                                   |" << endl <<
		" | 3.  Trip history                                                           |" << endl <<
		" | 4.  Payment options                                                        |" << endl <<
		" +============================================================================+\n" << endl;
	cout << "\n Selected number from menu:\n";
	getline(cin, user_in);

	long user_in_=stol(user_in);
	return user_in_;
}

void userLogin()
{
	string username="";
	string password="";

	cout << "Input your username: " << endl;
	getline(cin, username);

	cout << "Input your password: " << endl;
	getline(cin, password);
}

void displayLoginMenu()
{
	cout << "You are logged in! Here are your options:" << endl
		<< "|*****************************************************************|" << endl <<
		"| 1.  Search for your next trip                                   |" << endl <<
		"| 2.  Your trip history                                           |" << endl <<
		"| 3.  Your buddies                                                |" << endl <<
		"| 4.  Your payment options                                        |" << endl <<
		"| 4.  Your settings                                               |" << endl <<
		"| 5.  Log out                                                     |" << endl <<
		"|*****************************************************************|" << endl;
	cout << "Selected number from menu: ";
}

int main()
{
    cout << "     __ __  __ ______ ______ ______ ____  " << endl;
    cout << "    / / \\ \\/ // ____//_  __// ____// __ \\ " << endl;
    cout << "   / /   \\  // /_     / /  / __/  / /_/ / " << endl;
    cout << "  / /___ / // __/    / /  / /___ / _, _/  " << endl;
    cout << " /_____//_//_/      /_/  /_____//_/ |_|   " << endl;
    switch(displayMainMenu())
    {
    case 1:
    	userLogin();
    	displayLoginMenu();
    	break;
    default:
    	cout << "nope" << endl;
    }
    return 0;
}

void displayTripMenu()
{
	cout << "Let's find you your next trip! Pick your filters:" << endl
		<< "|*****************************************************************|" << endl <<
		"| +.  During your next trip you'll want to...                     |" << endl <<
		"| 1.  Smoke in the car                                            |" << endl <<
		"| 2.  Travel with buddy X                                         |" << endl <<
		"| 3.  Travel in X type of vehicle                                 |" << endl <<
		"| 4.  Go back to previous menu                                    |" << endl <<
		"|*****************************************************************|" << endl;
	cout << "Selected number from menu: ";
}

void displayTripHistoryMenu()
{
	cout << "Do you want to filter your history? If so, pick your filters: " << endl
		<< "|*****************************************************************|" << endl <<
		"| 1.  By vehicle type                                             |" << endl <<
		"| 2.  By driver name                                              |" << endl <<
		"| 3.  By accompanying buddy name                                  |" << endl <<
		"| 4.  I don't want any of those, show me all of my trips          |" << endl <<
		"| 5.  Go back to previous menu                                    |" << endl <<
		"|*****************************************************************|" << endl;
	cout << "Selected number from menu: ";
}

void displayBuddyMenu()
{
	cout << "Here are your buddies! If you want, be sure to add more! " << endl
		<< "|*****************************************************************|" << endl <<
		"| 1.  Add buddy                                                   |" << endl <<
		"| 2.  Remove buddy                                                |" << endl <<
		"| 3.  Display all buddies                                         |" << endl <<
		"| 4.  Go back to previous menu                                    |" << endl <<
		"|*****************************************************************|" << endl;
	cout << "Selected number from menu: ";
}

void displayPaymentMenu()
{
	cout << "Here you can manage your wallet and payment options: " << endl
		<< "|*****************************************************************|" << endl <<
		"| 1.  Add funds                                                   |" << endl <<
		"| 2.  Consult all your payment                                    |" << endl <<
		"| 3.  Consults all your transactions                              |" << endl <<
		"| 4.  Go back to previous menu                                    |" << endl <<
		"|*****************************************************************|" << endl;
	cout << "Selected number from menu: ";
}

void displaySettingsMenu()
{
	cout << "Here you can manage your settings and account: " << endl
		<< "|*****************************************************************|" << endl <<
		"| 1.  Add vehicle/Become a driver                                 |" << endl <<
		"| 2.  Delete vehicle                                              |" << endl <<
		"| 3.  Display all vehicles                                        |" << endl <<
		"| 4.  Alter full name                                             |" << endl <<
		"| 5.  Go back to previous menu                                    |" << endl <<
		"|*****************************************************************|" << endl;
	cout << "Selected number from menu: ";
}

