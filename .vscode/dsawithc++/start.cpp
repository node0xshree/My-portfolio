/*#include<iostream>
using namespace std;
     int main()
     {

         cout<<"Hello\n\nWorld\n";
         cout<<"I started my dsa journey...";

         return 0;

     }  */
// Variables:used to store data values.
/*include<iostream>
using namespace std;
int main(){
   int x = 5;
   cout<<x<<endl;
   x=7;
   cout<<x<<endl;
   x+=6;
   cout<<x<<endl;
   x=x-20;
   cout<<x;
   return 0;

}*/

// Operators
/* #include<iostream>
using namespace std;
   int main(){
       int a=5;
       int b=6;
       cout<<a+b<<endl;
       cout<<a-b<<endl;
       cout<<a*b<<endl;
       cout<<a/b<<endl;
       cout<<a%b<<endl;

       return 0;
   }*/

/*//increment and decrement operators
#include<iostream>
using namespace std;
int main(){
    int a=7;

    cout<<a++<<endl;
    cout<<a<<endl;
    cout<<++a<<endl;
    cout<<a<<endl;
    cout<<a--<<endl;
    cout<<a<<endl;
    cout<<--a<<endl;
    cout<<a<<endl;

    return 0;
}*/
/* //Data types: int, float, double, char, bool
#include<iostream>
using namespace std;
int main(){

    int a=5;
    float b=5.5;
    double c=6.66;
    char d='A';
    bool e=true;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;

    return 0;
}*/
// MODULO OPERATOR: % is used to find the remainder of a division operation.
/* #include<iostream>
using namespace std;
int main(){
    int a=14;     //a is dividend
    int b=40 ;     //b is divisor
    int r=a%b; //r is remainder

    cout<<r<<endl;

    return 0;
}*/

// TO FIND THE PERCENTAGE OF 5 SUBJECTS

/* #include<iostream>
using namespace std;
     int main(){

        float a=90;
        float b=91;   // keep the decimals
        float c=96;
        float d=94;
        float e=95;
        float percentage=(a+b+c+d+e)/5;

        cout<<"Percentage is: "<<percentage<<endl;

        return 0;

        } */
// IN INT DATA TYPE:

/* #include<iostream>
using namespace std;
     int main(){

        int a=90;
        int b=91;   // keep the decimals
        int c=96;
        int d=94;
        int e=95;
        float percentage=(a+b+c+d+e)/5;

        cout<<"Percentage is: "<<percentage<<endl;

        return 0;
     }*/

// TO FIND THE AREA OF CIRCLE

/* #include<iostream>
using namespace std;
     int main(){

          float radius=7.5;
          float pi=3.14;
          float area=pi*radius*radius;
          cout<<"Area of the circle is:"<<area<<endl;
          return 0;

          }*/

// CALCULATING SIMPLE INTEREST
/*#include<iostream>
using namespace std;
     int main(){

           float p,r,t,si;
           float p=10000;
           float r=27.5;
           float t=5;
           float si= (p*r*t)/100;
           cout<<si;

          return 0;
       } */

// how to swap the numbers?
/*#include<iostream>
        using namespace std;
             int main(){
                int a=0,b=2;
                int c;
                c=a%b;
                cout<<c<<endl;
             }*/

/*      #include<iostream>
        using namespace std;
        int x=9;int y=7;int temp;


         int main(){

         cout<<"The value before swapping :"<<(x,y)<<endl;

         temp=x;
         x=y;
         y=temp;
         cout<<"The value after swapping :"<<( x , y )<<endl;



          }*/

// Number is Even or odd!!

/* #include<iostream>
using namespace std;

   bool isEven(int a){
  //odd
  if( a & 1){
      return 0;
  }
  else {
      //even
        return 1;
  }
}
   int main (){
      int num;
      cout<<"enter the number"<<endl;
      cin>>num;
      if  (isEven(num)) {

          cout<<"Number is Even" <<endl;
      }

      else{
          cout<<"Number is Odd "<<endl;
      }
  }*/

// How to Find Factorials??
/*#include<iostream>
using namespace std;

 int factorial(int n){

  int fact=1;

  for(int i=1;i<=n;i++){

    fact=fact*i;

  }
  return fact;
}
int nCr(int n,int r) {

     int num = factorial(n);

    int denom = factorial(r)*factorial(n-r);

    return num/denom;
}
           int main(){
            int n,r;

            cout<<"Enter the values of n and r "<<endl;

            cin>>n>>r;

            cout<<"Answer is "<< nCr(n,r) <<endl;


    return 0;
   }*/

/* #include<iostream>
using namespace std;

void printCounting(int n) {
    for (int i=1;i<=n;i++){
        cout<<i<<" "<<endl;
    }
}
      int main(){

        int n;
        cout<<"enter the value of n"<<endl;
        cin>>n;
        printCounting(n);

        return 0;
      }  */

// How to determine prime no.

/* #include<iostream>
using namespace std;
//1=prime no.
//0=not a prime no.
bool isPrime(int n){

     for(int i=2;i<n;i++){

      if (n%i ==0 ){
            return 0;
      }

     }
      return 1;

}
int main(){
       int n;
       cout<<"Enter the value of n"<<endl;
       cin>>n;
       if( isPrime(n) ){
        cout<<"is a Prime Number "<<endl;
       }
       else{
          cout<<" is not a Prime Number ";
       }
       }*/

// to find nth term of an Arithematic of progression

/* #include <iostream>
      using namespace std;
            int getAPTerm(int n){

            return (3 * n)+7;
         }


             int main(){
                 int n;
                 cout<<"Enter the Value (n)"<<endl;
                 cin>>n;
                 int nthTerm = getAPTerm(n);
                 cout<<"The nth term is "<<getAPTerm(n)<<endl;
                 return 0;
             }*/

//

/* #include<iostream>
using namespace std;
  int getFibonacci (int n){
    if(n == 0){
         return 0;
         }
    else if(n == 1){

     return 1;

  }
  else{
    return getFibonacci(n-1)+getFibonacci(n-2);
  }
}
    int main(){

        int n =7;
        cout<<"Fibonacci series is " << getFibonacci(n)<<endl;


return 0;
    }*/

// #include<iostream>
// using namespace std;
//   void update (int a){
//     a = a/2;

//   }
//   int main(){
//     int a=10;
//     update(a);
//     cout<< a <<endl;  //10 :pass by value;
//   }

// #include<iostream>
// using namespace std;
//  int update (int a){
//  a -= 5;
//  return a;

//   }
//  int main(){
//     int a=15;
//     update(a);
//    cout<< a <<endl;  //15 :due to return  ;
//   }

/* #include<iostream>
 using namespace std;
  int update (int a){
  int ans =a*a;
  return ans;
  }



  int main(){
     int a=14;
     a= update(a);
    cout<< a <<endl;  //196 :update(a) stored in a variable a;
   }  */

// Arrays:Collection  of Multiple elements of same data types.

#include <iostream>
using namespace std;

int main()
{
    // declare
    int number[15];
    // accessing an array
    cout << "Value at 0 index is " << number[14] << endl;

    cout << "Value at 20 index is " << number[20] << endl;

    cout << endl
         << "Everything is Fine" << endl;

    return 0;
}
