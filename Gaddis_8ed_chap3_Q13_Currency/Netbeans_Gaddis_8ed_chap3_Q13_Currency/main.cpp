//
/* 
 * File:   main.cpp
 * Author: Elizabeth Warren
 * Created on June 26, 2020, 9:14 PM
 * Purpose:  Purpose Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,
 * storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_
 * DOLLAR .
 */
//System Libraries
#include <iostream>  //I/O Library
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
char retVal (char);
//Enter Main
int main()
{
    //Set the random number seed here    
    //Declare all variables for this functions
    const float dollar=1.00;
    const float yen=117.8 *dollar;
    const float euro=98.93*dollar;  
    char choice1, choice2;//variables for choice
    float dolar;//user will enter dollar amount
   
    //variables reassigned
     float xYen, xEuro;//variable with hold result of exchange  

    //function call (user will enter choice)    
    choice2=retVal(choice1);
    //Process Inputs to Outputs -> Mapping Process
    //User enters dollar amount in positive value
    do {//enter do loop
        cout<<"Enter a dollar amount please"<<endl;
        cin>>dolar;    
    if(dolar<0)
    {
        cout<<"Dollar amount must be a  positive amount"<<endl;        
    }}//exit if loop and do loop       
    while (dolar<0);//fogot comma on while loop
     //Display the Inputs/Outputs
    //Ternary operator to output to user making calcuation
   cout<<"-----------------------------------"<<endl;
   choice2=='e' ? cout<<"Exchanging to euros now":cout <<"Exchanging to yen now";
   cout<<endl;
   //if branching for calcuation
   if (choice2=='y')//If user chose yen
   {    xYen=dolar*yen;//Calculation from dollars to yen
    cout<<fixed<<showpoint<<setprecision(2);//output formatting
    cout<<endl<<"Processing"<<endl<<"Processing"<<endl;//Outputting amount
    cout<<"Exchange of US "<<dolar<<" dollar to yen is: "<<xYen
        <<" yen."; }
    else { 
    xEuro=dolar*euro;//Calculate from dollar to yen
    cout<<endl<<"Processing"<<endl<<"Processing"<<endl;//Outputting amount
    cout<<"Exchange of US "<<dolar<<" dollar to euros is: "<<xEuro
           <<" euros"<<endl;}
   
   //Clean up the code, close files, deallocate memory, etc....
    //Exit stage
    return 0;
}
char retVal(char choice)
{//Enter function
do
    {//enter do loop
    cout<<"User enter e for euros or y for yen";
    cin>>choice;
    if(choice!='e' && choice!='y'&& choice !='E'&& choice !='Y')
    {//Enter first if loop
    cout<<"User please enter e for euros or y for yen";
    cin>>choice;
     if(choice!='e' && choice!='y' && choice !='E'&& choice !='Y')
     {//enter second if loop
     cout<<"User one more chance to enter e for euros or y for yen"<<endl;
    cin>>choice;
     if(choice!='e' && choice!='y' && choice !='E'&& choice !='Y')
     {//enter third if loop
         cout<<"Sorry response is incorrect.  Program will end now"<<endl;
         exit(0);
     }}
    }//exit if loop
    }//exit do loop
    while(choice!='e' && choice!='y' && choice !='E'&& choice !='Y');
    if (choice=='e'|| choice== 'E')
    {
        choice='e';
    }
    if (choice=='y' || choice=='Y')
    {
        choice='y';
    }    
    
    
    return choice;
}//exit retVal function
  
    

