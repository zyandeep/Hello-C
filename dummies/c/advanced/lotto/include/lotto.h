/* Header file for lotto program */

/* FUNCTION PROTOTYPES */

void init(void);
void select_ball(void);
void sort(void);
void display(void);
int comparator(const void *p1, const void *p2);
void seed_randomizer(void);
void pause(time_t t);


/* DEFINES */

#define BALLS 6
#define RANGE 50 
#define DELAY 2.0
