#include <iostream>
#include <ncurses.h>
#include <vector>

void initCurses();
void endCurses();

// Function to begin curses mode
void initCurses() {
    intitscr(); // begin curses
    raw();  // disable line buffering
    noecho();   //disable unneccessary echoing
    keypad(stdscr, TRUE);   //enable keyboard reading
}

// Function to end curses mode
void endCurses() {
    refresh();  // print to screen
    endwin();   //end curses
}

int main(int argc, char **argv) {
    initCurses();   // initialize curses

    endCurses();    // end curses
    return 0;
}