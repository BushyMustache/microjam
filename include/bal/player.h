#ifndef BAL_PLAYER_H
#define BAL_PLAYER_H

#include <bn_fixed_point.h>
#include <bn_display.h>

namespace bal
{
class player{
    //GBA screen size
    static constexpr int MAX_X = bn::display::width() / 2;
    static constexpr int MIN_X = - bn::display::width() / 2;
    static constexpr int MAX_Y = bn::display::height() / 2;
    static constexpr int MIN_Y = - bn::display::height() / 2;
}

}

#endif