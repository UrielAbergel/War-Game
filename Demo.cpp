/**
  Demo for the war-game exercise.

  @author Oz Levi
  @since  2020-05
**/

#include <iostream>
#include "DemoGame.hpp"
#include "FootSoldier.hpp"
#include "ParamedicCommander.hpp"
#include "Paramedic.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include "FootCommander.hpp"

using namespace std;

//WarGame::Board fillBoard(){
//    WarGame::Board p(6,6);
//    p[{0,0}]= new FootSoldier(1);
//    p[{3,3}]= new FootSoldier(2);
//    p[{5,0}]= new FootCommander(1);
//    p[{3,5}]= new FootCommander(2);
//    p[{0,1}]= new Sniper(1);
//    p[{3,0}]= new Sniper(2);
//    p[{2,1}]= new SniperCommander(1);
//    p[{0,3}]= new SniperCommander(2);
//    p[{5,1}]= new Paramedic(1);
//    p[{1,3}]= new Paramedic(2);
//    p[{4,5}]= new ParamedicCommander(1);
//    p[{4,0}]= new ParamedicCommander(2);
//    return p;
//}
//int main()
//{
//    WarGame::Board board(8,8);
////    CHECK(!board.has_soldiers(1));
//    board[{0,1}] = new FootSoldier(1); //player1 soldier1 - 100
//    board[{0,0}] = new FootCommander(1); //player1 soldier2 - 150
////    CHECK(board.has_soldiers(1));
//
////    CHECK(!board.has_soldiers(2));
//    board[{7,0}] = new FootCommander(2); //player2 soldier1 - 100
//    board[{7,1}] = new FootSoldier(2); //player2 soldier2 - 150
//
////    CHECK(board.has_soldiers(2));
//
//    board.move(1,{0,1},WarGame::Board::MoveDIR::Up); // player2 soldier2 - 90
////    CHECK_THROWS(board.move(1,{0,1},WarGame::Board::MoveDIR::Up));
//    board.move(1,{1,1},WarGame::Board::MoveDIR::Up); // player2 soldier2 - 80
////    CHECK_THROWS(board.move(2,{7,0},WarGame::Board::MoveDIR::Left));
//    board.move(2,{7,0},WarGame::Board::MoveDIR::Down); //player1 soldier1 - 90
//
//    board.move(1,{0,0},WarGame::Board::MoveDIR::Up); // player2 soldier1 - 130, player2 soldier2 - 70
//
//    board.move(1,{1,0},WarGame::Board::MoveDIR::Up); // player2 soldier1 - 110, player2 soldier2 - 60
//    board.has_soldiers(2);
//    board.has_soldiers(1);
//    board.move(1,{2,0},WarGame::Board::MoveDIR::Down); // player2 soldier1 - 90, player2 soldier2 - 50
//    board.has_soldiers(2);
//    board.has_soldiers(1);
//
//    board.move(1,{1,0},WarGame::Board::MoveDIR::Up); // player2 soldier1 - 70, player2 soldier2 - 40
//    board.has_soldiers(2);
//    board.has_soldiers(1);
//    board.move(1,{2,0},WarGame::Board::MoveDIR::Down); // player2 soldier1 - 50, player2 soldier2 - 30
//    board.has_soldiers(2);
//    board.has_soldiers(1);
//
//    board.move(1,{1,0},WarGame::Board::MoveDIR::Up);// player2 soldier1 - 30, player2 soldier2 - 20
//    board.has_soldiers(2);
//    board.has_soldiers(1);
//    board.move(1,{2,0},WarGame::Board::MoveDIR::Down); // player2 soldier1 - 10, player2 soldier2 - 10
//    board.has_soldiers(2);
//    board.has_soldiers(1);
//
//    board.move(1,{1,0},WarGame::Board::MoveDIR::Up);// player2 soldier1 - 0, player2 soldier2 - 0
//
//    board.has_soldiers(1);
//    board.move(1,{2,0},WarGame::Board::MoveDIR::Down); // i think youve done
//    board.has_soldiers(1);
//    !board.has_soldiers(2);
//    return 0;
//}
