#include <iostream>
#include<cmath>
using namespace std;



void task1(){
    cout << "task 1" << endl;

    cout << "| x | + | x + 4 |"<< endl;
    double x=0,z=0;
    cout<<"Input x:"<< endl;
    cin >> x ;

   z=abs(x) + abs(x+4);
        cout << "Z("<< x << ") ="<< z;

    cout<<"\n\n";

}

int main(){


    task1();
}
