CC = g++
exe_file = ants
$(exe_file): Main.o Insect_GP.o Ant_P.o Bee_P.o Player.o Ant_Bodyguard.o Ant_Fire.o Ant_Harvester.o Ant_Long_Thrower.o Ant_Ninja.o Ant_Short_Thrower.o Ant_Thrower.o Ant_Wall.o 
	$(CC)  Main.o Insect_GP.o Ant_P.o Bee_P.o Player.o Ant_Bodyguard.o Ant_Fire.o Ant_Harvester.o Ant_Long_Thrower.o Ant_Ninja.o Ant_Short_Thrower.o Ant_Thrower.o Ant_Wall.o -o $(exe_file)
Main.o: Main.cpp
	$(CC) -c Main.cpp
Insect_GP.o: Insect_GP.cpp
	$(CC) -c Insect_GP.cpp
Ant_P.o: Ant_P.cpp
	$(CC) -c Ant_P.cpp
Bee_P.o: Bee_P.cpp
	$(CC) -c Bee_P.cpp
Player.o: Player.cpp
	$(CC) -c Player.cpp
Ant_Bodyguard.o: Ant_Bodyguard.cpp
	$(CC) -c Ant_Bodyguard.cpp
Ant_Fire.o: Ant_Fire.cpp
	$(CC) -c Ant_Fire.cpp
Ant_Harvester.o: Ant_Harvester.cpp
	$(CC) -c Ant_Harvester.cpp
Ant_Long_Thrower.o: Ant_Long_Thrower.cpp
	$(CC) -c Ant_Long_Thrower.cpp
Ant_Ninja.o: Ant_Ninja.cpp
	$(CC) -c Ant_Ninja.cpp
Ant_Short_Thrower.o: Ant_Short_Thrower.cpp
	$(CC) -c Ant_Short_Thrower.cpp
Ant_Wall.o: Ant_Wall.cpp
	$(CC) -c Ant_Wall.cpp
clean:
	rm -f *.out *.o $(exe_file)