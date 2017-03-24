//
//  main.cpp
//  Be Like Hasib
//
//  Created by Anirudha Paul on 2/17/16.
//  Copyright © 2016 Anirudha Paul. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{
    long long int x, a ;
    
    scanf("%lld %lld", &x , &a);
    int ans =(int) log2(1.0 * x);
    printf("%d\n", ans);
    return 0;
}
