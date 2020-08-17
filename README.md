# kawakudari_of_c

This project implements part of the [std15.h](https://github.com/IchigoJam/c4ij/blob/master/src/std15.h) API (from [c4ij](https://github.com/IchigoJam/c4ij)) with [openFrameworks](https://openframeworks.cc/) (wrapped by C), and [Kawakudari Game](https://ichigojam.github.io/print/en/KAWAKUDARI.html) on top of it.

It will allow programming for [IchigoJam](https://ichigojam.net/index-en.html)-like targets using a C programming language.
```
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

```

## Prerequisite

[Download](https://openframeworks.cc/download/) and install openFrameworks suitable for your environment.

## Preparation

Adjust contents of config.make to suit your environment.
```
# OF_ROOT = ../../..
OF_ROOT = /home/someone/apps/of
```

## How to use

To build it
```
$ make
```

To run it
```
$ make run
```
