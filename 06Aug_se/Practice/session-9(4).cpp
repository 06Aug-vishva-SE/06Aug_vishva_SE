#include <stdio.h>

int main()
{
    int cricketScores[3][2] = {
        {180, 160},
        {150, 175},
        {200, 190}
    };

    for(int i = 0; i < 3; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
            printf("%d\n", cricketScores[i][0]);
        else
            printf("%d\n", cricketScores[i][1]);
    }

    return 0;
}
