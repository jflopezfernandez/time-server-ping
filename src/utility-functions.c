
#include "includes/global-defs.h"
#include "includes/network.h"
#include "includes/main.h"
#include "includes/utility-functions.h"


void InitializeProgram() {
    printf("[Initializing...] \n");
}

void TerminateProgram(void (*func)()) {
    func();
}
