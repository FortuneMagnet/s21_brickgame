#include <ncurses.h>
#include <iostream>
#include "../controller/controller.h"
// должен принимать в себя значения из контроллера и пере

class GameView {
public:
    GameView(Controller *c) : cont_(c){};

    void game();

    // отрисовка поля
    void initNcurses();
    void initActions(GameInterface *g, int ch);
    void drawField(GameInterface *g);
    


private:
    Controller *cont_;
    GameInterface *g;

};