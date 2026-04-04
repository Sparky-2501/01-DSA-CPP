#include <bits/stdc++.h>
using namespace std;

class Car
{
    string name;
    string color;

public:
    Car(string n, string c){ //constructor with parameters
        name = n;
        color = c;
    }

    void start()
    {
        cout << "Car Started" << endl;
    }
    void stop()
    {
        cout << "Car Stopped" << endl;
    }

    string getName(){
        return name;
    }
    string getColor(){
        return color;
    }

};

//getter-get value from class ; setter - set value to class 
int main()
{
    Car r1("BMW", "Red");
    cout << r1.getName() << endl;
    cout << r1.getColor() << endl;
    return 0;
}
