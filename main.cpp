#include <stdio.h>
#include <iostream>
#define REPEAT(...) #__VA_ARGS__;__VA_ARGS__

char * ref = REPEAT(

using std::cout;
using std::endl;

#define LINK "https://en.wikipedia.org/wiki/C_preprocessor"

int main(int argc, char **argv)\
{
    std:cout<<"#include <stdio.h> \
    #include <iostream> \
    #define REPEAT(...) #__VA_ARGS__;__VA_ARGS__ \
    char * ref = REPEAT("<<ref<<endl;
    return 0;
}
)