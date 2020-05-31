//
// Created by uriel on 20/05/2020.
//

#include "Board.hpp"
#include <cfloat>
#include "cmath"

//int static arr[20] ;
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
    std::pair<int,int> dest = return_dest_loc(source, direction);

    if(board[source.first][source.second] == nullptr)
    {
        throw std::invalid_argument("There is no player in the source location");
    }
    if(board[dest.first][dest.second] != nullptr)
    {
        throw std::invalid_argument("You can`t move this way, its not clear");
    }
    if(board[source.first][source.second]->get_id() != player_number)
    {
        throw std::invalid_argument("The player in the source location do not belong to you!");
    }
    if(dest.first > 0 && dest.first < rows && dest.second > 0 && dest.second < cols) // destination in the board boundaries, good to go
    {
        board[dest.first][dest.second] = board[source.first][source.second]->copy(); // Copy
        delete board[source.first][source.second];
    }
    else                                            // destination is out boundaries
    {
        std::cout << "destination is out boundaries" << std::endl;
        return;
    }

    this->board[dest.first][dest.second]->hit(this->board, this->rows, this->cols);   // preform attack
}

std::pair<int,int> WarGame::Board::return_dest_loc(std::pair<int,int> source, MoveDIR direction)
{
    if (direction == 0)                             // Up
    {
        return {source.first + 1, source.second};
    }
    else if(direction == 1)                         // Down
    {
        return {source.first - 1, source.second};
    }
    else if(direction == 2)                         // Right
    {
        return {source.first, source.second + 1};
    }
    else                                            // Left
    {
        return {source.first, source.second - 1};
    }

}

Soldier*& WarGame::Board::operator[](std::pair<int,int> location)
{
    return this->board[location.first][location.second];
}

Soldier* WarGame::Board::operator[](std::pair<int,int> location) const
{
    return this->board[location.first][location.second];
}


