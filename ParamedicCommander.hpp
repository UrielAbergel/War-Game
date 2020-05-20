//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_PARAMEDICCOMMANDER_PP
#define UNTITLED_PARAMEDICCOMMANDER_PP

#include "Solider.hpp"
#include "Board.hpp"

class ParamedicCommander : public Solider {
private:
    int player_id;
public:
    ParamedicCommander(int player_id)
    {
        this->player_id = player_id;
    }
    int hit(Solider & solider);
    Point get_loc();
    int get_id();
};


#endif //UNTITLED_PARAMEDICCOMMANDER_PP
