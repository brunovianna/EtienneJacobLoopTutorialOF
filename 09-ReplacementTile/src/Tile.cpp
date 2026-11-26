#include "Tile.h"


Tile::Tile(int i, int j, float _L, int _nx, int _ny, int _K) {
    xIndex = i;
    yIndex = j;
	L = _L;
	nx = _nx;
	ny = _ny;
	K = _K	; // number of tiles to show above and below the current tile
	delay = 0.5 * ofRandomf() + 1.0 * yIndex / ny - 0.3;
	int digit = floor(ofRandom(10));

}



void Tile::show(float p)
{
    ofPushMatrix();
    ofTranslate(L * (xIndex - nx / 2), L * yIndex, -L / 2);
	ofTranslate(0, -p * L * ny);

	float changer = ofClamp(ofMap(p - delay, 0, 2.5, 0, 1), 0, 1);
	changer = Tile::ease(changer, 1.4); // classic in-out easing with stength 1.4
	float elasticChanger = Tile::easeOutElastic(changer); // then elastic easing

	float xRot = PI + PI * elasticChanger;

    ofFill();
    ofSetColor(0);
    ofSetLineWidth(1);

	ofRotateRad(xRot, 1, 0, 0);
    ofDrawBox(0.95 * L, 0.95 * L, 0.1 * L); // a bit of space between tiles, and small z length
	ofNoFill();
	ofSetColor((255 * (1 - changer)));
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

float Tile::easeOutElastic(float x) {
	float c4 = (2 * PI) / 3;
	if (x <= 0) return 0;
	if (x >= 1) return 1;
	return pow(2, -10 * x) * sin((x * 10 - 0.75) * c4) + 1;
}

// in-out easing of strength g
float Tile::ease(float p, float g) {
	if (p < 0.5)
		return 0.5 * pow(2 * p, g);
	else
		return 1 - 0.5 * pow(2 * (1 - p), g);
}
