#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {

    //init
    int x = x0;
    int y = y0;

    int a = y1 - y0;
    int b = -1 *(x1 - x0);

    int d = (2 * a) + b;

    while(x <= x1){
        //plot old point
        plot(s,c,x,y);

        //if mdpnt below line, use top pixel
        if (d > 0){
            //switch to top pixel
            y++;
            //add to d
            d+=2*b;
        }

        //always add to d
        d += 2*a;
        x++;
    }
    //plot final point
    plot(s,c,x,y);
}
