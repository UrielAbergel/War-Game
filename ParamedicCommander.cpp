//
// Created by uriel on 20/05/2020.
//
#include "ParamedicCommander.hpp"
int ParamedicCommander::hit(std::vector<std::vector<Soldier*>> board, int rows, int cols)
{
    return 0;
}
std::pair<int,int> ParamedicCommander::get_loc()
{
    return {this->location.first, this->location.second};
}
int ParamedicCommander::get_id()
{
    return this->player_id;
}

Soldier &ParamedicCommander::operator=(Soldier *copy_from) {

    Soldier* the_copy = new ParamedicCommander(copy_from->get_id());
    the_copy->health = copy_from->health;
    Soldier & ret = *the_copy;
    return ret;
}