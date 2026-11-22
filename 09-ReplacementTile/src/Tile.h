#ifndef _TILE // if this class hasn't been defined, the program can define it
#define _TILE // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h"

class Tile {

public:
	Tile() = default;
	Tile(int i, int j, float _L, int _nx);

	void show();

private:
	int xIndex = 0;
	int yIndex = 0;
	float L = 0;
	int nx = 0;
};
#endif
