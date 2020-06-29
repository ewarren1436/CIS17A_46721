/*File main.cpp
*Author: Elizabeth Warren
*Created on June 26 11:52PM
*Purpose:  Write a program that asks the user to enter the month (letting the  
*user enter an integer in the range of 1 through 12) and the year. The program 
*should then display the number of days in that month. Formulas take into
*consideration leap year.
*/
//System Libraries
#include <iostream>
#include <string>
using namespace std;
//User Libraries
//Global Constants -No Global Variables
//Only Universal Constants,Math, Physics, Conversions, Higher Dimensions
//Function Prototypes
//Execution Begins Here
int main()
{
//Declare Variables Data Types and Constants
int year, month;//variable to user enter month and year
int result;//variable to hold mod result year/100
int resulta;//variable to hold mod result year/400
int resultb;//variable to hold mod result year/4
//Initialize Variables
//Ask for User Input
do{//enter do loop
cout<<"Enter value for month first and then year:"<<endl;
cout<<"Warning enter month in a number format: 1-12 "<<endl;
cin>>month;
cin>>year;
if (month<0 ||month>12){
    cout<<"Please enter month in a number format 1-12.";
}}//exit if loop and do loop
while(month<0 ||month>12);
//Process or map Inputs or Outputs
//Formulas to determine leap year
result= year% 100;//Determine whether the year is divisible by 100.
resulta=year%400;//Determine if the year is divisible by 400.
resultb=year%4;//Determine if the year is divisible by 4.
//Process or map Inputs to Outputs
//Switch statement for month
switch (month){
case 1://January
    cout<<"January has 31 days and the year is: "<<year<<endl;
break;
case 2://February
if(result==0)//if branches to modulus 0 will be leap year
{ //if loop 
 cout<<"February has 29 days and the year is: "<<year<<endl;}
else if (result!=0 && resulta==0)//if branches to modulus 0 will be leap year
{
 cout<<"February has 29 days, and the year is: "<<year<<endl;
}
else if (resultb==4 && result!=0 && resulta!=0) // if meet criteria will be leap
{
    cout<<"February has 29 days,and the year is: "<<year<<endl;
}
else//year fails all three test for a modulus of 0 can't be leap year
{
cout<<"February has 28 days., , and the year is: "<<year<<endl;
}
break;
case 3://March
    cout<<"March has 31 days and the year is: "<<year<<endl;
break;
case 4://Apri;
    cout<<"April  has 30 days and the year is: "<<year<<endl;
break;
case 5://May
    cout<<"May has 31 days and the year is: "<<year<<endl;
break; 
case 6://June
    cout<<"June has 30 days and the year is: "<<year<<endl;
break;
case 7://July
    cout<<"July has 31 days and the year is: "<<year<<endl;
break;
case 8://August
    cout<<"August has 31 days and the year is: "<<year<<endl;
break;
case 9://September
    cout<<"September has 30 days and the year is: "<<year<<endl;
break;
case 10://October
    cout<<"October has 31 days and the year is: "<<year<<endl;
break;
case 11://November
    cout<<"November has 31 days and the year is: "<<year<<endl;
break;
case 12://December
    cout<<"December has 31 days and the year is: "<<year<<endl;
break;}//Exit switch statement

//Exit Stage Right
return 0;
}
