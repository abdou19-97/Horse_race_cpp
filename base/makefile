raceHorse: race.o horse.o main.o
	g++ race.o horse.o main.o -o raceHorse

race.o: race.cpp race.h
	g++ -c race.cpp
horse.o: horse.cpp horse.o race.h
	g++ -c horse.cpp

main.o: main.cpp horse.h race.h
	g++ -c main.cpp

clean: 
	rm -f*.o
	rm raceHorse

run: raceHorse
	/raceHorse



        
