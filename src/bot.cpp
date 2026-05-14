#include "bot.h"
#include "board.h"
#include <vector>
#include <cstdlib>
#include <ctime>

Point GetBotShot(std::mt19937 rng) {
    std::uniform_int_distribution<int> dist(0, BOARD_SIZE - 1);
    return Point{dist(rng), dist(rng)};
}
void SetBotResult(Result result) {
    return;
}
