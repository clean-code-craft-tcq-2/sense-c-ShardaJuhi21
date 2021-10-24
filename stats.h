typedef struct Stats *Stats_ptr;
struct Stats { 
	Stats_ptr	average; 
	Stats_ptr	min; 
	Stats_ptr	max; 
};

struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
