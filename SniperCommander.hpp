//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_SNIPERCOMMANDER_HPP
#define UNTITLED_SNIPERCOMMANDER_HPP

#include "Soldier.hpp"

#define MAX_HEALTH 120
#define HIT_DAMAGE 100

class SniperCommander : public Soldier{
private:
    int player_id;
public:
    SniperCommander(int player_id)
    {
        this->player_id = player_id;
        this->health = MAX_HEALTH;
    }

    int hit(std::vector<std::vector<Soldier*>> board, int rows, int cols);
    std::pair<int,int> get_loc();
    int get_id();
    Soldier& operator=(Soldier* copy_from);
};


#endif //UNTITLED_SNIPERCOMMANDER_HPP
