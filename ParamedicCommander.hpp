//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_PARAMEDICCOMMANDER_PP
#define UNTITLED_PARAMEDICCOMMANDER_PP

#include "Soldier.hpp"
#include "Board.hpp"

class ParamedicCommander : public Soldier {
private:
    int player_id;
public:
    ParamedicCommander(int player_id)
    {
        this->player_id = player_id;
    }
    int hit();
    Point get_loc();
    int get_id();
};


#endif //UNTITLED_PARAMEDICCOMMANDER_PP
