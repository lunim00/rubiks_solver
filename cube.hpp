#ifndef CUBE_HPP
#define CUBE_HPP
#include <cstdint>

class Cube
{
private:
    enum class Colors: unsigned int
    {
        white  = 1,
        yellow = 2,
        blue   = 3,
        green  = 4,
        red    = 5,
        orange = 6
    };

    std::uint16_t faces[6];

public:
    Cube();
};

#endif