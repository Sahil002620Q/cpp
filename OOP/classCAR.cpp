#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

class car {
    public:
    string brand;
    string body_type;
    float engine; //in L
    string engine_type;
    int power; //in hp
    string fuel_type;
    int seats;
    int top_speed ; //in kmh
    float price; //lakh
    

};

int main () {
    system("cls");
    // create object using class (blueprint)
    car three_series;
    //give vals
    three_series.brand = "BMW";
    three_series.body_type = "Sedan";
    three_series.engine = 2.0;
    three_series.engine_type = "Turbo 14";
    three_series.power = 255;
    three_series.fuel_type = "Petrol";
    three_series.seats = 5;
    three_series.top_speed = 250;
    three_series.price = 63;  

    car X5;
    X5.brand = "BMW";
    X5.body_type = "SUV";
    X5.engine = 3.0;
    X5.engine_type = "Turbo 16";
    X5.power = 375;
    X5.fuel_type = "Petrol/Diesel";
    X5.seats = 7; //5-7
    X5.top_speed = 243;
    X5.price = 97;

    cout << "--------------------------" << endl ;
    cout << "        3 Series "  << endl;
    cout << "--------------------------" << endl ;    
    cout << "BRAND : " << three_series.brand <<  endl ;
    cout << "Body type : " << three_series.body_type << endl ;
    cout << "Engine Size : " << three_series.engine << " L" << endl ;
    cout << "Engine Induction : " << three_series.engine_type<< endl ;
    cout << "Power : " << three_series.power << " hp"<<  endl ;
    cout << "Fuel Type " << three_series.fuel_type << endl ;
    cout << "Seats : " << three_series.seats << endl ;
    cout << "Top speed : " << three_series.top_speed << " km/h" <<endl ;
    cout << "Price : " << three_series.price << " Lakh" <<endl ;
    cout << endl ;

    cout << "--------------------------" << endl ;
    cout << "           X5 "  << endl;
    cout << "--------------------------" << endl ;    
    cout << "BRAND : " << X5.brand <<  endl ;
    cout << "Body type : " << X5.body_type << endl ;
    cout << "Engine Size : " << X5.engine << " L" << endl ;
    cout << "Engine Induction : " << X5.engine_type<< endl ;
    cout << "Power : " << three_series.power << " hp"<<  endl ;
    cout << "Fuel Type " << X5.fuel_type << endl ;
    cout << "Seats : " << X5.seats << endl ;
    cout << "Top speed : " << X5.top_speed << " km/h" <<endl ;
    cout << "Price : " << X5.price << " Lakh" <<endl ;
    cout << endl ;

    cout << "enter to continue : " ; _getch(); //cin >> x  will not work aas it ask for input and doesnt end at enter
    // getch vs getchar getch comes with conio , text hids when we type in consil
    //getchar is same as cin but it stops if input is empty and user enters 
}