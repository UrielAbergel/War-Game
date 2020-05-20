//
// Created by uriel on 20/05/2020.
//

#include "Board.hpp"

int static arr[20] ;
bool WarGame::Board::has_soldiers(uint player_number) const
{
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->cols; j ++)
        {
            if(this->board[i][j] != nullptr && this->board[i][j]->get_id() == player_number) return true;
        }
    }
    return false;
}
void WarGame::Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction)
{

}

Solider*& WarGame::Board::operator[](std::pair<int,int> location)
{
        return this->board[location.first][location.second];
}