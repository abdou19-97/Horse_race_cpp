//horse.cpp
#include <iostream>
#include <string>
#include "race.h"
#include "horse.h"
#include <stdlib.h>

//Implemented horse from the horse class
Horse::Horse(){
     //set position to 0
     Horse::position = 0;

} //end Horse null constructor

//Implement the advance method
void Horse::advance(){
     //using statement to incrument
     //the horse position depending 
     //on the flip coin
     if(rand()%2 == 1){
        position++;
      }
}//end advance method

//implemnt get position
int Horse::getPosition(){
      //return the current position
      //of the horse
      return position;
} //end getPostion method

