#include "ofApp.h"

extern "C" {
  extern void setup();
  extern void update();
  extern void keyPressed(int key);
}


//--------------------------------------------------------------
ofApp::ofApp(int screen_sx, int screen_sy, int cb_sx, int cb_sy)
  : _std15(screen_sx, screen_sy, cb_sx, cb_sy)
{
}

//--------------------------------------------------------------
void ofApp::setup(){
  ::setup();
}

//--------------------------------------------------------------
void ofApp::update(){
  ::update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  _std15.ofDraw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  ::keyPressed(key);
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
