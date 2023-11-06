// used for hotel specificity, rates, capacity, room types, etc
#include <string>
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

class Hotel
{
    public:
        int capacity;
        int rate;
        vector <Roomtype> room_types_obj;
        list <string> types;
    
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
            int capac;
            cout << "Enter room type " << i + 1 << ": ";
            cin >> element;
            cout << "Enter the number of rooms available for room type " << i + 1 << ": ";
            cin >> capac;
            this->room_types_obj.push_back(Roomtype(element, capac));
            this->types.push_back(element);
        }
    }
    int getRoomTypeAvailability(string type)
    {
        for (const auto &roomType: room_types_obj)
        {
            if (roomType.type == type)
            {
                return roomType.availability;
            }
        }
        return -1; // type found
    }
    void getHotel()
    {
        cout << "Hotel capacity: " << capacity << endl;
        cout << "Hotel rate: " << rate << endl;
        cout << "Hotel room types: " << endl;
        for (const auto& element: types)
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
    
    // constructor for vector instantiation method
    Roomtype(string type, int availability)
    {
        this->type = type;
        this->availability = availability;
    }
    
    void setAvailability(string room_type, int available, int hotel_capacity)
    {
        auto it = find(room_types_obj.begin(), room_types_obj.end(), room_type);
        if (it != room_types_obj.end() && available <= hotel_capacity)
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
