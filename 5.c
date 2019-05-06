#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

int main(void)
{
    BlockID gold = createBlock(BLOCK_GOLD);
    int sx, sy, sz;
	int ex, ey, ez;
    
    printf("공간의 x길이 y길이 z길이가 비슷해야 건물크기가 잘 바뀝니다.\n");

    scanf("%d %d %d", &sx, &sy, &sz);
	scanf("%d %d %d", &ex, &ey, &ez);
    
    int x = (sx + ex) / 2;
    int y = (sy + ey) / 2;
    int z = (sz + ez) / 2; 
    
    int a = abs(sx - ex) / 2;
    int b = abs(sy - ey) / 2;
    int c = abs(sz - ez) / 2;
    int d;
    
    int p;
    int q;
    int r;
    int s;
    
    if (a > b)
    {
        if (b > c)
        {
            d = c;
        }
        else
        {
            d = b;
        }
    }
    else
    {
        if (a > c)
        {
            d = c;
        }
        else
        {
            d = a;
        }
    }
    for(s = d, q = y; s >= 0; s--, q++)
    {
        for(p = x - s; p <= x + s; p++)
        {
            for(r = z - s; r <= z + s; r++)
            {
                locateBlock(gold, p, q, r);
            }
        }
    }
    for(s = d - 1, q = y - 1; s >= 0; s--, q--)
    {
        for(p = x - s; p <= x + s; p++)
        {
            for(r = z - s; r <= z + s; r++)
            {
                locateBlock(gold, p, q, r);
            }
        }
    }
}
