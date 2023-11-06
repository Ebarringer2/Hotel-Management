#include <iostream>
#include <fstream>
#include <hotel_specs.h>
#include <classes.h>
#include <string>
#include <list>
using namespace std;

class Web
{
    public:
        vector <Booking> BookingVector;
        int no_bookings;

    void addBooking(int r)
    {
        Prompt(r);
        this->no_bookings += r;
    }
    void assignRoom
};