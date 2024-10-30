#include "gameView.h"

int main(){
    Model model;
    Controller cont(&model);
    GameView game(&cont);

    game.initNcurses();


    return 0;
}


// int main() {
//   init_ncurses();
//   gameAlgorithm();
//   endwin();
//   return 0;
// }

