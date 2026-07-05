#include <iostream>
#include <string>
using namespace std;

class employee
{
    private:  //only be used via function 
        int salary;
        int bonus;

    public:
        string name;
        int id;

   void getsalary(int salary_x,int bonus_x); //just declared
   void info()
   {
        cout << "--employee info--" << endl;
        cout << "name : " << name << endl;
        cout << "id : " << id << endl;
        cout << "salary : " << salary << endl;
        cout << "bonus : " << bonus << endl;
   }
};

void employee :: getsalary(int salary_x,int bonus_x)
{
    salary = salary_x;
    bonus = bonus_x;
}

int main()
{
    employee sahil;
    sahil.name = "sahil";
    sahil.id = 06102006;
    sahil.getsalary(50000,5000);
    sahil.info();
}
