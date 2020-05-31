//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_PARAMEDICCOMMANDER_PP
#define UNTITLED_PARAMEDICCOMMANDER_PP

#include "Soldier.hpp"

#define MAX_HEALTH 200

class ParamedicCommander : public Soldier {
private:
    int player_id;
public:
    explicit ParamedicCommander(int player_id)
    {
        this->player_id = player_id;
        this->health = MAX_HEALTH;
    }

    ~ParamedicCommander()
    {
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> board, int rows, int cols);
    std::pair<int,int> get_loc();
    int get_id();
    Soldier& operator=(Soldier* copy_from);
    void return_to_max_health();
    std::pair<int, int> find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board);


};


#endif //UNTITLED_PARAMEDICCOMMANDER_PP
