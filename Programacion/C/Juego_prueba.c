#include <ncurses.h>

void draw_dragon(int x, int y) {
    mvprintw(y, x, "       / \\  //\\");
    mvprintw(y+1, x, "      /   \\//  .\\");
    mvprintw(y+2, x, "     /  .  \\  /\\|");
    mvprintw(y+3, x, "    /       \\  \\ ");
    mvprintw(y+4, x, "   /  .   .  \\ /");
    mvprintw(y+5, x, "  /           \\");
    mvprintw(y+6, x, " /  .     .    \\");
    mvprintw(y+7, x, " \\___________/");
    mvprintw(y+8, x, "  |  |   |  |");
    mvprintw(y+9, x, "  |  |   |  |");
    mvprintw(y+10, x, "  '\" '   '\" '");
}

int main() {
    int x = 10, y = 5, ch;
    initscr();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);

    while ((ch = getch()) != 'q') {
        clear();
        draw_dragon(x, y);
        refresh();

        if (ch == KEY_LEFT) x--;
        if (ch == KEY_RIGHT) x++;
        if (ch == KEY_UP) y--;
        if (ch == KEY_DOWN) y++;
    }

    endwin();
    return 0;
}
