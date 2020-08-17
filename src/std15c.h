#pragma once

#include <stdint.h>

#define KEY_LEFT  0xe00C
#define KEY_UP    0xe00D
#define KEY_RIGHT 0xe00E
#define KEY_DOWN  0xe00F

#ifdef __cplusplus
extern "C" {
#endif

  void run(int screen_sx, int screen_sy, int cb_sx, int cb_sy);
  void locate(int x, int y);
  void putc_(char c);
  char scr(int x ,int y);
  void scroll();

  uint64_t framenum();
  float random_(float max);

  void setup();
  void update();
  void keyPressed(int key);

#ifdef __cplusplus
}
#endif
