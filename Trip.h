#ifndef TRIP_H_
#define TRIP_H_

#include "includes.h"
#include "Date.h"
#include "Place.h"
#include "Vehicle.h"

using namespace std;
class Person;
class RegPerson;
class UnregPerson;

/**
 * @brief Trip class
 * Contains all of the trip related functions, including getters, setters and CRUD functions.
 */

class Trip
{
private:
	string vehicleOwner;
	Vehicle* vehicle;
	string plate;
	unsigned int available_seats;
	float distance;
	vector< pair <Place *,int> > route;
	vector< pair <Person*, vector<Place*> > > travellers;

	priority_queue<Person*, vector<Person*>, greater<Person*> > travellerQueue;

	bool smoking_allowed;
	Date start;
	Date end;
public:
	Trip();
	Trip(string VehicleOwner,string p, Vehicle* vehicle, bool smoke, Date s, Date e);
	Trip(string VehicleOwner,string p, unsigned int seats, bool smoke, Date s, Date e);
	~Trip();

	unsigned int getAvailableSeats() const;
	float getDistance() const;
	vector< pair<Place *,int> > getRoute() const;
	bool getSmokingSign() const;
	Date getStart() const;
	Date getEnd() const;
	vector< pair <Person*, vector<Place*> > > &getTravellers();
	string getDriver() const;
	string getLicensePlate() const;

	void setAvailableSeats(unsigned int a_s);
	void setLicensePlate(string lp);
	void setDistance(float d);
	void setSmokingSign(bool s);
	void setStart(Date s);
	void setEnd(Date e);

	priority_queue<Person*, vector<Person*>, greater<Person*> > addtopriorityQ(RegPerson*);

	static bool compareTrips (Trip* i,Trip* j);
	static bool compareTripsDriverName (Trip* i,Trip* j);
	//CRUDS
	void addRoute(vector< pair<Place*,int> > rota);
	//CRUD for travellers participating in trip
	void addTraveller(Person * t,vector<Place *>);
	void removeTraveller(Person * t);
	void updateTravellerRoute(Person *t,vector<Place *>r);
	bool isTraveller(Person * p);


	 /*
		Must be called if changeTravellerRoute or addTraveller or removeTraveller is called,
		goes through travellers vector and changes available
		seats for each place in route vector
	*/
	float calculateDistance(Place * begin, Place * end); //call upon addingRoute
	void recalculateRouteSeats();
	int findPlaceIndex(Place * p);
	void incrementVacancies(int b, int e);
	bool hasDestination(string src,string dest);
	bool isFull(string src,string dest);



	//Printing
	void printTravellers();
    string toString();
    string toStringByPerson(string name, long nr);
};

#endif //TRIP_H_
