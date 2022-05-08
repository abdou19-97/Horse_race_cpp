//main.cpp
#include <iostream>
#include "race.h"
#include "horse.h"
#include <stdlib.h>

//int main
int main(){
   //assigning varaiable 
   //for th user input
   int userInput;
   //asking the user to enter a number
   std::cout << "Please enter a number: " << std::endl;
   std:: cin >> userInput;
   //seed random
   srand(userInput);
   
   //call the start method
   Race r;
   r.start();


}


