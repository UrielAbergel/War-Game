//
// Created by uriel on 20/05/2020.
//
#pragma once
#include "SniperCommander.hpp"
#include "Sniper.hpp"

#define DAMAGE 100


int SniperCommander::hit(std::vector<std::vector<Soldier*>> board, int rows, int cols)
{
    std::pair<int,int> to_attack = find_solider_to_active_the_skill(board);
    board[to_attack.first][to_attack.second]->health -= DAMAGE;

    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board.at(0).size(); ++j)
        {
            if (board[i][j] != nullptr && board[i][j]->get_id() == player_id)
            {
                if (typeid(board[i][j]) == typeid(Sniper))
                {
                    board[i][j]->hit(board ,rows, cols);
                }
            }
        }
    }

    if(board[to_attack.first][to_attack.second]->health <= 0)
    {
        delete board[to_attack.first][to_attack.second];
        return 1;                                        // dead
    }
    return 0;                                            // alive
}

std::pair<int,int> SniperCommander::get_loc()
{
    return {this->location.first, this->location.second};
}

int SniperCommander::get_id()
{
    return this->player_id;
}

Soldier &SniperCommander::operator=(Soldier *copy_from) {
    Soldier* the_copy = new SniperCommander(copy_from->get_id());
    the_copy->health = copy_from->health;
    Soldier & ret = *the_copy;
    return ret;
}

std::pair<int, int> SniperCommander::find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board)
{
    int max = 0;
    std::pair<int,int> ans ;

    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board.at(0).size(); ++j)
        {
            if (board[i][j] != nullptr && board[i][j]->get_id()!=player_id)
            {
                if(board[i][j]->health > max)
                {
                    ans = board[i][j]->get_loc();
                    max = board[i][j]->health;
                }
            }
        }
    }
    return ans;
}

void SniperCommander::return_to_max_health()
{
    this->health = MAX_HEALTH;
}


