#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
using namespace std;

void dev(float a , float b ){
if ( b == 0 ) throw 1; 
else cout<< a/b <<endl;
    }
        int main () {
        setlocale(LC_ALL, "RU");
            try{
            dev(100.0f , 0.0f );
            }
                catch(int err){
                if (err == 1) cout << "Error" << endl;{
                }
                    system("pause");
                    return 0;
                }
        }
