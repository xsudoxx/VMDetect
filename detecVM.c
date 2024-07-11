#include <stdio.h>

#ifdef _WIN32
    const char* os = "Windows";
#elif __APPLE__
    const char* os = "macos";
#elif __linux__
    const char* os = "Linux";
#elif __unix__
    const char* os = "POSIX";
#else
    const char* os = "Unknown";
#endif

int main(){
    printf("Operating System: %s\n", os);
    return 0;
}
