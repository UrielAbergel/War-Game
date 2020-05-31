//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_SOLIDER_HPP
#define UNTITLED_SOLIDER_HPP

#include <utility>
#include <iostream>
#include <vector>
#include <cfloat>
#include "cmath"

class Soldier
{
public:
    int health;
    std::pair<int,int> location;
    static int num_of_foot_soliders;
    static int num_of_paramedics;
    static int num_of_snipers;

    virtual int hit(std::vector<std::vector<Soldier*>> board, int rows, int cols) = 0;
    virtual std::pair<int,int> get_loc() = 0;
    virtual int get_id() = 0;
    virtual Soldier& operator=(Soldier* copy_from) = 0;
    virtual std::pair<int, int> find_ememy_to_atack(std::vector<std::vector<Soldier*>> board) = 0;

    virtual ~Soldier()
    {
        free(this);
    }

//    {
//        std::pair<int, int> ans;
//        double min_dis = DBL_MAX;
//        for (int i = 0; i < this->rows; ++i)
//        {
//            for (int j = 0; j < this->cols; ++j)
//            {
//                if (board[i][j]->get_id()!=player_id)
//                {
//                    if(dist(dest, board[i][j]->get_loc()) < min_dis)
//                    {
//                        ans = board[i][j]->get_loc();
//                    }
//                }
//            }
//        }
//        return ans;
   }


#endif //UNTITLED_SOLIDER_HPP
