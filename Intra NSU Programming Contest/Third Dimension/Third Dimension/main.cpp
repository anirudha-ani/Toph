//
//  main.cpp
//  Third Dimension
//
//  Created by Anirudha Paul on 2/17/16.
//  Copyright © 2016 Anirudha Paul. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int testcase, x , y , z  ;

int count (int a , int b , int c )
{
    if(a>x || b > y || c>z) return 0;
    else if(a == x && b == y && c==z)
        return 1;
    int q = count (a+1 , b , c) ;
    int w = count (a , b+1 , c) ;
    int e = count(a , b , c+1);
    //cout  << q << " " << w << " " << e << endl ;
    return q + w + e ;
}

int main(int argc, const char * argv[])
{
    int ans;
    
    scanf("%d", &testcase);
    
    for (int i = 0 ;  i < testcase; i++) {
        scanf("%d %d %d", &x , & y , &z);
        ans = count(0 , 0 , 0);
        printf("Case #%d: %d\n",i+1 , ans);
        
    }
    return 0;
}
