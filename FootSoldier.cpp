//
// Created by uriel on 20/05/2020.
//

#include "FootSoldier.hpp"

#define DAMAGE 10

int FootSoldier::hit(std::vector<std::vector<Soldier*>> board, int rows, int cols)
{
    return DAMAGE;
}

std::pair<int,int> FootSoldier::get_loc()
{
    return {this->location.first,this->location.second};
}

int FootSoldier::get_id()
{
    return this->player_id;
}


Soldier& FootSoldier::operator=(Soldier *copy_from) {
    Soldier* the_copy = new FootSoldier(copy_from->get_id());
    the_copy->health = copy_from->health;
    Soldier & ret = *the_copy;
    return ret;
}

