#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <math.h>

int main()
{
	BlockID stone = createBlock(BLOCK_STONE);
	double pi = 3.14159265358979323846;
    int px, py, pz;
	getPlayerLocation(&px, &py, &pz);
	double dir = getPlayerDirection();
	double radian = dir * pi / 180.;
	int dx = -20 * sin(radian);
	int dz = 20 * cos(radian);
	px += dx;
	pz += dz;
	for (int i = 0; i < 50; i++)
	{
		py++;
		locateBlock(stone, px, py, pz);
	}

	
}