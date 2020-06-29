
/* 
 * File:   main.cpp
 * Author: Elizabeth Warren
 * Created on June 22, 2020, 6:14 PM
 * Purpose: Program that converts Celsius temperatures to Fahrenheit temperatures 
 */

//System Libraries
#include<iostream>
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
    double disInpt(double);
    double disConv (double, double);

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
       double celsus, faenht;
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    //function call displays the farenheit and returns the variable to be stored in main
    celsus=disInpt( celsus);// do not need to put variable type in func call
    faenht=disConv(celsus,faenht); 
    

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;}

double disInpt(double temp){
    cout<<"#########"<<"Celsius to Farenheit Calculator"<<"#########";
    cout<<endl<<endl;
    cout<<"Please enter temperature in celsius.  ";
    cin>>temp;
    return temp;
}
double disConv (double cel, double far){
    far= ((9/5*cel)+32);
    cout<<"The farenheit temperature is: "<<far<<" degree."<<endl;
    return far;
}
