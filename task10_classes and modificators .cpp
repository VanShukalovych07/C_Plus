#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

class building { // class
public: // modificators
int year;
string type;
 void get_info(){
 cout << year << " - " << type << endl;
 }
};
     class homes{
         private: // modificators 
         
         public:
         void get_info(int rooms, string owner ){
         cout << owner << " - " << rooms << endl;
         }
     };


int main () {
setlocale(LC_ALL, "RU");
 building b1;
 b1.year = 2000;
 b1.type = "house";
 b1.get_info();

 building b2;
 b2.year = 2004;
 b2.type = "School";
 b2.get_info();

 homes h1;
 h1.get_info(1 , "Ivan");
system("pause");
return 0;
}