#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
