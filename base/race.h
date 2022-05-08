#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS


#include "horse.h"
//class race
class Race{
   
   private:
    //private member of the class
     Horse h[5];
     int length;
   public:
     // methods
      Race();
      Race(int length);
      void printLane(int horseNum);
      void start();

}; //end race class

#endif
