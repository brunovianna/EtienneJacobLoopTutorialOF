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

	int m = 17;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			float x = ofMap(i, 0, m - 1, 20, ofGetWidth() - 20);
			float y = ofMap(j, 0, m - 1, 20, ofGetHeight() - 20);

			ofPushMatrix();
			ofTranslate(x, y);

			// this offset is the distance from center
			// + the angle from center (gives the spiral shape)
			float offset = 0.003 * ofDist(x, y, ofGetWidth() / 2, ofGetHeight() / 2)
				+ atan2(y - ofGetWidth() / 2, x - ofGetWidth() / 2) / TWO_PI;
			float changeParameter = ofMap(sin(TWO_PI * (t - offset)), -1, 1, 0, 1);
			drawFace(changeParameter);

			ofPopMatrix();
		}
	}
}



void ofApp::drawFace(float p) // p : parameter in [0,1]
{
	// face circle
	ofSetLineWidth(2);
	ofSetColor(60); // dark gray
	ofFill();
	ofSetColor(245); // light gray
	ofDrawEllipse(0, 0, 25, 25);

	// red to green interpolation
	ofColor red(220, 40, 40);
	ofColor green(20, 210, 20);
	ofColor col = red.getLerped(green, p);
	ofSetColor(col);

	// eyes
	ofSetLineWidth(4);
	ofDrawCircle(-4, -3, 2);
	ofDrawCircle(4, -3, 2);

	// mouth
	int n = 10;
	for (int i = 0; i <= n; i++) {
		float X = ofMap(i, 0, n, -6, 6);
		float Y = 4 + ofMap(p, 0, 1, -2.5, 2.5) * sin(PI * i / n);
		ofDrawCircle(X, Y, 2);
	}
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
