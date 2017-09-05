
#include "includes/global-defs.h"
#include "includes/network.h"
#include "includes/main.h"
#include "includes/utility-functions.h"

void print() {
    printf("testing function pointer...\n");
}


int main()
{
    InitializeProgram();


    TerminateProgram(print);
    return (EXIT_SUCCESS);
}
