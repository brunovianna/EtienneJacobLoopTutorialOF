#include "Tile.h"


Tile::Tile(int i, int j, float _L, int _nx) {
    xIndex = i;
    yIndex = j;
	L = _L;
	nx = _nx;
}



void Tile::show()
{
    ofPushMatrix();
    ofTranslate(L * (xIndex - nx / 2), L * yIndex, -L / 2);

    ofNoFill();
    ofSetColor(255);
    ofSetLineWidth(.5);

    ofDrawRectangle(ofPoint(0.95 * L, 0.95 * L), 0.95 * L, 0.95 * L); // a bit of space between tiles, and small z length
    ofPopMatrix();
}

