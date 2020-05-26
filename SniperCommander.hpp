//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_SNIPERCOMMANDER_HPP
#define UNTITLED_SNIPERCOMMANDER_HPP

#include "Soldier.hpp"

class SniperCommander : public Soldier{
private:
    int player_id;
public:
    SniperCommander(int player_id)
    {
        this->player_id = player_id;
    }

    int hit();
    Point get_loc();
    int get_id();
};


#endif //UNTITLED_SNIPERCOMMANDER_HPP
