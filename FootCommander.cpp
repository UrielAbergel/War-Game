//
// Created by uriel on 20/05/2020.
//

#include "FootCommander.hpp"

#define DAMAGE 20
#define OWN_SOLDIER_DAMAGE 10

int FootCommander::hit(std::vector<std::vector<Soldier*>> board, int rows, int cols)
{
    return DAMAGE + Soldier::num_of_foot_soliders*OWN_SOLDIER_DAMAGE;
}

std::pair<int,int> FootCommander::get_loc()
{
    return {this->location.first ,this->location.second};
}

int FootCommander::get_id()
{
    return this->player_id;
}

Soldier& FootCommander::operator=(Soldier* copy_from)
{
    Soldier* the_copy = new FootCommander(copy_from->get_id());
    the_copy->health = copy_from->health;
    Soldier & ret = *the_copy;
    return ret;
}
