//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_FOOTCOMMANDER_HPP
#define UNTITLED_FOOTCOMMANDER_HPP

#include "Soldier.hpp"

#define MAX_HEALTH 150

class FootCommander : public Soldier{
private:
    int player_id;
public:
    FootCommander(int player_id)
    {
        this->player_id = player_id;
        this->health = MAX_HEALTH;
    }

    ~FootCommander() override
    {
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> board, int rows, int cols);
    std::pair<int,int> get_loc();
    int get_id();
    Soldier& operator=(Soldier* copy_from);
};

int Soldier::num_of_foot_soliders = 0;

#endif //UNTITLED_FOOTCOMMANDER_HPP
