#pragma once

#include "ofMain.h"
#include "ichigojam.hpp"

class ofApp : public ofBaseApp {

public:
  ofApp(float screenW, float screenH, int buffW, int buffH);
  void setup();
  void update();
  void draw();
  void keyPressed(int key);

public:
  std15 std15_;

};
