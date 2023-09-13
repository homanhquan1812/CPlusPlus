#include "lib.h"

using namespace std;

int main()
{
    string tempMap[50][50] =
    {   {"W","W","WA1B1C1D1E1F","A","S","A","S","A","S","A"},
        {"W","W","W","W","S","A","S","A","S","A"},
        {"W","S","D","D","S","A","S","A","S","A"},
        {"W","S","D","D","S","A","S","A","S","A"},
        {"W","SA1B1C1D1","A","A","A","A","S","A","S","A"},
        {"W","SA1B1C1D1","A","A","A","A","S","A","S","A"},
        {"W","SA1B1C1D1","A","A","A","A","S","A","S","A"},
        {"W","SA1B1C1D1","A","A","ASA1B1C1D1","A","S","A","S","A"},
        {"SA1B1C1D1","SA2B2C2D2","SA3B4C5D6","ASK4B1C1D1R","ASK4B1C1D1R","A","S","A","S","A"},
        {"SA1B1C1D1","SA2B2C2D2","SA3B4C5D6","ASK4B1C1D1R","ASK4B1C1D1R","A","S","A","S","A"}};
    int r = 10;
    int c = 10;
    string **Map = new string*[r];
    for(int i = 0; i < r; i++){
        Map[i] = new string[c];
        for(int j = 0; j < c; j++){
            Map[i][j] = tempMap[i][j];
        }
    }
    gameMap gMap(Map, r, c);
    gMap.printMap();

    return 0;
}