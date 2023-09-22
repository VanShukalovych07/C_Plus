# include <iostream>
# include <cmath>

int main(){
 using namespace std;
   float a, b, res;
   cout << " enter number a:" ;
   cin >> a ; 
   cout << " enter number b:" ;
   cin >> b ; 
   char c;
   cout << " enter math sumbol:" ;
   cin >> c;
      /*if (c == '+'){
      res = a + b ;
      cout << " answer is: "<< res << endl;
      }  
      else if (c == '-'){
      res = a - b ;
      cout << " answer is: "<< res << endl;
      }  
      else if (c == '*'){
      res = a * b ;
      cout << " answer is: "<< res << endl;
      }
      else if (c == '/'){
      res = a / b ;*/ 
      switch (c){
        
        case '+': res == a + b ;
        case '-': res == a - b ;
        case '*': res == a * b ;
        case '/': res == a / b ;
        default : 
        cout<< "error" << endl;
      cout << " answer is: "<< res << endl;
      }
}