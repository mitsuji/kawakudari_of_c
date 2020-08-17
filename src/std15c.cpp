#include "std15c.h"
#include "ofApp.h"
#include <stdint.h>

static ofApp * app = NULL;

void run(int screen_sx, int screen_sy, int cb_sx, int cb_sy) {
  ofSetupOpenGL(screen_sx, screen_sy, OF_WINDOW);
  app = new ofApp(screen_sx, screen_sy, cb_sx, cb_sy);
  ofRunApp(app);
}

void locate(int x, int y) {
  app->_std15.locate(x,y);
}

void putc_(char c) {
  app->_std15.putc(c);
}

char scr(int x ,int y) {
  return app->_std15.scr(x,y);
}

void scroll() {
  app->_std15.scroll();
}

uint64_t framenum() {
  return ofGetFrameNum();
}

float random_(float max) {
  return ofRandom(max);
}
