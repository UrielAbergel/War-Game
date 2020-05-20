//
// Created by uriel on 20/05/2020.
//

#ifndef UNTITLED_SOLIDER_HPP
#define UNTITLED_SOLIDER_HPP


class Point
{
public:
    int x,y ;
    Point(int x, int y)
    {
    this->x = x;
    this->y = y;
    }
};


class Solider
{
public:
    int health;
    Point * location;

    virtual int hit(Solider & solider) = 0;
    virtual Point get_loc() = 0;
    virtual int get_id() = 0;
};


#endif //UNTITLED_SOLIDER_HPP
