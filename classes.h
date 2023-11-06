#include <iostream>
#include <string>
#include <hotel_specs.h>
using namespace std;

class Booking : Hotel
{
    public:
        int id;
        int duration;
        string from;
        string to;
        int num_people;

    void setBooking(int id, int duration, string from, string to, int num_people) 
    {
        this->id = id;
        this->duration = duration;
        this->from = from;
        this->to = to;
        this->num_people = num_people;
    }
    void getBooking() 
    {
        cout << "Booking ID: " << this->id << endl;
        cout << "Duration: " << this->duration << endl;
        cout << "From: " << this->from << endl;
        cout << "To: " << this->to << endl;
        cout << "Number of people: " << this->num_people << endl;
    }
};

class Room : public Booking 
{
    public:
        int room_num;
        string room_type;
    
    void setRoom(int room_num, string room_type) 
    {
        this->room_num = room_num;
        this->room_type = room_type;
    }
    void getRoom() 
    {
        cout << "Room number: " << this->room_num << endl;
        cout << "Room type: " << this->room_type << endl;
    }
};

class Guest : public Booking 
{
    public:
        string name;
        string surname;
        int age;
    
    void setGuest(string name, string surname, int age)
    {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }
    void getGuest() 
    {
        cout << "Guest's name: " << this->name << endl;
        cout << "Guest's surname: " << this->surname << endl;
        cout << "Guest's age: " << this->age << endl;
    }
};

class Payment : public Booking
{
    public:
        int amount;
        int rate;
        string card_num;
    
    void setPayment(int amount, int rate, string card_num)
    {
        this->amount = amount;
        this->card_num = card_num;
        this->rate = rate;
    }
    void getPayment()
    {
        cout << "Payment amount: " << this->amount << endl;
        cout << "Card number: " << this->card_num << endl;
    }

    int calcPayment(int duration, int num_people)
    {
        int payment = num_people * rate * duration;
        return payment;
    }
};

struct BookingData
{
    int id;
    int duration;
    string from;
    string to;
    int num_people;
};

BookingData Prompt(int r)
{
    for (int i = 0; i = r; i++)
    {
        BookingData newbook;

        cout << "Enter the booking ID: ";
        cin >> newbook.id;
        cout << "Enter the booking duration: ";
        cin >> newbook.duration;
        cout << "Enter the day of arrival: ";
        cin >> newbook.from;
        cout << "Enter the day of departure: ";
        cin >> newbook.to;
        cout << "Enter the number of guests: " << endl;
        cin >> newbook.num_people;

        Booking booking;
        booking.setBooking(newbook.id, newbook.duration, newbook.from, newbook.to, newbook.num_people);
    } 
}
