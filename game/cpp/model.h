#ifndef PAKMEN_MODEL_H
#define PAKMEN_MODEL_H

namespace Pakmen {

  static const int WALL_CELL = -1;
  static const int EATABLE_CELL = 0;
  static const int USER_CELL = 1;
  static const int GHOST_CELL = 2;
  static const int DUMMIE_GHOST_CELL = 3;
  static const int CHERRY_CELL = 4;
  static const int EMPTY_CELL = 5;
  static const int POWER_CELL = 6;
  static const int POWERED_TIME = 10;

  static const int BOARD_WIDTH = 13;
  static const int BOARD_HEIGHT = 14;

/**
 * Represents the game board and current overall state of the game.
 */
  class GameBoard {
  public:
    int board[BOARD_HEIGHT][BOARD_WIDTH] = {
            {WALL_CELL, WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL},
            {WALL_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, EATABLE_CELL, DUMMIE_GHOST_CELL,   WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    GHOST_CELL,   EATABLE_CELL, EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, WALL_CELL,    WALL_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    WALL_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, WALL_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, POWER_CELL,   WALL_CELL,    EATABLE_CELL, WALL_CELL,    USER_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL,    POWER_CELL,   EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, WALL_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL,    WALL_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, WALL_CELL,    WALL_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    WALL_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, WALL_CELL,    CHERRY_CELL,  WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    CHERRY_CELL,  WALL_CELL,    EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, WALL_CELL},
            {WALL_CELL, WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL},
    };
    int temp_dummie = Pakmen::EMPTY_CELL;
    int temp_ghost = Pakmen::EMPTY_CELL;
  };

  extern int powered;
} // namespace

#endif // PAKMEN_MODEL_H

