#pragma once
#include "position.h"
#include "smp.h"

void eval_init();
int evaluate(Worker *worker, const Position *pos);
