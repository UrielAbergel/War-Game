//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_FOOTCOMMANDER_HPP
#define UNTITLED_FOOTCOMMANDER_HPP

#include "Solider.hpp"

class FootCommander : public Solider{
private:
    int player_id;
public:
    FootCommander(int player_id)
    {
        this->player_id = player_id;
    }

    int hit(Solider & solider);
    Point get_loc();
    int get_id();
};


#endif //UNTITLED_FOOTCOMMANDER_HPP
