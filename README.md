# kawakudari_of_c

This project implements part of the [std15.h](https://github.com/IchigoJam/c4ij/blob/master/src/std15.h) API (from [c4ij](https://github.com/IchigoJam/c4ij)) with [openFrameworks](https://openframeworks.cc/) (wrapped by C), and [Kawakudari Game](https://ichigojam.github.io/print/en/KAWAKUDARI.html) on top of it.

It will allow programming for [IchigoJam](https://ichigojam.net/index-en.html)-like targets that display [IchigoJam FONT](https://mitsuji.github.io/ichigojam-font.json/) on screen using a C programming language.
```
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

## License
[![Creative Commons License](https://i.creativecommons.org/l/by/4.0/88x31.png)](http://creativecommons.org/licenses/by/4.0/)
[CC BY](https://creativecommons.org/licenses/by/4.0/) [mitsuji.org](https://mitsuji.org)

This work is licensed under a [Creative Commons Attribution 4.0 International License](http://creativecommons.org/licenses/by/4.0/).
