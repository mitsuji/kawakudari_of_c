#include "std15of.h"

#define TRUE  1
#define FALSE 0

static int running;
static int x;

int main( ){
  run(512, 384, 32, 24);
}

void setup() {
  running = TRUE;
  x = 15;
}

void update() {
  if (!running) return;
  if (frame() % 5 == 0) {
    locate(x, 5);
    putc_('0');
    locate(rnd(32), 23);
    putc_('*');
    scroll(DIR_UP);
    if (scr(x, 5) != '\0') {
      locate(0, 23);
      putstr("Game Over...");
      putnum(frame());
      running = FALSE;
    }
  }
}

void keyPressed(int key) {
  if (key == KEY_LEFT)  x--;
  if (key == KEY_RIGHT) x++;
}
