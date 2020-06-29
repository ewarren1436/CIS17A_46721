/*File  main.cpp
*Author: Elizabeth L Warren
*Created on June 27 2020, 9:51 AM
*Purpose:  This program for converting a temperature from Fahrenheit to Celsius
*/
//System Libraries
#include <iostream>
#include <iomanip>  //include iomanip library for output formatting
using namespace std;
//Global Constants
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
//Function Prototype
double celsius(int);//function takes Fahrenheit as an argument returns 
//Celsius temperature
//Execution begins here
int main(int argc, char **argv){//enter main
//Declare Variable Data Types and Constants
//Initialize Variables,
//Process or map Inputs or Outputs(see function)
//Output formatting
  cout << fixed << setprecision(2);
  cout<<"     Table of Temperature Conversion"<<endl<<endl;
  cout<<"    Farenheit"<<setw(20)<<"     Celsius"<<endl;

   //for loop used to increment F. temp from 0 to 20 degrees(1 degree increment)

    for(int degr = 0; degr <= 20; degr++){
        cout<< degr << " degrees "<<setw(20)<<celsius(degr)<<" degrees"<<endl;
        cout<<"-------------------------------------------------------"<<endl;}

    //Exit stage right
    return 0;
}

double celsius(int farht){
    //write 5.0 and 9.0 instead of 5 and 9
    //to prevent integer division from happening
    return (5.0/9.0) * (farht - 32);
}
