#pragma once

#include "ofMain.h"

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

		
        float periodicFunction(float p, float seed, float x, float y);

		float offset(float x, float y);
		int numFrames = 100;


		float randomValue(float p, float seed);
		ofVec2f position(float p);
		void drawThing(float p);

		ofColor palette[4] = { ofColor(247, 247, 247), ofColor(204, 234, 187), ofColor(63, 63, 68), ofColor(253, 203, 158) };

		
};
