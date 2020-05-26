//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_FOOTCOMMANDER_HPP
#define UNTITLED_FOOTCOMMANDER_HPP

#include "Soldier.hpp"

class FootCommander : public Soldier{
private:
    int player_id;
public:
    FootCommander(int player_id)
    {
        this->player_id = player_id;
    }

    int hit();
    Point get_loc();
    int get_id();
};


#endif //UNTITLED_FOOTCOMMANDER_HPP
