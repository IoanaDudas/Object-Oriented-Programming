#pragma once
#include <string>
#include <vector>
#include "Aircraft.h"

using namespace std;


class HotAirBalloon : public Aircraft
{
private:
    int weightLimit;
public:
    HotAirBalloon(int id, int weight);

    void setWeightLimit(int weight);

    int getWeightLimit() const;

    std::string toString() override;
};

