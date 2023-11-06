// main script
// include, using
#include <iostream>
#include <fstream>
#include <hotel_specs.h>
#include <classes.h>
#include <string>
#include <list>
using namespace std;

int main()
{
    Hotel hotel;
    Booking booking;
    Room room;
    Guest guest;
    Payment payment;

    int c;
    int r;
    int n;

    cout << "What is the capacity of the hotel?" << endl;
    cin >> c;
    cout << "What is the rate of the hotel?" << endl;
    cin >> r;

    hotel.setHotel(c, r);
    hotel.SetRoomTypes();

    cout << "1. Check availability." << endl;
    cout << "2. Reserve a room" << endl;
    cout << "3. Exit." << endl;
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        string room_type;
        int no_guests;
        cout << "Enter room type: " << endl;
        cin >> room_type;
        cout << "Enter number of guests: " << endl;
        cin >> no_guests;

        hotel.getRoomTypeAvailability(room_type);
        
    } else if (choice == 2)
    {
        
    }
    
    return 0;
}