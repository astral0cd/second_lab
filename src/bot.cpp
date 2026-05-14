#include "bot.h"
#include "board.h"
#include <vector>
#include <cstdlib>
#include <ctime>

Point GetBotShot() {
    return Point{rand() % BOARD_SIZE, rand() % BOARD_SIZE};
}
void SetBotResult(Result result) {
    return;
}
