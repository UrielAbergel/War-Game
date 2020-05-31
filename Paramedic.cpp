//
// Created by uriel on 20/05/2020.
//

#include "Paramedic.hpp"

int Paramedic::hit(std::vector<std::vector<Soldier*>> board, int rows, int cols)
{
    return 0;
}

std::pair<int,int> Paramedic::get_loc()
{
    return {this->location.first, this->location.second};
}

int Paramedic::get_id()
{
    return this->player_id;
}

Soldier &Paramedic::operator=(Soldier *copy_from) {
    Soldier* the_copy = new Paramedic(copy_from->get_id());
    the_copy->health = copy_from->health;
    Soldier & ret = *the_copy;
    return ret;
}
