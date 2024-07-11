#include <stdio.h>
#include <windows.h>

int main(){
    OSVERSIONINFOEX osvi;
    ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);

    if (GetVersionEx((OSVERSIONINFO*)&osvi)){
        printf("Windows Version %d.%d (Build %d)\n", osvi.dwMajorVersion, osvi.dwMinorVersion, osvi.dwBuildNumber);
    } else {
        printf("Failed to retrieve Windows version informatio.\n");
    }

    return 0;
}