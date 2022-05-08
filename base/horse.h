//horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS
#include <iostream>
#include <string>

//horse class
class Horse{
  private:
     //prinvate member
     int position;
  public:
    //methods of the class
     Horse();
     void advance();
     int getPosition();
};//end horse class

#endif
