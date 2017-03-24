#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,x;

    scanf("%d", &N);
    if(N==0)
    {
        printf("1\n");
        return 0;
    }
    vector<int> input;

    for(int i = 0 ; i < N ; i++)
    {
        scanf("%d", &x);

        input.push_back(x);
    }

    sort(input.begin(),input.end());
    int index = N-1;
    bool found = true;
    for(int i = 1 ; i < 10000002;i++)
    {
        found = true;
        index = N-1;
        while(i<=input[index])
        {
            if(input[index]%i == 0)
            {
                found = false;
                break;
            }
            index--;
        }
        if(found)
        {
            printf("%d\n", i);
            return 0;
        }

    }
    printf("%d\n", input[N-1]+1);
    return 0;
}
