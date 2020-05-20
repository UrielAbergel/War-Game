//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_SNIPER_HPP
#define UNTITLED_SNIPER_HPP

#include "Solider.hpp"

class Sniper : public Solider
{
private:
    int player_id;
public:
    Sniper(int player_id)
    {
        this->player_id = player_id;
    }

    int hit(Solider & solider);
    Point get_loc();
    int get_id();
};


#endif //UNTITLED_SNIPER_HPP
