#pragma once

#include "ofMain.h"
#include "Tile.h"

#define _NY 4
#define _NX 70

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);


	
		float t;
		float L;

		int numberOfFrames = 100;

		int ny = _NY;
		int nx = _NX;

		Tile tiles[_NX][_NY];

		
};
