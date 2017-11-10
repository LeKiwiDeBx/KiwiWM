/*
 * main.c
 *
 *  Created on: 9 Novembre 2017
 *      Author: <jean>LeKiwiDeBx
 *  REMIX
 */

#include <stdlib.h>
#include <stdio.h>
#include <X11/Xlib.h>

int main(int argc, char **argv) {
	int screen;
	Window root;
	Display *dpy;
	Xevent ev;
	/*
	 int screen ;
	 Window root ;
	 Display *dpy;
	 Xevent ev ;

	 if (!(dpy = XOpenDisplay(0)))
	 printf("KiwiWM: cannot open display\n");

	 screen = DefaultScreen(dpy);
	 root = RootWindow(dpy, screen);

	 XSync(dpy, False);
	 xfd = ConnectionNumber(dpy);
	 while (XPending(dpy)) {
	 XNextEvent(dpy, &ev);
	 if (handler[ev.type])
	 (handler[ev.type]) (&ev);
	 }
	 */

	if (!(dpy = XOpenDisplay(0)))
		printf("KiwiWM: cannot open display\n");
	screen = DefaultScreen(dpy);
	root = RootWindow(dpy, screen);

	while(XPending(dpy) ){
				XNextEvent(dpy, &ev);

			}
			exit(EXIT_SUCCESS);
		}

