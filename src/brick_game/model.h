#include <iostream>
#include "./snake/snake.h"

struct GameInterface{
    int hello;
};

class Model{
    public:
        Model(){
            snake = new Snake();
        }
        
        Snake* snake;
       
    private:
};
