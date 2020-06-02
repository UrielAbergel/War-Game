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

    virtual void return_to_max_health() = 0;
    virtual int hit(std::vector<std::vector<Soldier*>> board, int rows, int cols) = 0;
    virtual std::pair<int,int> get_loc() = 0;
    virtual int get_id() = 0;
    virtual std::pair<int, int> find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board) = 0;
};


#endif //UNTITLED_SOLIDER_HPP
