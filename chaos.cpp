#include <cmath>
#include <fstream>
#include <vector>
#include <random>

//simple x-y point structure, along with some operators
struct point{
    double x, y;
};

point operator+(point lhs, point rhs){return{lhs.x + rhs.x,lhs.y + rhs.y};}

point operator*(double k, point pt){return{k*pt.x,k*pt.y,};}

point operator*(point pt, double k){return k*pt;}

using PointVector = std::vector<point>;

//return a pseudo-rendom number generator
std::default_random_engine& rng(){
    //initialize static pseudo-engine with non deterministic random seed
    static std::default_random_engine randEngine(std::random_device{}());
    return randEngine;
}

//returns a random double in (0,1)
double drand(){
    return std::uniform_real_distribution<double>(0.0, 1.0)(rng());
}

//returns a random integer in [0, numElems-1]
std::size_t randrange(std::size_t numElems){
    return std::uniform_int_distribution<std::size_t>(0,numElems-1)(rng());
}

//return a random point from the non-empty pointvector
point choose(const PointVector& points){
    return points[randrange(points.size())];
}

//simulate a chaos game
PointVector chaosGame(int numOutputPOints, const PointVector& inputPOints){
    //choose the first point randomly
    point curpoint = {drand(), drand()};

    //for each output point, compute midpoint to random input point
    PointVector outputpoint(numOutputPOints);
    for(auto& output: outputpoint){
        output = curpoint;
        curpoint = 0.5 * (curpoint+choose(inputPOints));
    }
    return outputpoint;
}

int main(){
    //This will generate the sierpinski triangle with a chaos game
    PointVector inputPOints = {{0.0,0.0}, {0.5, std::sqrt(0.75)}, {1.0,0.0}};
    auto outputpoints = chaosGame(10000, inputPOints);

    std::ofstream ofs("sierpin.dat");
    for(auto pt : outputpoints){
        ofs << pt.x << '\t' << pt.y << '\n';
    }
}