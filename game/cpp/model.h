#ifndef PAKMEN_MODEL_H
#define PAKMEN_MODEL_H

namespace Pakmen {

  static const int WALL_CELL = -1;
  static const int EATABLE_CELL = 0;
  static const int USER_CELL = 1;
  static const int GHOST_CELL = 2;
  static const int CHERRY_CELL = 3;
  static const int EMPTY_CELL = 4;
  static const int POWER_CELL = 5;
  static const int POWERED_TIME = 10;

  static const int BOARD_WIDTH = 7;
  static const int BOARD_HEIGHT = 8;

/**
 * Represents the game board and current overall state of the game.
 */
  class GameBoard {
  public:
    bool is_finished() {
      bool has_eatable = false;
      for (int i = 1; i < BOARD_HEIGHT - 1; i++) {
        for (int j = 1; j < BOARD_WIDTH - 1; j++) {
          has_eatable = has_eatable || (this->board[i][j] == Pakmen::EATABLE_CELL);
        }
      }
      return !has_eatable;
    };

    int board[BOARD_HEIGHT][BOARD_WIDTH] = {
            {WALL_CELL, WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL},
            {WALL_CELL, EATABLE_CELL, GHOST_CELL,   EATABLE_CELL, GHOST_CELL,   EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL,    EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, WALL_CELL,    USER_CELL,    WALL_CELL,    EATABLE_CELL, WALL_CELL},
            {WALL_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, WALL_CELL},
            {WALL_CELL, POWER_CELL, EATABLE_CELL, EATABLE_CELL, EATABLE_CELL, CHERRY_CELL, WALL_CELL},
            {WALL_CELL, WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL,    WALL_CELL},
    };
  };

  extern int powered;
} // namespace

#endif // PAKMEN_MODEL_H
