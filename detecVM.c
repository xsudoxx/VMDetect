#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

// function to check for VM characteristics

bool is_running_in_vm(){
    bool vm_detected = false;

    // Check for common virtualization artificats

    if (IsDebuggerPresent() || 
        GetModuleHandle("sbiedll.dll") ||
        GetModuleHandle("sbieDll.dll") ||
        GetModuleHandle("vboxhook.dll") ||
        GetModuleHandle("VBoxHook.dll") ||
        GetModuleHandle("vmcheck.dll") ||
        GetModuleHandle("vmsrvc.dll") ||
        GetModuleHandle("vmtools.dll") ||
        GetModuleHandle("vgauth.dll") ||
        GetModuleHandle("vmhgfs.dll") ||
        GetModuleHandle("vmguestlib.dll") ||
        GetModuleHandle("vmhgfs.dll")
    
    ){
        vm_detected = true;
    }
}
int main(){
    if (is_running_in_vm()){
        printf("Virtual Machine Detected\n");
    } else {
        printf("Physical Machine Detected\n");
    }

    return 0;
}