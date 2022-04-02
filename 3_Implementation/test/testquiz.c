#include "unity.h"
extern void help();
extern void start();
extern void highscore();

void setUp(void)
{

}
void tearDown(void)
{

}
int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(help);
    RUN_TEST(start);
    RUN_TEST(highscore);
    return(UnityEnd());

}
