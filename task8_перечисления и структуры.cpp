#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
using namespace std;

enum options{
open,
close,
wait,
del
}; 
     struct file{
         string name;
         float size;
         options opt;
     };

    int main () {
    setlocale(LC_ALL, "RU");
    file f1;
    f1.name = "test.txt";
    f1.size = 100;
    f1.opt = open;

cout<<f1.name<<endl;
cout<<f1.size<<endl;
cout<<f1.opt<<endl;


system("pause");
return 0;
}