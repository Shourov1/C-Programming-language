//
//  main.cpp
//  global_scope
//
//  Created by Md. Shariful Alam on 27/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//


//Here’s a summary chart of the use of the extern and static keywords for non-const and const variable use cases:

// Uninitialized definition:
int g_x;        // defines uninitialized global variable (external linkage)
static int g_x; // defines uninitialized static variable (internal linkage)
const int g_x;  // not allowed: const variables must be initialized

// Forward declaration via extern keyword:
extern int g_z;       // forward declaration for global variable defined elsewhere
extern const int g_z; // forward declaration for const global variable defined elsewhere

// Initialized definition:
int g_y(1);        // defines initialized global variable (external linkage)
static int g_y(1); // defines initialized static variable (internal linkage)
const int g_y(1);  // defines initialized const variable (internal linkage)

// Initialized definition w/extern keyword:
extern int g_w(1);       // defines initialized global variable (external linkage, extern keyword is redundant in this case)
extern const int g_w(1); // defines initialized const global variable (external linkage)

