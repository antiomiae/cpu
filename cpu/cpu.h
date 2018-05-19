#ifndef CPU_CPU_H
#define CPU_CPU_H

#include <cstdint>

struct Core
{
    // accumulator
    uint8_t acc;

    // index register x
    uint8_t x;
    // index register y
    uint8_t y;

    // stack pointer
    uint16_t sp;
    // program counter
    uint16_t pc;

    // status vector
    uint8_t status;

    Core() :
        acc(0), x(0), y(0), sp(0), pc(0), status(0)
    {
    }
};

#endif
