#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){



	float t = 1.0 * (ofGetFrameNum() - 1) / numFrames;
	float r = 100;
	float x = ofGetWidth() / 2 + r * cos(TWO_PI * t);
	float y = ofGetHeight()	 / 2 + r * sin(TWO_PI * t);

	ofBackground(230);
	ofFill();
	ofSetColor(20);
	ofDrawCircle(x, y, 3);

	//if (ofGetFrameNum() < numFrames) {
	//	ofSaveFrame("frames/frame_####.png");
	//} else  {
	//	ofLogNotice("All frames have been saved. Use an online tool to combine them into an animation.");
	//	ofExit();
	//}

}


float periodicFunction(float p) {
	return ofMap(sin(TWO_PI * p), -1, 1, 2, 8);
}

float offset(float x, float y) {
	return 0.01 * ofDist(x, y, ofGetWidth() / 2, ofGetHeight()	 / 2);
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
