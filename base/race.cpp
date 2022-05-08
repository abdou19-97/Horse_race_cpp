#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string.h>
#include "race.h"
#include "horse.h"

bool keepGoing = true;                                                          

//Implemented the race class
 
Race::Race(){
    //calling the horse array and
    //the length from the class race
    Race::h[5];
    Race::length = 15;
}//end Race null constroctur

//Race contructor with paramater
Race::Race(int length){
     length = length;
} //end Race constructor

//Implement the prinLane method
void Race::printLane(int horseNum){
      
      //assign variable n that takes
      //the horse index from getPosition
      int n = Race::h[horseNum].getPosition();
       
         //using for loop to itrate through
         //the array horses and print dots
         //each time the horse make move  
         for(int j=0; j< n - 1; j++)
         {
             std::cout << '.';
         } 
         
         std::cout << horseNum;
         
         //using for loop to draw the rest
         //of the dots
         for(int k = n; k<15; k++)
         {
            std::cout << '.';
         }

         std::cout << std::endl;         
                
      
    
} 

//Implement the start method
void Race::start(){
   
    //generate a while loop that keep track 
    //of the race 
     while(keepGoing){
        
      // using a for loop that iterate through
      // the horse and each time call the horse
      // index from the advance() and get the 
      // current position from the getPosition() 
        for(int i=0; i<5; i++){   
          Race::h[i].advance();
          int p = Race::h[i].getPosition();
	  printLane(i);
         
          //using if statemnt to end the race
          //if the horse get to the last position     
          if(p >= length){
            keepGoing = false;
            
          }
        } 
	std::cout<<std::endl;
    }
             
}           
 

