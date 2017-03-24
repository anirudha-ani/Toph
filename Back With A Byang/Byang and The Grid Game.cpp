#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

struct coin
{
    int x , y;
}coins[100001];

struct move
{
    int x , y;
}moves[1001];

int main()
{
    int P , K , x0 , y0;

    int x , y;
    if(P == 0)
    {
        printf("Yes\n");
        return 0;
    }
    scanf("%d %d %d %d", &P ,&K , &x0, &y0);

    for(int i = 0 ; i < P ; i++)
    {
        scanf("%d %d", &x , &y);

        coins[i].x = x;
        coins[i].y = y;
    }

    for(int i = 0 ; i < K ; i++)
    {
        scanf("%d %d", &x , &y);

        moves[i].x = x;
        moves[i].y = y;
    }

    int current_x , current_y , next_x , next_y ;

    for(int i = 0 ; i < P ; i++)
    {
        if(i==0)
        {
            current_x = x0 ;
            current_y = y0 ;
            next_x =  coins[0].x;
            next_y = coins[0].y;
        }
        else
        {
            current_x = coins[i-1].x ;
            current_y = coins[i-1].y ;
            next_x =  coins[i].x;
            next_y = coins[i].y;
        }

        bool possible = false;
        int need_x , need_y;
        if(current_y<next_y)
        {
            need_y = 1;
        }
        else if(current_y == next_y)
        {
            need_y = 0;
        }
        else
        {
             need_y = -1;
        }
        if(current_x<next_x)
        {
            need_x = 1;
        }
        else if(current_x == next_x)
        {
            need_x = 0;
        }
        else
        {
             need_x = -1;
        }

        for(int j = 0 ; j < K ; j++)
        {
            int move_x = moves[j].x;
            int move_y = moves[j].y;

            if((need_x == 0 && move_x !=0) || (need_x == -1 && (move_x > 0)) || (need_x == 1 && (move_x < 0)) )
            {
                continue;
            }
            if((need_y == 0 && move_y !=0) || (need_y == -1 && (move_y > 0)) || (need_y == 1 && (move_y < 0)))
            {
                continue;
            }

            if(move_x != 0)
            {
                int difference = abs(next_x - current_x);
                move_x = abs(move_x);

                if(difference % move_x != 0)
                    continue;
            }
            if(move_y != 0)
            {
                int difference = abs(next_y - current_y);
                move_y = abs(move_y);

                if(difference % move_y != 0)
                    continue;
            }

            possible = true;
            break;
        }
        if(!possible)
        {
            printf("No\n");
            return 0;
        }

    }
    printf("Yes\n");

    return 0;
}
