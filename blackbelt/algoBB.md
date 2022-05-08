//blackbelt algorithm

The Goal: Writting a program that simulates a horse rase using
object orianted programming (OOP) and OOD.

The Input: asking the user to enter a number

The Output: A track diagram showing the relative position of the horses.


The steps: writing my code in a different files ccp, header, and compiling those file
           as well as running them in a file called makefile. There are 2 header files one
           contain race and the other contains horse class (header file has .h as extention)
           the cpp files those contain the implemented method of the class

           The header files as follow:

            First the header files:
                starting with race.h
                      including horse.h since they are related classes
                      creating class Race
                          private:

                          creating a private member that contain array of horses

                          creating another private member that contains length of the race

                          public:

                          creating methods of the class

                          Race() which is the null constractuor

                          Race(length) it is another constructor that take the race length as a parameter

                          printLane(horsNum) this method is printing out a lane of each horse

                          start() this method keep track of the whole race


                       // end race class

