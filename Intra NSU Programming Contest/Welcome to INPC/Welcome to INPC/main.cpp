//
//  main.cpp
//  Welcome to INPC
//
//  Created by Anirudha Paul on 2/16/16.
//  Copyright © 2016 Anirudha Paul. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[])
{
    int names;
    string input;
    
    cin >> names;
    
    for (int i = 0 ; i < names; i++)
    {
        cin >> input ;
        input[0] = input[0] - 'a' + 'A';
        cout << "Welcome "<< input << endl;
    }
    return 0;
}
