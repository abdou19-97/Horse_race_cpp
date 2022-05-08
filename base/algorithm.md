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
        
         



             Second horse.h file
                    definding the horse existance 

                    including string 
 
                    creating Horse class
                        
                       private:
                          creating position for the horse as private member of the class
         
                       public: 
               
                         creating null constractor for the horse 
                            
                         advance() this method is responsible for the horse move

                         getPosition() this method is responsible for getting the current horse position



                   // end horse class 
       
     //end header files

                                                                              

     The cpp files are as follow:

        Second the cpp files: The cpp files contain the implemented methods both horse and race classes

            
                            Starting with race.cpp file:
                                         
                                 including race.h and horse.h
                                   
                                 creating a boolean and setting it to true as long as the race going
                                 
                                 implemeting the race methods
                                    
                                  -> implementing the null constructor method
                                      
                                         call the horse array and length same as in class 
                     
                                     //end the null contructor


                           
                                 -> implementing the race constructor that takes in length as a parameter
      
                                          creating variable called length and set it to length


                                      // end the race constructor




                                -> implementing printLane methods that tkaes in the number of hores as a parameter

                                         creating a variable n that tkaes in the horse number index from the getPostion method

                                         using for loop that draw a dots each time the horse make a move
                                          
                                         using another for loop that print out the rest of the dots
                                         
                                
                                    //end the printLane
      
                    
                               -> implemnt the start method
                                            
                                         generate a while loop that keep track of the whole race
                                                
                                               using for loop that iterate through the horse array
                                                  
                                                   call the horse index from the advance method
                                                  
                                                   assign a variable that takes in the getPosition of the horse index

                                                   print out the diagram of the race

                                                   using an if statment to stop the race if the horse passed the limited length




                               // end the start method 



          
                   Second horse.cpp file:
                           including the race and the horse.h and the race.h files

                           -> implement the horse constructor (null)
                               
                                  set the position to zero
                           // end horse constructor

                              
                          -> implement the advance method 
              
                                 using if statment to keep track of the horse move depending on the flip coin



                         // end advance method


                        -> implement getPosition method
                             
                                 return the current position of the horse

                       // end getPostion method


              
              Last the main.cpp file: The main file is where both horse and race class called

                      including race.h, horse.h, and stdlib for seed random
                          
                      creating main function()
                      
                         creating a variable that takes in the user input
                          
                         ask the user to enter a number
                        
                         using a seed random this allow the user to put any number
                         
                         call the start function
             
                 // end main 



      // end cpp files
  
    
   In the make file there are the compiled files; race.h, horse.h, race.cpp, horse.cpp, and main.cpp. Also there is the run command and clean buffer





                          



                               
                       
                 



        


 
                                                               
                                                        
                             
                                       
                               
    





                         
                  
                                    
                   

           

       
 



         



                  

 



                                   
