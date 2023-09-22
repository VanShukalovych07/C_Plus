#include <iostream>
# include <cmath>

int main () {
using namespace std;

srand (time(NULL)) ;        // каждый раз новое число
  float a =  1 + rand() % 40 ;// рандомное число от 1 до 40
  cout << "result is:" << a << endl; 
}