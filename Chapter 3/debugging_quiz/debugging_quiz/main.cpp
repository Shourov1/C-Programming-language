//
//  main.cpp
//  debugging_quiz
//
//  Created by Md. Shariful Alam on 21/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

void d()
{ // here
}

void c()
{
}

void b()
{
    c();
    d();
}

void a()
{
    b();
}

int main()
{
    a();
    
    return 0;
}
