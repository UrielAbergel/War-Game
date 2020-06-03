//
// Created by uriel on 20/05/2020.
//
#pragma once
#include "FootSoldier.hpp"

#define DAMAGE 10

int FootSoldier::hit(std::vector<std::vector<Soldier*>> board, int rows, int cols)
{
    std::pair<int, int> enemy_to_attack = find_solider_to_active_the_skill(board);
    board[enemy_to_attack.first][enemy_to_attack.second]->health -= DAMAGE;
    if(board[enemy_to_attack.first][enemy_to_attack.second]->health <= 0)
    {
        delete board[enemy_to_attack.first][enemy_to_attack.second];
        return 1;                                        // dead
    }
    return 0;                                            // alive
}


std::pair<int,int> FootSoldier::get_loc()
{
    return {this->location.first,this->location.second};
}

int FootSoldier::get_id()
{
    return this->player_id;
}


Soldier& FootSoldier::copy(){

    FootSoldier* temp = new FootSoldier(this->get_id());
    temp->health = this->health;
    FootSoldier& temp1 = *temp;
    return temp1;
}

std::pair<int, int> FootSoldier::find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board) {
    std::pair<int, int> ans;
    double min_dis = DBL_MAX;
    double _distance;
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board.at(0).size(); ++j) {
            if (board[i][j] != nullptr && board[i][j]->get_id() != player_id && board[i][j]->get_id() != 0 ) {
                _distance = FootSoldier::dist(this->get_loc(), board[i][j]->get_loc());
                if (_distance < min_dis) {
                    ans = {i,j};
                    min_dis = _distance;
                }
            }
        }
    }
    return ans;
}
double FootSoldier::dist(std::pair<int, int> from, std::pair<int, int> to)
{
    return sqrt(pow(from.first-to.first,2) + pow(from.second - to.second,2));
}

void FootSoldier::return_to_max_health()
{
    this->health = MAX_HEALTH;
}

