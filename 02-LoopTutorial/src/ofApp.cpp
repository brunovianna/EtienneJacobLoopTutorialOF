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

	ofSetLineWidth(2);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			float x = ofMap(i, 0, m - 1, 0, ofGetWidth());
			float y = ofMap(j, 0, m - 1, 0, ofGetHeight());

			ofPushMatrix();
			ofTranslate(x, y);

			float rot = periodicFunction(t - offset(x, y));
			
			ofRotateRad(rot);
			ofLogNotice("rot: " + ofToString(rot));

			ofLine(-8, 0, 8, 0);
			ofPopMatrix();
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
	return 1.0 * sin(TWO_PI * p);
}

float ofApp::offset(float x, float y) {
	return 0.005 * (x + 2 * y);
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
