#include <iostream>
#include <cmath>
using namespace std;
float add(float x,float y)                                                        //Addition function
  {  
    return x+y;
  }
float subtract(float  x,float  y){                                                //Subtraction function
  return x-y;
}
float multiply( float x, float y){                                                //multiply function
  return x*y;
}
float divide ( float x, float y){                                                 //division function
  return x/y;
}
 float power( float x, float y){                                                  //power function
   return pow(x,y);
}
float ceiling (float x){                                                          //ceiling function
  return ceil(x);
}
float Floor(float x){                                                             //Floor function
  return floor(x);
}
float absoulteValue(float x){                                                     //ABS function
  return abs(x);
}
float squareRoot(float x){                                                        //SQRT function
  if ( x<0){
    cout<< " absolute value of "<<x<<" square root: "<<sqrt(abs(x)); 
  }
  else{
    return sqrt(x);
  }
}
float factorial (float x){                                                        //factorial function
  float y=1;                                                                      // set an initial value
        if (x>=0);                                                                // secondly, set condotion so factorial only work on non-negative numbers
          for ( int i=0; i<x; i++){                                               //using for loop, 'i' start with 0 and it adds 1 each cycle.
            y*=(x-i);                                                             //number is subtract with i and leftover is multiply with y each cycle
          }
          cout <<y<<endl;
}

int main(){
  float number1;
  float number2;
  int choice;
  int input=0;
  
  cout << "Choose the operator by entering the number respective to operators \n 1. Addition\n 2. Subtraction\n 3. Multiplying\n 4. Division\n 5. Power\n 6. Square Root\n 7. ABS\n 8. Floor\n 9. Ceiling\n 10. Factorial\n 11.Stop calculator"<<endl;
  do{
    cout << "Enter the number for operator now: ";
    cin >> choice;
    if ( choice==11 ){
        break;
      }
    
    if ( choice<6 and choice>0){
      cout<<"Enter first number: ";
      cin>> number1;
      cout<< "Enter second number: ";
      cin>> number2;                                                              // this is condition; if user chooses operators from 1-5, will have to enter two numbers
    
    
      if ( choice == 1 ){
      
        cout << add(number1,number2) << endl;                                     // This add two number
      }
      else if ( choice==2 ){
      
        cout << subtract(number1,number2) << endl;                                //The first number is subtracted from second number
      }
      else if ( choice==3 ){
      
        cout << multiply(number1,number2) << endl;                                // multiply two numbers 
      }
      else if ( choice==4 ){
      
        cout << divide(number1,number2) << endl;                                  // first number divide by second number
      }
      else if ( choice==5 ){
      
      cout << "This option give first integer power of second integer: " << 
      pow(number1,number2) << endl;                                                //This option give first integer power of second integer
      }
    }
    else if ( choice>5|| choice<11){
      cout<< "Enter number: ";
      cin>> number1;                                                        // this is condiition; if user chooses operators from number 6-10 will only have enter one number
     
      if ( choice==6 ){
        cout<<"square root of "<< number1<< " is: "<< squareRoot(number1)<<endl;    // giving square root funtion of number entered
      }
      else if ( choice==7 ){
        cout<< "absolute value of "<< number1 <<" is: "<< 
        absoulteValue(number1) <<endl;                                              // giving absolute value of number entered
      }
      else if ( choice==8 ){
        
        cout<< Floor(number1)<<endl;                                                // giving floor funtion of number entered
    }
      else if ( choice==9 ){
        
        cout<< ceiling(number1) << endl;                                            // giving ceiling funtion of number entered
    }
      else if ( choice ==10 ){
        factorial(number1);

    }
    }
  }while (input==0);                                                                  // This code line keep the calculate running
  return 0;
  
}

