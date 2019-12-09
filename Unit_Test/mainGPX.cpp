#include <iostream>
#include <fstream>

#include "gridworld.h"
#include "gridworld_route.h"

using namespace GPS;

int main()
{
    GridWorldRoute grid1("AB");

    std::ofstream gpx1("../logs/GPX/routes/AB.gpx");

    GridWorldRoute grid2("ABA");

    std::ofstream gpx2("../logs/GPX/routes/ABA.gpx");

    GridWorldRoute grid3("AY");

    std::ofstream gpx3("../logs/GPX/routes/AY.gpx");

    GridWorldRoute grid4("AEFLMI");

    std::ofstream gpx4("../logs/GPX/routes/AEFLMI.gpx");

    gpx1 << grid1.toGPX(true, "A 2 B");

    gpx2 << grid2.toGPX(true, "Beast from the east");

    gpx3 << grid3.toGPX(true, "All around the grid");

    gpx4 << grid4.toGPX(true, "Final");
}
