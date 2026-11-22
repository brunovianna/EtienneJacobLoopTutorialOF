#include "Tile.h"


Tile::Tile(int i, int j, float _L, int _nx, int _ny, int _K) {
    xIndex = i;
    yIndex = j;
	L = _L;
	nx = _nx;
	ny = _ny;
	K = _K	; // number of tiles to show above and below the current tile
	delay = 1.0 * yIndex / ny;
}



void Tile::show(float p)
{
    ofPushMatrix();
    ofTranslate(L * (xIndex - nx / 2), L * yIndex, -L / 2);
	ofTranslate(0, -p * L * ny);

	float changer = ofClamp(ofMap(p - delay, 0, 2.5, 0, 1), 0, 1);
	float xRot = PI + PI * changer;

    ofFill();
    ofSetColor(0);
    ofSetLineWidth(.5);

	ofRotateRad(xRot, 1, 0, 0);
    ofDrawBox(0.95 * L, 0.95 * L, 0.1 * L); // a bit of space between tiles, and small z length
	ofNoFill();
	ofSetColor(255);
	ofDrawBox(0.95 * L, 0.95 * L, 0.1 * L); // a bit of space between tiles, and small z length
	
    ofPopMatrix();
}

void Tile::showtime(float t) {
	for (int i = 0; i <= K; i++) {
		float p = i + t;
		show(p);
	}
	for (int i = 0; i >= -K; i--) {
		float p = i + t;
		show(p);
	}
}
