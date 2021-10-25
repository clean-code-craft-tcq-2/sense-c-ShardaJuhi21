#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength)
{
    stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
}
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    float max = maxThreshold ;
    alerter_funcptr Array[2] = alerters;
    stats local = computedStats;
    
}
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
