// used for hotel specificity, rates, capacity, room types, etc
#include <string>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

class Hotel
{
    public:
        int capacity;
        int rate;
        list <string> room_types;
    
    void setHotel(int capacity, int rate)
    {
        this->capacity = capacity;
        this->rate = rate;
    }
    void SetRoomTypes()
    {
        int n;
        cout << "How many room types would you like to add?";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            string element;
            cout << "Enter room type " << i + 1 << ": ";
            cin >> element;
            this->room_types.push_back(element);
        }
    }
    void getHotel()
    {
        cout << "Hotel capacity: " << capacity << endl;
        cout << "Hotel rate: " << rate << endl;
        cout << "Hotel room types: " << endl;
        for (const auto& element : room_types)
        {
            cout << element << endl;
        }
    }
    int getRate() 
    {
        return this->rate;
    }
    int getCapacity()
    {
        return this->capacity;
    }
};

class Roomtype : Hotel
{
    public:
        string type;
        int availability;
    
    void setAvailability(string room_type, int available, int hotel_capacity)
    {
        auto it = find(room_types.begin(), room_types.end(), room_type);
        if (it != room_types.end() && available <= hotel_capacity)
        {
            this->type = room_type;
            this->availability = available;
        } else
        {
            cout << "That room type is not available.";
        }
        
    }
    int getAvailability(string room_type) 
    {
        if (room_type == this->type)
        {
            return this->availability;
        } else
        {
            cout << "That is not an available room type.";
        }
    }
};  
