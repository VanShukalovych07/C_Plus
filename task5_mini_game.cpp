#include <iostream>
#include <time.h>

int main () {
using namespace std;
 
 srand(time(NULL));
 int rand_num = 1 + rand() % 15 ; 
 bool stop = false;
 int user_input;
 do{
cout<< "enter number: " << endl;
cin >> user_input ;
if (user_input != rand_num)
cout<< "u dont gessed " << endl;
else
stop = true ;
 }while(!stop);
 cout<< "u gessed " << endl;
}