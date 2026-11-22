#ifndef _TILE // if this class hasn't been defined, the program can define it
#define _TILE // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h"

class Tile {

public:
	Tile() = default;
	Tile(int i, int j, float _L, int _nx, int _ny, int _K);

	void show(float p);
	void showtime(float t);

private:
	int xIndex = 0;
	int yIndex = 0;
	float L = 0;
	int nx = 0;
	int ny = 0;
	int K = 10; // number of tiles to show above and below the current tile
};
#endif
