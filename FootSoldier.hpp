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
    }

    ~FootSoldier()
    {
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> board, int rows, int cols);
    std::pair<int,int> get_loc();
    int get_id();
    Soldier& copy();
    std::pair<int, int> find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board);
    static double dist(std::pair<int, int> from, std::pair<int, int> to);
    void return_to_max_health();




};


#endif //UNTITLED_FOOTSOLDIER_HPP
