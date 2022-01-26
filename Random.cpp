#include "Random.h"
#include <stdlib.h>
#include <time.h>

void Random::Init()
{
    srand(time(nullptr));
}
// 1.2
// 2.4
float Random::Range(float min, float max)
{
    // 1200
    int minValue = min * 1000.0f;
    // 2400
    int maxValue = max * 1000.0f;
    // 1200
    int range = maxValue - minValue;

    // 0 ~ 1199
    //rand() % range;

    // 1200 ~ 2399
    int randomValue = minValue + rand() % range;

    // 1.2 ~ 2.399
    return randomValue / 1000.0f;
}
