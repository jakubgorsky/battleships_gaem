//
// Created by jack on 21/03/2022.
//

#ifndef BATTLESHIPS_GAEM_PLAYERBOARD_H
#define BATTLESHIPS_GAEM_PLAYERBOARD_H

#include "Ship.h"

const int BOARD_SIZE = 10;

enum FieldStatus {
    Default = -1,
    Free = 1,
    Occupied = 2,
    Missed = 3,
    Hit =  4,
    Unavailable = 0
};

class PlayerBoard {
private:
    FieldStatus Board[BOARD_SIZE][BOARD_SIZE];
public:
    FieldStatus getFieldStatus(int x, int y);
    //DEBUG ONLY
    void setFieldStatus(int x, int y, FieldStatus status);
    FieldStatus shootField(int x, int y);
    void placeShip(int x, int y, int rotation, const ShipType& shipType);
};

#endif //BATTLESHIPS_GAEM_PLAYERBOARD_H
