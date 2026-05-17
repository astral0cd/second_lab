#include "bot.h"
#include "board.h"
#include <vector>
#include <cstdlib>
#include <ctime>

Point GetBotShot(std::mt19937 rng) {
    std::uniform_int_distribution<int> dist(0, bot.availableCells.size() - 1);
    int idx = dist(rng);
    Point p = bot.availableCells[idx];
    bot.availableCells.erase(bot.availableCells.begin() + idx);
    return p;
}
void SetBotResult(Result result) {
    return;
}
