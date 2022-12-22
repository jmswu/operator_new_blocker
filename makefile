FLAGS_GC  		:= -ffunction-sections -fdata-sections -Wl,-gc-section
FLAGS_OTHERS 	:= -Wall -Wextra -Weffc++

BLOCK:
	g++ main.cpp -DBLOCK  $(FLAGS_GC) $(FLAGS_OTHERS); ./a.out

BLOCK_TEST:
	g++ main.cpp -DBLOCK -DTEST $(FLAGS_GC) $(FLAGS_OTHERS); ./a.out

NO_BLOCK:
	g++ main.cpp -DNO_BLOCK $(FLAGS_GC) $(FLAGS_OTHERS); ./a.out
