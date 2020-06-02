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

    explicit FootCommander(int player_id)
    {
        this->player_id = player_id;
        this->health = MAX_HEALTH;
    }

    FootCommander(FootCommander& to_copy)
    {
        this->player_id = to_copy.player_id;
        this->health = to_copy.health;
        this->location = to_copy.location;
    }

    ~FootCommander()
    {
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> board, int rows, int cols);
    std::pair<int, int> find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board);
    std::pair<int,int> get_loc();
    int get_id();
    Soldier& operator=(Soldier* copy_from);
    void return_to_max_health();
};


#endif //UNTITLED_FOOTCOMMANDER_HPP
