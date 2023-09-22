

#include <iostream>
#include <time.h>
int main () {
using namespace std;
setlocale(LC_ALL, "RU");

 float mas2 [5] ;
 
 for (int i = 0; i < 5; i++){
 cout<< "enter number " << i << ": " << endl; 
 cin >> mas2[i];
 }
     
     float sum = 0 ;
     float min = mas2[0]; 
     for (int i = 0; i < 5; i++){
      sum += mas2[i];
        if(mas2[i] < min){
            min = mas2[i]; 
        }

     }
     cout<< "the sum is: " << sum << endl;
      cout<< "min:  " << min << endl;

    
     int array [3] [3] = {{1, 3, 4}, {3, 6, 7 }, {33, 12, 13}} ;
int i, j ;
for(i = 0; i < 3 ; i++){
    for (j = 0; j < 3 ; j++){
        cout << array [i] [j] << endl;
}
}

return 0;
}
