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
    
    void blueprint(string model){ //const car &model for memory management 
        cout << "--------------------------" << endl ;
        cout << "       " << model << "  "<< endl;
        cout << "--------------------------" << endl ; 
        cout << "BRAND : " << brand <<  endl ;
        cout << "Body type : " << body_type << endl ;
        cout << "Engine Size : " << engine << "L" << endl ;
        cout << "Engine Induction : " << engine_type<< endl ;
        cout << "Power : " << power << " hp"<<  endl ;
        cout << "Fuel Type " << fuel_type << endl ;
        cout << "Seats : " << seats << endl ;
        cout << "Top speed : " << top_speed << " km/h" <<endl ;
        cout << "Price : " << price << " Lakh" <<endl ;
        cout << endl ;
    }

};

void menu(){
    system("cls");
    cout << "========================================" << endl ;
    cout << "          CAR INFORMATION SYSTEM " << endl ;
    cout << "======================================== " << endl ;
    cout << " " << endl ;
    cout << " 1. BMW 3 Series            "   << endl ;
    cout << " 2. BMW X5"<< endl ;
    cout << " 3. BMW M4 Competition"<< endl ;
    cout << " 4. Mercedes-Benz C-Class"<< endl ;
    cout << " 5. Audi A4"<< endl ;
    cout << " 6. Toyota Camry"<< endl ;
    cout << " 7. Audi Q5"<< endl ;
    cout << " 8. Honda Civic"<< endl ;
    cout << " 9. Tesla Model 3 Long Range"<< endl ;
    cout << " 10. Ford Mustang GT"<< endl ;
    cout << " 11. Porsche 911 Carrera"<< endl ;
    cout << " 12. Lamborghini Huracán EVO"<< endl ;
    cout << " "<< endl ;
    cout << " 0. Exit"<< endl ;
    cout << " "<< endl ;
    cout << " ========================================" << endl ;
    cout << " Enter your choice : "  ;

}

int main () {
    // system("cls");
    // // create object using class (blueprint)
    // car three_series;
    // //give vals
    // three_series.brand = "BMW";
    // three_series.body_type = "Sedan";
    // three_series.engine = 2.0;
    // three_series.engine_type = "Turbo 14";
    // three_series.power = 255;
    // three_series.fuel_type = "Petrol";
    // three_series.seats = 5;
    // three_series.top_speed = 250;
    // three_series.price = 63;  

    

    // cout << "--------------------------" << endl ;
    // cout << "        3 Series "  << endl;
    // cout << "--------------------------" << endl ;    
    // cout << "BRAND : " << three_series.brand <<  endl ;
    // cout << "Body type : " << three_series.body_type << endl ;
    // cout << "Engine Size : " << three_series.engine << " L" << endl ;
    // cout << "Engine Induction : " << three_series.engine_type<< endl ;
    // cout << "Power : " << three_series.power << " hp"<<  endl ;
    // cout << "Fuel Type " << three_series.fuel_type << endl ;
    // cout << "Seats : " << three_series.seats << endl ;
    // cout << "Top speed : " << three_series.top_speed << " km/h" <<endl ;
    // cout << "Price : " << three_series.price << " Lakh" <<endl ;
    // cout << endl ;
    
    // Q5.blueprint("Q5");
    while (true){
        menu();
        int choice;
        _getch();
        // cin >> choice ;
        if (choice == 0)
        {
            break;    
        }

        else if (choice == 1)
        {
            system("cls");
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
            cout << "enter to continue : " ; _getch();
            system("cls");
            
        }

        else if (choice == 2)
        {
            system("cls");
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
            cout << "           X5 "  << endl;
            cout << "--------------------------" << endl ;    
            cout << "BRAND : " << X5.brand <<  endl ;
            cout << "Body type : " << X5.body_type << endl ;
            cout << "Engine Size : " << X5.engine << "L" << endl ;
            cout << "Engine Induction : " << X5.engine_type<< endl ;
            cout << "Power : " << X5.power << " hp"<<  endl ;
            cout << "Fuel Type " << X5.fuel_type << endl ;
            cout << "Seats : " << X5.seats << endl ;
            cout << "Top speed : " << X5.top_speed << " km/h" <<endl ;
            cout << "Price : " << X5.price << " Lakh" <<endl ;
            cout << endl ;
            cout << "enter to continue : " ; _getch();
            system("cls");
            
        }

        else if (choice == 3)
        {
            system("cls");
            // car M4;
            car M4 = {"BMW","Coupe",3,"Twin Turbo I6",523,"petrol",4,290,160};
            cout << "--------------------------" << endl ;
            cout << "      M4 Compitition "  << endl;
            cout << "--------------------------" << endl ; 
            cout << "BRAND : " << M4.brand <<  endl ;
            cout << "Body type : " << M4.body_type << endl ;
            cout << "Engine Size : " << M4.engine << "L" << endl ;
            cout << "Engine Induction : " << M4.engine_type<< endl ;
            cout << "Power : " << M4.power << " hp"<<  endl ;
            cout << "Fuel Type " << M4.fuel_type << endl ;
            cout << "Seats : " << M4.seats << endl ;
            cout << "Top speed : " << M4.top_speed << " km/h" <<endl ;
            cout << "Price : " << M4.price << " Lakh" <<endl ;
            cout << endl ;
            cout << "enter to continue : " ; _getch();
            system("cls");
        }

        else if (choice == 4)
        {
            system("cls");
            car  C_class     =  {"Mercedes-Benz "  , "Sedan    " , 2.0,  "Turbo I4              " , 255 , "Petrol   " , 5 , 250 , 60  };
            C_class.blueprint("C Class");
            cout << "enter to continue : " ; _getch();
            system("cls");
        }

        else if (choice == 5)
        {
            system("cls");
            car  A4          =  {"Audi          "  , "Sedan    " , 2.0,  "Turbo I4              " , 261 , "Petrol   " , 5 , 250 , 47  };
            A4.blueprint("A4");
            cout << "enter to continue : " ; _getch();
            system("cls");

        }

        else if (choice == 6)
        {
            system("cls");
            car  Camry       =  {"Toyota        "  , "Sedan    " , 2.5,  "I4 Hybrid             " , 225 , "Hybrid   " , 5 , 180 , 49  };
            Camry.blueprint("Camry");
            cout << "enter to continue : " ; _getch();
            system("cls");
        }

        else if (choice == 7)
        {
            system("cls");
            car  Q5          =  {"Audi          "  , "SUV      " , 2.0,  "Turbo I4              " , 261 , "Petrol   " , 5 , 240 , 66  };
            Q5.blueprint("Q5");
            cout << "enter to continue : " ; _getch();
            system("cls");
        }

        else if (choice == 8)
        {
            system("cls");
            car Civic        =  {"Honda         "  , "Sedan    " , 1.5,  "Turbo I4              " , 180 , "Petrol   " , 5 , 220 , 22  }; //approx
            Civic.blueprint("Civic");
            cout << "enter to continue : " ; _getch();
            system("cls");
        }

        else if (choice == 9)
        {
            system("cls");
            car Long_ranger  =  {"Tesla         "  , "Sedan    " , 0, "Dual Electric Motors  " , 498 , "Electric " , 5 , 201 , 60  };
            Long_ranger.blueprint("Long Ranger");
            cout << "enter to continue : " ; _getch();
            system("cls");
        }

        else if (choice == 10)
        {
            system("cls");
            car Mustang_GT   =  {"Ford          "  , "Coupe    " , 5.0,  "V8                    " , 480 , "Petrol   " , 4 , 250 , 80  };
            Mustang_GT.blueprint("Mustang GT");
            cout << "enter to continue : " ; _getch();
            system("cls");
        }

        else if (choice == 11)
        {
            system("cls");
            car _911Carrera  =  {"Porsche       "  , "Coupe    " , 3.0,  "Twin-Turbo Flat-6     " , 379 , "Petrol   " , 4 , 293 , 210 };
            _911Carrera.blueprint("(11 Carrera)");
            cout << "enter to continue : " ; _getch();
            system("cls");
        }

        else if (choice == 12)
        {  
            system("cls");
            car Hurican_EVO  =  {"Lamborghini   "  , "Supercar " , 5.2,  "V10                   " , 631 , "Petrol   " , 2 , 325 , 400 }; //approx
            Hurican_EVO.blueprint("Hurican EVO");
            cout << "enter to continue : " ; _getch();
            system("cls");
        } 

        else 
        {  
            cout << " Invailed choice " << endl ;
            cout << " enter to continue : " ; _getch();
            menu();
        }
    }
    

    // cout << "enter to continue : " ; _getch(); //cin >> x  will not work aas it ask for input and doesnt end at enter
    // getch vs getchar getch comes with conio , text hids when we type in consil
    //getchar is same as cin but it stops if input is empty and user enters 
}