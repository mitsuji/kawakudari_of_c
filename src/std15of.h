#pragma once

#define KEY_LEFT  0xe00C
#define KEY_UP    0xe00D
#define KEY_RIGHT 0xe00E
#define KEY_DOWN  0xe00F

#define DIR_UP    0
#define DIR_RIGHT 1
#define DIR_DOWN  2
#define DIR_LEFT  3

#ifdef __cplusplus
extern "C" {
#endif

  void run(float screenW, float screenH, int buffW, int buffH);
  void locate(int x, int y);
  void putc_(char c);
  void putstr(const char * s);
  void putnum(int n);
  char scr(int x ,int y);
  void scroll(int dir);
  unsigned int frame();
  void pset(int x, int y);
  int rnd(int);

  void setup();
  void update();
  void keyPressed(int key);

#ifdef __cplusplus
}
#endif
