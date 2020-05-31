//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_PARAMEDIC_HPP
#define UNTITLED_PARAMEDIC_HPP

#include "Soldier.hpp"

#define MAX_HEALTH 100

class Paramedic : public Soldier {
private:
    int player_id;
public:
    explicit Paramedic(int player_id)
    {
        this->player_id = player_id;
        this->health = MAX_HEALTH;
    }

    ~Paramedic()
    {
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> board, int rows, int cols);
    std::pair<int,int> get_loc();
    int get_id();
    Soldier& operator=(Soldier* copy_from);
    std::pair<int, int> find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board);
    void return_to_max_health();

};


#endif //UNTITLED_PARAMEDIC_HPP
