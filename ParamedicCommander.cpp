//
// Created by uriel on 20/05/2020.
//
#pragma once
#include "ParamedicCommander.hpp"
#include "Paramedic.hpp"

int ParamedicCommander::hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols)
{
    find_solider_to_active_the_skill(board);
    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board.at(0).size(); ++j)
        {
            if (board[i][j] != nullptr && board[i][j]->get_id() == player_id)
            {
                if (dynamic_cast<Paramedic*>(board[i][j]))
                {
                    board[i][j]->hit(board ,rows, cols);
                }
            }
        }
    }
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

void ParamedicCommander::return_to_max_health()
{
    this->health = MAX_HEALTH;
}

std::pair<int, int> ParamedicCommander::find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board)
{

    for (int i = this->get_loc().first; i < this->get_loc().first+1; ++i)
    {
        for (int j = this->get_loc().second; j < this->get_loc().second+1; ++j)
        {

            if (board[i][j] != nullptr && i != j && board[i][j]->get_id() == player_id)
            {
                board[i][j]->return_to_max_health();
            }
        }
    }
    return {0,0};
}
