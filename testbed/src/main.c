#include <core/logger.h>
#include <core/asserts.h>

// TODO: Test
#include <platform/platform.h>


int main(void){
    
    GFATAL("A test message: %f", 4.32f);
    GERROR("A test message: %f", 4.32f);
    GWARN("A test message: %f", 4.32f);
    GINFO("A test message: %f", 4.32f);
    GDEBUG("A test message: %f", 4.32f);
    GTRACE("A test message: %f", 4.32f);

    platform_state state;
    if(platform_startup(&state, "Genys Engine Test", 100, 100, 1280, 720)) {
        while (TRUE)
        {
            platform_pump_messages(&state);
        }
        
    }
    platform_shutdown(&state);

    return 0;
}