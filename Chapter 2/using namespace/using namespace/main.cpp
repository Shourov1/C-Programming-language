//
//  main.cpp
//  using namespace
//
//  Created by Md. Shariful Alam on 19/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>      // imports the declaration of std::cout

using namespace std;    // makes std::cout accessible as "cout"

int cout()             // declares our own "cout" function
{
    return 5;
}

int main()
{
    cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?
    
    return 0;
}

//Avoid using directives (such as using namespace std;) at the top of your program. They violate the reason why namespaces were added in the first place.
