// used for hotel specificity, rates, capacity, room types, etc
#include <string>
#include <iostream>
#include <list>
using namespace std;

class Hotel
{
    public:
        int capacity;
        int rate;
        list <string> room_types{"single", "double", "twin", "triple", "quad", "queen", "king", "suite"};
    
    void setHotel(int capacity, int rate)
    {
        this->capacity = capacity;
        this->rate = rate;
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
