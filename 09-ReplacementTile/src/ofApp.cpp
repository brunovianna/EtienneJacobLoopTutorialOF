#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);

	L = 1.0 * ofGetWidth() / 15;

	for (int i = 0; i < nx; i++) {
		for (int j = 0; j < ny; j++) {
			Tile t = Tile(i, j, L, nx, ny, 10);
			tiles[i][j] = t;
		}
	}

}

//--------------------------------------------------------------
void ofApp::update(){

}


//--------------------------------------------------------------
void ofApp::draw() {

	float t = 1.0 * (ofGetFrameNum() - 1) / numberOfFrames;

	ofBackground(0);

	ofPushMatrix();
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);



	ofRotateXRad(0.85);
	ofRotateZRad(0.4);
	
	for (int i = 0; i < nx; i++) {
		for (int j = 0; j < ny; j++) {
			tiles[i][j].showtime(t);
		}
	}

	ofPopMatrix();

	//if (ofGetFrameNum() < numFrames) {
	//	ofSaveFrame("frames/frame_####.png");
	//} else  {
	//	ofLogNotice("All frames have been saved. Use an online tool to combine them into an animation.");
	//	ofExit();
	//}
}
//
//float ofApp::randomValue(float p, float seed) {
//	float scl = 120.0;
//	return pow(((float)ofNoise(scl * p, seed) + 1) / 2.0, 2.0);
//}
//
//ofVec2f ofApp::position(float p) {
//  float q = sqrt(p);
//  float theta = 7*TWO_PI*q;
//  float r = 0.4*ofGetWidth()*q;
//  
//  return ofVec2f(r*cos(theta),r*sin(theta));
//}
//
//void ofApp::drawThing(float p) {
//	float v1 = randomValue(p, 100.0);
//	float v2 = randomValue(p, 200.0);
//	float v3 = randomValue(p, 300.0);
//
//	float sumv = v1 + v2 + v3;
//
//	float alpha = 10 * TWO_PI * p;
//
//	float theta0 = ofRadToDeg(alpha+ 0);
//	float theta1 = ofRadToDeg(alpha + ofMap(v1 / sumv, 0, 1, 0, TWO_PI));
//	float theta2 = ofRadToDeg(alpha + ofMap((v1 + v2) / sumv, 0, 1, 0, TWO_PI));
//	float theta3 = ofRadToDeg(alpha + TWO_PI);
//
//	float r = 24 * sin(PI * p); // sin(PI*p) is 0 at p=0 and p=1, and 1 in the middle
//
//	ofVec2f pos = position(p);
//
//	ofPath pie;
//	
//	pie.setFillColor(palette[1]);
//	pie.moveTo(0, 0);
//	pie.arc(0, 0, r, r, theta0, theta1);
//	pie.draw(pos.x, pos.y);
//
//	
//	ofPath pie2;
//	pie2.setFillColor(palette[2]);
//	pie2.moveTo(0, 0);
//	pie2.arc(0, 0, r, r, theta1, theta2);
//	pie2.draw(pos.x, pos.y);
//
//	ofPath pie3;
//	pie3.setFillColor(palette[3]);
//	pie3.moveTo(0, 0);
//	pie3.arc(0, 0, r, r, theta2, theta3);
//	pie3.draw(pos.x, pos.y	);
//
//}
//
//


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
