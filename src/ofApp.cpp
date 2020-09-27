#include "ofApp.h"
#include "std15of.h"

extern "C" {
  extern void setup();
  extern void update();
  extern void keyPressed(int key);
}

ofApp::ofApp(float screenW, float screenH, int buffW, int buffH)
  : std15_(screenW, screenH, buffW, buffH)
{
}

void ofApp::setup(){
  ::setup();
}

void ofApp::update(){
  ::update();
}

void ofApp::draw(){
  std15_.drawScreen();
}

void ofApp::keyPressed(int key){
  ::keyPressed(key);
}



static ofApp * app = NULL;

void run(float screenW, float screenH, int buffW, int buffH) {
  ofSetupOpenGL(screenW, screenH, OF_WINDOW);
  app = new ofApp(screenW, screenH, buffW, buffH);
  ofRunApp(app);
}

void locate(int x, int y) {
  app->std15_.locate(x,y);
}

void putc_(char c) {
  app->std15_.putc(c);
}

char scr(int x ,int y) {
  return app->std15_.scr(x,y);
}

void scroll(int dir) {
  app->std15_.scroll(dir);
}

unsigned int frame() {
  return ofGetFrameNum();
}

int rnd(int max) {
  return floor(ofRandom(max));
}
