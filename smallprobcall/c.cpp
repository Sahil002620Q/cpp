#include <iostream>
using namespace std;
int howManySeconds(int hours) {
	int minutes = hours*60;
	std::cout << minutes ;
	return 0;
}

void n(){
	cout << endl ;
}

int circuitPower(int voltage, int current) {
		int power;
		power = voltage*current;
	std::cout << power << endl ;
	return 0;
}

bool isEqual(int num1, int num2) {
	if(num1 == num2){
		std::cout << "true";
	}else{
		std::cout << "false";
	}
	return 0;
}

int addition(int a) {
	a = a + 1;
	cout << a;
	return 0;
}

int triArea(int base, int height) {
	float area = 0.5*base*height;
	std::cout << area ;
	return 0;	
}

bool isSeven(int x) {
	return x==7 ? true:false;
}

bool reverse(bool boolean) {
	if(boolean == true){
		cout << "false";
	}else{
		cout <<  "true";
	}
	return 0;
}

int convert(int hours, int minutes) {
		int secx;
		secx = (hours*60*60) +  (minutes*60);
		std::cout << secx;
		return 0;
	}


bool isSameNum(int num1, int num2) {
	if(num1 == num2){
		cout << "true";
	}else{
		cout << "false";
	}
	return 0;
}

int squared(int a) {
	return a * a;
}

int remainder(int x, int y) {
	int rem = x%y;
	std::cout << rem ;
	return 0;
}

bool lessThanOrEqualToZero(int num) {
	int x = 0;	
	if( x <= 0){
			std::cout << "true";
		}else{
			std::cout << "false";
		}
		return 0;
}

int flipIntBool(int baseIntBoolean) {
	if(baseIntBoolean == 1){
		return 0;
	}else{
		return 1;
	}
}

bool profitableGamble(float prob, int prize, float pay) {
	if(prob*prize>pay){
		std::cout << "true";
	}else{
		std::cout << "false";
	}
	return 0;
}

int main () {
    addition(6);
	n();
	reverse(true);
	n();
	convert(1,0);
	n();
	profitableGamble(0.3,45,12);

	return 0;
}

//Learning source --edabit.com