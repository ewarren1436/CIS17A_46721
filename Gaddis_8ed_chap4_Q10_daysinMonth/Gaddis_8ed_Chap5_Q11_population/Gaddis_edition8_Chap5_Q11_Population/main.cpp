

/* 
 * File:   main.cpp
 * Author: Elizabeth Warren
 * Created on June 26 2020, 7:20 PM
 * Purpose: Program will predict the size of a population of organisms. 
 * The program should ask the user for the starting number of organisms, 
 * their average daily population increase (as a percentage), and the number 
 * of days they will multiply.
 * Created on June 28, 2020, 6:16 PM
 */
//System Libraries
#include <iostream>
#include<iomanip>
using namespace std;

//Function Prototypes
//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables Data Types and Constants
    int day;//hold number of days, 
    float pop, perc, sizPop;
 //Initialize variables user inputs values
    sizPop=0;
 
    do{//Do not accept a num less than 2 for the starting size of the pop
        cout<<"User enter starting number of organizms   ";
        cin>>pop;
        if (pop<2){//validate pop is =2 or >2
        cout<<"User enter quantity 2 or greater please  ";
        cin>>pop; }}//exit if and do loop
    while (pop<2);
       
    do{//Do not accept a num less than q for days
        cout<<"User enter number of days organisms will multiply";
        cin>>day;
        if(day<1){//validate day is =1 or day>1
        cout<<"User enter duration 1 day or more  ";
        cin>>day;}}//exit if and do loop
    while (day<1);
    
    do{//Do not accept a negative number for average daily population increase. 
        cout<<"User  enter average daily population increase in positive"
            <<" number  ";
        cin>>perc;
        if (perc<0){//Validate perc>0
        cout<<"User please enter a positive number  ";
        cin>>perc;}}//exit if and do loop    
    while (perc<1);
    //Display Output
    cout<<"Day"<<setw(20)<<"Size of Population"<<endl;
    for(int i=1; i<day; i++)
    {
        pop=pop+(pop*(perc/100));
        sizPop=pop;
       
        cout<<"Day "<<i<<setw(20)<<sizPop<<endl;
    }

    
    return 0;
}

