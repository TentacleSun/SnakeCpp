#ifndef EVOLUTION_PARAMETERS_H
#define EVOLUTION_PARAMETERS_H

#include <Parameters/parameters.h>

class EvolutionParameters : public Parameters
{
    public:
        int delayDuration = 80;

//Statistic info
        int generation = 0;
        int score = 0;
        int aliveSnakes = 1;
        int time = 0;
        int turn = 0;

//SnakeParameters
        int countOfSnakes = 1;
        int snakeLength = 6;
        int snakeHeadColor = COLOR_YELLOW;
        int snakeOneBodyColor = COLOR_GREEN;
        int snakeTwoBodyColor = COLOR_BLACK;
        int snakeThreeBodyColor = COLOR_GREEN;
        int snakeFourBodyColor = COLOR_GREEN;
        int snakeFiveBodyColor = COLOR_GREEN;

//FoodModel
        int countOfFood = 10;
        int snakeOnefoodColor = COLOR_RED;
        int snakeTwofoodColor = COLOR_RED;
        int snakeThreefoodColor = COLOR_RED;
        int snakeFourfoodColor = COLOR_RED;
        int snakeFivefoodColor = COLOR_RED;

};

#endif
