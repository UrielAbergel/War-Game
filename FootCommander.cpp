//
// Created by uriel on 20/05/2020.
//
#pragma once
#include "FootCommander.hpp"
#include "FootSoldier.hpp"

#define DAMAGE 20

int FootCommander::hit(std::vector<std::vector<Soldier*>> board, int rows, int cols)
{
    std::pair<int, int> enemy_to_attack = find_solider_to_active_the_skill(board);
    board[enemy_to_attack.first][enemy_to_attack.second]->health -= DAMAGE;

    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board.at(0).size(); ++j)
        {
            if (board[i][j] != nullptr && board[i][j]->get_id() == player_id)
            {
              if (typeid(board[i][j]) == typeid(FootSoldier))
              {
                  board[i][j]->hit(board ,rows, cols);
              }
            }
        }
    }
    if(board[enemy_to_attack.first][enemy_to_attack.second]->health <= 0)
    {
        delete board[enemy_to_attack.first][enemy_to_attack.second];
        return 1;                                        // dead
    }
    return 0;                                            // alive

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
std::pair<int, int> FootCommander::find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board)
{
    std::pair<int, int> ans;
    double min_dis = DBL_MAX;
    double _distance;
    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board.at(0).size(); ++j)
        {
            if (board[i][j] != nullptr && board[i][j]->get_id() != player_id)
            {
                _distance = FootSoldier::dist(this->get_loc(), board[i][j]->get_loc());
                if( _distance < min_dis)
                {
                    ans = board[i][j]->get_loc();
                    min_dis = _distance;
                }
            }
        }
    }
    return ans;
}

void FootCommander::return_to_max_health()
{
    this->health = MAX_HEALTH;
}


