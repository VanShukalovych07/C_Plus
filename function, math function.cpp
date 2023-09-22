#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
using namespace std;


int main () {
setlocale(LC_ALL, "RU");


string str1("hello ");
string str2("world");
str1.append(str2); //str1 = str1 + str2;
str1.pop_back(); // -1 sumbool
str1.push_back('!'); // +1 sumbool '!'
str1.resize(5); // указывает размер строки
str1.length(); // количество символов в строке
cout << str1 << endl;

// math functions
pow(2, 3); // 2^3 
abs(-10); // |-10| = 10
sin(1); 
cos(1);
sqrt(16); // koren 16
ceil(1.3); // 2
floor(1.99); // 1
// found(1.49); // 1 (1.51 = 2)
system("pause");
return 0;
}