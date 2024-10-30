#include <iostream>
#include "../../brick_game/model.h"

class Controller{
public:
    // конструктор со списком инициализации
    Controller(Model *s) : model_(s){}; 


private:
    Model *model_; // переменная модели для инициализации
};