//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_PARAMEDIC_HPP
#define UNTITLED_PARAMEDIC_HPP
#include "Solider.hpp"

class Paramedic : public Solider {
private:
    int player_id;
public:
    Paramedic(int player_id)
    {
        this->player_id = player_id;
    }

    int hit();
    Point get_loc();
    int get_id();
};


#endif //UNTITLED_PARAMEDIC_HPP
