#include "Tile.h"


Tile::Tile(int i, int j, float _L, int _nx, int _ny, int _K) {
    xIndex = i;
    yIndex = j;
	L = _L;
	nx = _nx;
	ny = _ny;
	K = _K	; // number of tiles to show above and below the current tile
}



void Tile::show(float p)
{
    ofPushMatrix();
    ofTranslate(L * (xIndex - nx / 2), L * yIndex, -L / 2);
	ofTranslate(0, -p * L * ny);

    ofNoFill();
    ofSetColor(255);
    ofSetLineWidth(.5);

    ofDrawRectangle(ofPoint(0.95 * L, 0.95 * L), 0.95 * L, 0.95 * L); // a bit of space between tiles, and small z length
    ofPopMatrix();
}

void Tile::showtime(float t) {
	for (int i = -K; i <= K; i++) {
		float p = i + t;
		show(p);
	}
}
