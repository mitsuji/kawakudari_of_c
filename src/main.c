#include "std15c.h"
#include <math.h>

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
  if(!running) return;
  if(framenum() % 5 == 0 ) {
    locate(x, 5);
    putc_('0');
    locate(floor(random_(32)), 23);
    putc_('*');
    scroll();
    if (scr(x, 5)!='\0') {
      running = FALSE;
    }
  }
}

void keyPressed(int key) {
  if (key == KEY_LEFT)  --x;
  if (key == KEY_RIGHT) ++x;
}
