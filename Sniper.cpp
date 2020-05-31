//
// Created by uriel on 20/05/2020.
//

#include "Sniper.hpp"

int Sniper::hit(std::vector<std::vector<Soldier*>> board, int rows, int cols)
{
    return 0;
}
std::pair<int,int> Sniper::get_loc()
{
    return {this->location.first, this->location.second};
}
int Sniper::get_id()
{
    return this->player_id;
}

Soldier &Sniper::operator=(Soldier *copy_from) {
    Soldier* the_copy = new Sniper(copy_from->get_id());
    the_copy->health = copy_from->health;
    Soldier & ret = *the_copy;
    return ret;
}
