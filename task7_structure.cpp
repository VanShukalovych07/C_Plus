#include <iostream>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;
   
struct tree{
    
string name;
int age;
bool is_alive;
float height;
float x ,y;
void get_info(){
cout<< name <<";"<< age<<";" << is_alive<<";" << height<<";" << x <<";"<< y <<";"<< endl;
}
};



    int main () {
setlocale(LC_ALL, "RU");

tree dub;
dub.name = "Dub";
 dub.age = 24;
 dub.is_alive = true;
 dub.height = 1.8;

 dub.x =10327;
dub.y = 13245;



 tree elka;
 elka.name = "Elka";
 elka.age = 25;
 elka.is_alive = true;
 elka.height = 1.7;
 
 elka.x = 88;
 elka.y = 345;


 dub.get_info();
 elka.get_info();
return 0;
}