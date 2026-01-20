#include "../../engine/src/core/logger.h"
#include "../../engine/src/core/asserts.h"


int main(void){
    
    GFATAL("A test message: %f", 4.32f);
    GERROR("A test message: %f", 4.32f);
    GWARN("A test message: %f", 4.32f);
    GINFO("A test message: %f", 4.32f);
    GDEBUG("A test message: %f", 4.32f);
    GTRACE("A test message: %f", 4.32f);

    GASSERT(1 == 0);


    return 0;
}