///**
// * This is a game that demonstrates how to use the Board class.
// * You can modify it and build your own games.
// *
// * @author Oz Levi
// * @author Erel Segal-Halevi
// * @since  2020-05
// */
//
//
//#include "FootSoldier.cpp"
//#include "FootCommander.cpp"
//#include <cassert>
//#include "Board.cpp"
//#include "Sniper.cpp"
//#include "SniperCommander.cpp"
//#include "Paramedic.cpp"
//#include "ParamedicCommander.cpp"
//
//namespace WarGame {
//    class DemoGame {
//    private:
//        const int numRows = 8;
//        const int numCols = 8;
//        Board board;
//    public:
//
//        /**
//        * The constructor initilizes the board and places the soldiers.
//        */
//        DemoGame();
//
//        /**
//         * This function runs a sample play of the game and returns the winner (1 or 2, or 0 in case of tie).
//         */
//        uint play();
//
//        /**
//        * The destructor deletes the soldiers from the board.
//        */
//        ~DemoGame();
//    };
//}
//
//namespace WarGame {
//
//    DemoGame::DemoGame() : board(numRows, numCols) {
////        CHECK(!board.has_soldiers(1));
//        board[{0,0}] = new FootSoldier(1);//player 1 soldier1
////        CHECK(board.has_soldiers(1));
//        board[{0,1}] = new FootCommander(1);//player 1 soldier2
////        CHECK(board.has_soldiers(1));
//        board[{0,2}] = new Sniper(1);//player 1 soldier3
////        CHECK(board.has_soldiers(1));
//        board[{0,3}] = new SniperCommander(1);//player 1 soldier4
////        CHECK(board.has_soldiers(1));
//        board[{0,4}] = new Paramedic(1);//player 1 soldier5
//        board[{0,5}] = new ParamedicCommander(1);//player 1 soldier6
////        CHECK(board.has_soldiers(1));
////        CHECK(!board.has_soldiers(2));
//        board[{7,0}] = new FootSoldier(2);//player 2 soldier1
//        board[{7,1}] = new FootCommander(2);//player 2 soldier2
//        board[{7,2}] = new Sniper(2);//player 2 soldier3
//        board[{7,3}] = new SniperCommander(2);//player 2 soldier4
//        board[{7,4}] = new Paramedic(2);//player 2 soldier5
//        board[{7,5}] = new ParamedicCommander(2);//player 2 soldier6
//
//    }
//
//    uint DemoGame::play() {
//       		//consider using for.....
////	    CHECK(board.has_soldiers(2));
//	    board.move(1,{0,0},WarGame::Board::MoveDIR::Up); //player2 soldier1 - 90
////	    CHECK(board.has_soldiers(2));
//	    board.move(1,{0,1},WarGame::Board::MoveDIR::Up);//player2 soldier2 - 130, player 2 soldier1 - 80
////	    CHECK(board.has_soldiers(2));
//	    board.move(1,{0,2},WarGame::Board::MoveDIR::Up);//player2 soldier6 - 150
////	    CHECK(board.has_soldiers(2));
//	    board.move(1,{0,3},WarGame::Board::MoveDIR::Up);//player2 soldier6 - 50, player 2 soldier2 80 //need to define that commander shoots first
////	    CHECK(board.has_soldiers(2));
//	    board.move(1,{0,4},WarGame::Board::MoveDIR::Up);//player1 soldier4 - 120 //need to define that curing id done after the step/move
////	    CHECK(board.has_soldiers(2));
//	    board.move(1,{0,5},WarGame::Board::MoveDIR::Up); //player1 soldier5 - 100, player 1 soldier4 - 120, player 1 soldier6 - 200
////	    CHECK(board.has_soldiers(2));
//
//
//	    //sniper 1 will kill them all
//	    board.move(1,{1,3},WarGame::Board::MoveDIR::Down); //player2 soldier6 - 100, player 2 soldier2 80
////		CHECK(board.has_soldiers(2));
//	    board.move(1,{0,3},WarGame::Board::MoveDIR::Up); //player2 soldier4 - 20, player2 soldier3 - 50 //need to define to check the closes when there are equalh healh points
////		CHECK(board.has_soldiers(2));
//	    board.move(1,{1,3},WarGame::Board::MoveDIR::Down); //player2 soldier5 - 0, player2 soldier6 - 50
////	    CHECK(board.has_soldiers(2));
//	    board.move(1,{0,3},WarGame::Board::MoveDIR::Up); //player2 soldier1 - 0, player2 soldier2 - 30
//		//just to be Sure all is dead
//
//		board.move(1,{1,2},WarGame::Board::MoveDIR::Down); //player2 soldier3 - 0, player2 soldier 6 - 20/10
//		board.move(1,{0,2},WarGame::Board::MoveDIR::Up); //player2 soldier3 - 0, player2 soldier 6 - 0
//		board.move(1,{1,2},WarGame::Board::MoveDIR::Down); //player2 soldier3 - 0, player2 soldier 6 - 0
//		board.move(1,{0,2},WarGame::Board::MoveDIR::Up); //player2 soldier3 - 0, player2 soldier 6 - 0
//
//
//        // If no player won, return "tie":
//        return 0;
//    }
//
//    DemoGame::~DemoGame() {
//        for (int iRow = 0; iRow < numRows; ++iRow) {
//            for (int iCol = 0; iCol < numCols; ++iCol) {
//                Soldier *soldier = board[{iRow, iCol}];
//                if (soldier)
//                    delete soldier;
//            }
//        }
//    }
//
//}
//
