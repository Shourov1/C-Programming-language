//
//  main.cpp
//  namspaces
//
//  Created by Md. Shariful Alam on 29/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>
#include "foo.h"
#include "goo.h"


int main()
{
    std::cout << Foo::doSomething(4, 3) << std::endl; // which doSomething will we get?
    std::cout << Goo::doSomething(4, 3) << std::endl;
    return 0;
}


//Namespaces can be nested inside other namespaces. For example:

//**
#include <iostream>

namespace Foo
{
    namespace Goo // Goo is a namespace inside the Foo namespace
    {
        const int g_x = 5;
    }
}

int main()
{
    std::cout << Foo::Goo::g_x;
    return 0;
}

//** Note that because namespace Goo is inside of namespace Foo, we access g_x as Foo::Goo::g_x.

//Because typing the fully qualified name of a variable or function inside a nested namespace can be painful, C++ allows you to create namespace aliases.

namespace Foo
{
    namespace Goo
    {
        const int g_x = 5;
    }
}

namespace Boo = Foo::Goo; // Boo now refers to Foo::Goo

int main()
{
    std::cout << Boo::g_x; // This is really Foo::Goo::g_x
    return 0;
}
