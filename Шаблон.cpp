#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

// функции 
void str(string abc){
cout << abc << endl;
}
string("tere");

void ff(int a ,int b){
cout << a + b << endl;
}
ff();
void pr(string word){
cout << word << endl;
}
void pr(int word){
cout << word << endl;
}
void add (int a, int b){
int res = a + b ;
pr(res);
}
void add (int a, int b , int c){
int res = a + b - c ;
pr(res);
}
int main () {
add(2234,1374);
add(213, 323, 444);
pr("chell");
}
int main () {
setlocale(LC_ALL, "RU");

system("pause");
return 0;
}


    
     // переменные;
     unsigned short a; // целые числа -32к до 32к
     //unsigned  убирает минусовые числа
     long // 8 byte очень большие числа  
     float b = 5.2341f;
     double c = 5.6785565743567f;
     char d = 'Q';
     bool isHappy = true;// false;


          ||   // или
          &&   // и
           %   // остаток от деления


             short f; // switch case;
             cin >> f;
             switch (f){
             case  3:
             cout<< " number is 3"<< endl;  break;
             } 
             default: 
             cout<< "incorrect"; break;

                
                 a -= 3 //a - 3
                 a++ // a+1
                 a-- // a-1


                     #include <time.h>
                     srand(time(NULL));      // действительно рандомное число
                     int result = 1+ rand()% 50  // рандомное число от 1 до 50

                         // цыклы
                         // for
                         for (i=0; i <=10; i++){
                            cout<< "nr" << i << endl;
                         }

                         // while
                         float j = 30;
                         while (j > 2){
                         cout<< " № " << j << endl;
                         j /= 1.2f;
                         }

                         // do while
                         int k = 100;
                         do{
                         cout<< " № " << k << endl;
                         k -= 12 ;
                         } while (k > 10);
                         // операторы в цыклах
                         for (i=0; i <=15; i++){
                         if (i == 10)
                         break;
                         if (i % 2 ==0)
                         continue;
                         cout<< "nr" << i << endl;
                         }
                             // massive
                             int mas [3] ;
                             mas [0] = 65;
                             mas [1] = 35;
                             mas [2] = 3;


                             float mas2 [4] = {1, 3 ,6 ,7} 
                             for (int = i; i<3 ; i++){
                             cout<< "nr" << mas2[i] << endl; 
                             } 
                                 
                                 // Динамичесский массив
                                 int *mas = new int[3];
                                 mas[0] = 3;
                                 cout<< mas[0] << endl;
                                 delete [] mas;
                                  
                                  // string 
                                  char word[] = {'h','e','l','l','o'};
                                  for(int i = 0 ; i < 6 ; i++){
                                  cout <<  word[i]; 
                                  }

                                 string a = "Enter your name: ";
                                 a[1] = 3;
                                 cout<< a;
                                         // ссылки
                                         int num = 10 ;
                                         int &a = num; & - ссылка

                                         // указатели 
                                         void minimal (int *arr, int l ){
                                         int min =  *arr ;
                                         for (int i = 0; i < l; i++ ){
                                            if (min > *(arr + i))
                                            min = *(arr + i);

                                            
                                         cout << min << endl;
                                         }
                                         }
                                         int main () {
                                         int arr[] = { 1, -3, 5, 6 } ;
                                         minimal (arr, 4) ;
                                         }

                                             // files
                                             // создание и записывание
                                             ofstream file("test.txt", ios_base::out);
                                             if (file.is_open()){
                                             file << "output file " << endl;
                                             file.close();
                                             }

                                             // cчитывание

                                             ifstream file("test.txt");
                                             if(file.is_open()){
                                             //string temp;
                                             // file >> temp;
                                             char temp[100];
                                             file.getline(temp,100);
                                             file.close();
                                             cout<< temp << endl;
                                             }


                                                   
