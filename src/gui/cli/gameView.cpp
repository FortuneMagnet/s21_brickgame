#include "gameView.h"


void GameView::initNcurses(){
    initscr();      // Инициализация ncurses
    start_color();  // Начало работы с цветами
    curs_set(0);
    cbreak();    // Скрытие курсора
    noecho();  // Отключение отображения введенных символов
    keypad(stdscr, TRUE);  // Включение чтения специальных клавиш
    nodelay(stdscr, true);


    // Инициализация цвета
  // Цвета фигур
  init_pair(1, COLOR_GREEN, COLOR_GREEN);
  init_pair(2, COLOR_GREEN, COLOR_CYAN);
  init_pair(3, COLOR_GREEN, COLOR_BLUE);
  init_pair(4, COLOR_GREEN, COLOR_YELLOW);
  init_pair(5, COLOR_GREEN, COLOR_BLACK);
  init_pair(6, COLOR_GREEN, COLOR_MAGENTA);
  init_pair(7, COLOR_GREEN, COLOR_RED);

  // Цвета боковых полей
  init_pair(8, COLOR_BLUE, COLOR_WHITE);

  // Цвета сервисного поля
  init_pair(9, COLOR_WHITE, COLOR_BLUE);

  // Цвета игрового поля
  init_pair(12, COLOR_WHITE, COLOR_WHITE);
  init_pair(13, COLOR_WHITE, COLOR_BLUE);
}


void GameView::initActions(GameInterface *g, int ch){
    if (ch == 'h')
        g->hello = 1;
    if (ch == 't')
        g->hello = 2;
    if (ch == 'q')
        g->hello = 3;
}

void GameView::drawField(GameInterface *g){
    if (g->hello == 1)
    mvaddch(2, 2, 'H');
    if (g->hello == 2)
    mvaddch(2, 2, 't');
}

void GameView::game(){
    while (g->hello == 2)
    {
        initActions(g,getchar());
        drawField(g);
    }
    
}