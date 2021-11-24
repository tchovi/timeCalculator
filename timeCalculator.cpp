#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <conio.h>

using namespace std;

int  main()
{
     int time,hour,min,sec;
     system("color 3f");     
     char choice;
     for (;;){
     do {      
               cout<< "\n";          
                             
               cout<<"|--------------------------------------|\n";
               cout<<"|  Welcome to the The time calculator  |\n";
               cout<<"|               By                     |\n";
               cout<<"|          Karl H Joseph               |\n";
               cout<<"|                                      |\n";
               cout<<"|  Please choose an operation          |\n";
               cout<<"|  1 - To onvert into Minutes          |\n";
               cout<<"|  2 - To Convert into Seconds         |\n";
               cout<<"|  q - To quit program                 |\n";
               cout<<"|--------------------------------------|\n";
               cin>> choice;
 } while (choice == '1' &&choice == '2' && choice != 'q');
     if (choice == 'q') break;
    
    switch (choice) {    
             
              case '1': 
                       cout<<"Enter time in seconds: \t";         
                       cin>>time;
                       hour=     time/3600;
                       time=     time%3600;
                       min=      time/60;
                       time=     time%60;
                       sec=      time;
                       cout<<"\n\nThe time is : "<<"\t\t" <<hour<<"::"<<min<<"::"<<sec ;
                       cout<< "\n";                          
                       break;
                       
             case '2':			           
                       cout<<"Enter time in minutes: \t";
                       cin>>time;                       
                       hour=     time/60;
                       time=     time%60;
                       min=      time/60;
                       time=     time%60;
                       min=      time;
                       sec=      time/60;
                       cout<<"\n\nThe time is : "<<"\t\t" <<hour<<"::"<<min<<"::"<<sec ;
                       cout<< "\n";
                       break;                       
             case 'q':                                   
                       break;
                 
             default:     
                       cout<< "That is not an option";
                       cout<< "Make a valid selection from the main menu \t";
}   
}                                        
  return 0;
 stop;
}
