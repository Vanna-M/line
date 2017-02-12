#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 216;
  c.green = 206;
  c.blue = 246;

  clear_screen(s);

  draw_line(10,300,300,470,s,c);
  draw_line(30,50,450,250,s,c);

  c.red = 250;
  c.green = 88;
  c.blue = 130;

  draw_line(0,0,XRES,YRES,s,c);

  c.red = 88;
  c.green = 251;
  c.blue = 183;

  draw_line(400,400,405,405,s,c);
  draw_line(-1,100,50,501,s,c);

  display(s);
  save_extension(s, "lines.png");
}
