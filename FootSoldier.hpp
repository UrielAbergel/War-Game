//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_FOOTSOLDIER_HPP
#define UNTITLED_FOOTSOLDIER_HPP

#include "Solider.hpp"

class FootSoldier : public Solider
{
private:
    int player_id;
public:
    FootSoldier(int player_id)
    {
        this->player_id = player_id;
    }
    int hit(Solider & solider);
    Point get_loc();
    int get_id();
};


#endif //UNTITLED_FOOTSOLDIER_HPP
