BLOCK:
	g++ main.cpp -DBLOCK -ffunction-sections -fdata-sections -Wl,-gc-section; ./a.out

NO_BLOCK:
	g++ main.cpp -ffunction-sections -fdata-sections -Wl,-gc-section; ./a.out