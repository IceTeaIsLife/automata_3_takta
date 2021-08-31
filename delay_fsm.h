#ifndef AUTOMATA_PROGRAMMING_DELAY_FSM_H
#define AUTOMATA_PROGRAMMING_DELAY_FSM_H

#include "stdbool.h"

#if defined(__cplusplus)
extern "C" {}
#endif

enum DelayState{
    DELAY_STATE_000, DELAY_STATE_001, DELAY_STATE_010, DELAY_STATE_011,
    DELAY_STATE_100, DELAY_STATE_101, DELAY_STATE_110, DELAY_STATE_111
};

enum DelayInputSymbol{
    DELAY_INPUT_ZERO = 0, DELAY_INPUT_ONE = 1
};

enum DelayOutputSymbol{
    DELAY_OUTPUT_ZERO = 0, DELAY_OUTPUT_ONE = 1
};

struct DelayEngine{
    enum DelayState state;
};

#define DEFAULT_DELAY_STATE DELAY_STATE_000

bool delay_init(struct DelayEngine *engine);
bool delay_reset(struct DelayEngine *engine);

enum DelayOutputSymbol delay_engine(struct DelayEngine *engine, enum DelayInputSymbol symbol);

#if defined(__cplusplus)
extern "C" {}
#endif

#endif //AUTOMATA_PROGRAMMING_DELAY_FSM_H
