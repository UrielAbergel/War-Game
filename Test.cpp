
#include "doctest.h"
#include <cassert>
#include <sys/types.h>
#include "Game.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"
using namespace WarGame;


WarGame::Board Create_Attak_Borad()
{
    WarGame::Board borad_num_1 (6,6);
    borad_num_1[{0,0}] = new FootSoldier(1);
    borad_num_1[{0,1}] = new FootSoldier(2);
    borad_num_1[{0,2}] = new SniperCommander(1);
    borad_num_1[{0,3}] = new FootCommander(2);
    borad_num_1[{0,5}] = new ParamedicCommander(1);
    borad_num_1[{0,4}] = new ParamedicCommander(1);
    borad_num_1[{1,4}] = new FootCommander(2);


    return borad_num_1;
}


WarGame::Board CreateBoradNum1()
{
    WarGame::Board borad_num_1 (6,6);
    borad_num_1[{0,0}] = new FootSoldier(1);
    borad_num_1[{5,1}] = new FootSoldier(2);
    borad_num_1[{0,2}] = new SniperCommander(1);
    borad_num_1[{5,0}] = new FootCommander(2);
    borad_num_1[{5,2}] = new Paramedic(2);
    borad_num_1[{0,3}] = new Paramedic(1);
    borad_num_1[{0,4}] = new FootCommander(1);
    borad_num_1[{0,5}] = new SniperCommander(1);
    borad_num_1[{1,0}] = new Sniper(1);
    borad_num_1[{5,3}] = new Sniper(2);
    borad_num_1[{1,1}] = new ParamedicCommander(1);
    borad_num_1[{5,4}] = new ParamedicCommander(2);
    return borad_num_1;
}


WarGame::Board Create_Commander_Borad()
{
    WarGame::Board borad_num_2 (6,6);
    borad_num_2[{0,0}] = new FootSoldier(1);
    borad_num_2[{5,0}] = new FootSoldier(2);
    borad_num_2[{0,1}] = new SniperCommander(1);
    borad_num_2[{5,1}] = new FootCommander(2);
    borad_num_2[{5,2}] = new Paramedic(2);
    borad_num_2[{0,2}] = new Paramedic(1);
    borad_num_2[{0,3}] = new FootCommander(1);
    borad_num_2[{0,4}] = new SniperCommander(1);
    borad_num_2[{0,5}] = new Sniper(1);
    borad_num_2[{5,3}] = new Sniper(2);
    borad_num_2[{0,5}] = new ParamedicCommander(1);
    borad_num_2[{5,4}] = new ParamedicCommander(2);
    return borad_num_2;
}
TEST_CASE("ADD SOLIDER AND COMMANDER GAME CHECK")
{
 WarGame::Board false_case(8,8);
     CHECK_FALSE(false_case.has_soldiers(2));
     CHECK_FALSE(false_case.has_soldiers(1));
     CHECK_FALSE(false_case.has_soldiers(3));

 WarGame::Board CHECK_1 = CreateBoradNum1();
 WarGame::Board CHECK_2 = Create_Commander_Borad();

    CHECK(typeid(CHECK_1[{0,0}]) == typeid(FootSoldier));
    CHECK(typeid(CHECK_1[{5,1}]) == typeid(FootSoldier));
    CHECK(typeid(CHECK_1[{5,0}]) == typeid(FootCommander));
    CHECK(typeid(CHECK_1[{0,3}]) == typeid(Paramedic));
    CHECK(typeid(CHECK_1[{1,0}]) == typeid(Sniper));
    CHECK(typeid(CHECK_1[{5,4}]) == typeid(ParamedicCommander));
    CHECK(typeid(CHECK_2[{0,5}]) == typeid(Sniper));
    CHECK(typeid(CHECK_2[{5,2}]) == typeid(Paramedic));
    CHECK(typeid(CHECK_2[{5,4}]) == typeid(ParamedicCommander));
    CHECK_THROWS(CHECK_2.has_soldiers(3));
    CHECK_THROWS(CHECK_2.has_soldiers(5));
    CHECK(CHECK_2.has_soldiers(2));
    CHECK(CHECK_1.has_soldiers(2));
    CHECK(CHECK_2.has_soldiers(1));
    CHECK(CHECK_1.has_soldiers(1));

}



TEST_CASE("Moves")
{

    WarGame::Board CHECK_1 = CreateBoradNum1();
    WarGame::Board CHECK_2 = Create_Commander_Borad();



    CHECK(typeid(CHECK_1[{0,0}]) == typeid(FootSoldier));
    CHECK_1.move(1,{0,0},WarGame::Board::Up);
    CHECK(typeid(CHECK_1[{1,0}]) == typeid(FootSoldier)) ;
    CHECK(typeid(CHECK_1[{0,0}]) == nullptr) ;

    CHECK(typeid(CHECK_1[{5,1}]) == typeid(FootSoldier));
    CHECK_1.move(1,{5,1},WarGame::Board::Down);
    CHECK(typeid(CHECK_1[{4,1}]) == typeid(FootSoldier)) ;
    CHECK(typeid(CHECK_1[{5,1}]) == nullptr) ;

    CHECK(typeid(CHECK_1[{1,1}]) == typeid(ParamedicCommander));
    CHECK_1.move(1,{1,1},WarGame::Board::Left);
    CHECK(typeid(CHECK_1[{1,0}]) == typeid(ParamedicCommander)) ;
    CHECK(typeid(CHECK_1[{1,1}]) == nullptr) ;

    CHECK(typeid(CHECK_1[{1,0}]) == typeid(ParamedicCommander));
    CHECK_1.move(1,{1,0},WarGame::Board::Right);
    CHECK(typeid(CHECK_1[{1,1}]) == typeid(ParamedicCommander)) ;
    CHECK(typeid(CHECK_1[{0,0}]) == nullptr) ;

    CHECK(typeid(CHECK_1[{1,1}]) == typeid(ParamedicCommander));
    CHECK_1.move(1,{1,1},WarGame::Board::Up);
    CHECK(typeid(CHECK_1[{2,1}]) == typeid(ParamedicCommander)) ;
    CHECK(typeid(CHECK_1[{1,1}]) == nullptr) ;


}


TEST_CASE("ATTAK AND HEAL CASE")
{

    WarGame::Board CHECK_1 = Create_Attak_Borad();


            CHECK(typeid(CHECK_1[{0,0}]) == typeid(FootSoldier));
            CHECK(typeid(CHECK_1[{0,1}]) == typeid(FootSoldier)) ;
            CHECK(CHECK_1[{0,0}]->health == 100);
            CHECK(CHECK_1[{0,1}]->health == 100);
    CHECK_1[{0,0}]->hit();
            CHECK(CHECK_1[{0,1}]->health == 90) ;

            CHECK(typeid(CHECK_1[{0,1}]) == typeid(FootSoldier));
            CHECK(typeid(CHECK_1[{0,0}]) == typeid(FootSoldier)) ;
            CHECK(CHECK_1[{0,0}]->health == 100);
            CHECK(CHECK_1[{0,1}]->health == 90);
    CHECK_1[{0,1}]->hit();
            CHECK(CHECK_1[{0,0}]->health == 90) ;

            CHECK(typeid(CHECK_1[{0,2}]) == typeid(SniperCommander));
            CHECK(typeid(CHECK_1[{0,1}]) == typeid(FootSoldier)) ;
            CHECK(CHECK_1[{0,2}]->health == 120);
            CHECK(CHECK_1[{0,1}]->health == 90);
    CHECK_1[{0,2}]->hit();
            CHECK(CHECK_1[{0,1}] == nullptr) ;

            CHECK(typeid(CHECK_1[{0,5}]) == typeid(ParamedicCommander));
            CHECK(typeid(CHECK_1[{1,4}]) == typeid(FootCommander)) ;
            CHECK(CHECK_1[{0,5}]->health == 200);
            CHECK(CHECK_1[{1,4}]->health == 150);
    CHECK_1[{1,4}]->hit();
            CHECK(CHECK_1[{0,5}]->health == 50) ;
    CHECK_1[{0,5}]->hit();
            CHECK(CHECK_1[{0,5}]->health == 150) ;

            CHECK(typeid(CHECK_1[{0,5}]) == typeid(ParamedicCommander));
            CHECK(typeid(CHECK_1[{1,4}]) == typeid(FootCommander)) ;
            CHECK(CHECK_1[{0,5}]->health == 150);
            CHECK(CHECK_1[{1,4}]->health == 150);
    CHECK_1[{1,4}]->hit();
            CHECK(CHECK_1[{0,5}] == nullptr) ;


}




