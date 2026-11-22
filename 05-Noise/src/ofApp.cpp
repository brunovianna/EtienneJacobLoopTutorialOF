#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

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
			float firstx = ofMap(i, 0, m - 1, 0, ofGetWidth());
			float firsty = ofMap(j, 0, m - 1, 0, ofGetHeight());

			float lastx = ofMap(i, 0, m - 1, ofGetWidth() *0.3, ofGetWidth() *0.7);
			float lasty = ofMap(j, 0, m - 1, ofGetHeight() *0.3, ofGetHeight() *0.7);


			float toffset = periodicFunction(t			-offset(i, j));

			float x = ofMap(toffset, 0, 1, firstx, lastx);
			float y = ofMap(toffset, 0, 1, firsty, lasty);

			ofPushMatrix();
			ofTranslate(x, y);

			//float rot = periodicFunction(t - offset(x, y));

	//		ofRotateRad(rot);
			//ofLogNotice("rot: " + ofToString(rot));

//			ofDrawLine(-4 + (3*offset(i,j)), 0, 4 - (3*offset(i,j)), 0);
			ofDrawLine(-4 + (3 * toffset), 0, 4 - (3 * toffset), 0);
			ofPopMatrix();
		}
	}

	if (ofGetFrameNum() < numFrames) {
		ofSaveFrame("frames/frame_####.png");
	} else  {
		ofLogNotice("All frames have been saved. Use an online tool to combine them into an animation.");
		ofExit();
	}
}

float ofApp::periodicFunction(float p) {
	float radius = 1.3;
//	return 1.0 * (float)ofNoise(radius * cos(TWO_PI * p), radius * sin(TWO_PI * p));urn 
	//return 1;
	return 0.5 * (1 + sin(TWO_PI * p));
}

float ofApp::offset(float x, float y) {
	float offset = 0.01 * (x + 2 * y);
	//ofLogNotice("offset: " + ofToString(offset));
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
