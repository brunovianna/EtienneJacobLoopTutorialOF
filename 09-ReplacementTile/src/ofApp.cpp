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
	ofEnableDepthTest();

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
	ofDisableDepthTest();

	//if (ofGetFrameNum() < numFrames) {
	//	ofSaveFrame("frames/frame_####.png");
	//} else  {
	//	ofLogNotice("All frames have been saved. Use an online tool to combine them into an animation.");
	//	ofExit();
	//}
}
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
