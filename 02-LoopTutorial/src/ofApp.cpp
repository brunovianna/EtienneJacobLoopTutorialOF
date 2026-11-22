#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(12);
}

//--------------------------------------------------------------
void ofApp::update() {
}

//--------------------------------------------------------------
void ofApp::draw() {

	float t = 1.0 * (ofGetFrameNum() - 1) / numFrames;

	ofBackground(239);
	ofFill();
	ofSetColor(20);




	int m = 50;

	
for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			float x = ofMap(i, 0, m - 1, 0, ofGetWidth());
			float y = ofMap(j, 0, m - 1, 0, ofGetHeight());

			float size = periodicFunction(t - offset(x, y));
			

			ofDrawCircle(x, y, size	);
		}
	}

	//if (ofGetFrameNum() < numFrames) {
	//	ofSaveFrame("frames/frame_####.png");
	//} else  {
	//	ofLogNotice("All frames have been saved. Use an online tool to combine them into an animation.");
	//	ofExit();
	//}
}

float ofApp::periodicFunction(float p) {
	//return 5.0 * sin(TWO_PI * p);
	return ofMap(sin(TWO_PI * p), -1, 1, 2, 8);
}

float ofApp::offset(float x, float y) {
	//return 0.05 * (x + 2 * y);
	return 0.01 * ofDist(x, y, ofGetWidth() / 2, ofGetHeight() / 2);
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
}
