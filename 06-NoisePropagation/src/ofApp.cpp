#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
}

//--------------------------------------------------------------
void ofApp::update(){

}


//--------------------------------------------------------------
void ofApp::draw() {

	float t = 1.0 * (ofGetFrameNum() - 1) / numFrames;

	ofBackground(0);
	ofFill();
	ofSetColor(240,50);

	int m = 450;

	ofSetLineWidth(2);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			float margin = 50;
			float x = ofMap(i, 0, m - 1, margin, ofGetWidth() - margin);
			float y = ofMap(j, 0, m - 1, margin, ofGetHeight() - margin);

			float dx = 20.0 * periodicFunction(t - offset(x, y), 0, x, y); // seed at 0
			float dy = 20.0 * periodicFunction(t - offset(x, y), 123, x, y); // seed at 123 which is far enough from 0 for independence

			ofDrawCircle(x + dx, y + dy,1);
		}
	}

	//if (ofGetFrameNum() < numFrames) {
	//	ofSaveFrame("frames/frame_####.png");
	//} else  {
	//	ofLogNotice("All frames have been saved. Use an online tool to combine them into an animation.");
	//	ofExit();
	//}
}

float ofApp::periodicFunction(float p, float seed, float x, float y) {
	float radius = 1.3;
	float scl = 0.018;
	return 1.0 * (float)ofNoise(seed + radius * cos(TWO_PI * p), radius * sin(TWO_PI * p), scl * x, scl * y);
}

float ofApp::offset(float x, float y) {
	float offset = 0.01 * (x + 2 * y);
	//ofLogNotice("offset: " + ofToString(offset));
	//float offset =  0.015 * ofDist(x, y, ofGetWidth() / 2, ofGetHeight() / 2);
	return offset;
	//return 0;
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
