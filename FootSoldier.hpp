//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_FOOTSOLDIER_HPP
#define UNTITLED_FOOTSOLDIER_HPP

#include "Soldier.hpp"
#include "Board.hpp"
#define MAX_HEALTH 100
#define HIT_DAMAGE 10

class FootSoldier : public Soldier
{
private:
    int player_id;
public:
    FootSoldier(int player_id)
    {
        this->player_id = player_id;
        this->health = MAX_HEALTH;
        Soldier::num_of_foot_soliders++;

    }

    ~FootSoldier() override
    {
        Soldier::num_of_foot_soliders--;
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> board, int rows, int cols);
    std::pair<int,int> get_loc();
    int get_id();
    Soldier& operator=(Soldier* copy_from);
};


#endif //UNTITLED_FOOTSOLDIER_HPP
