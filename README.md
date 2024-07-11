# Detect Virtual Machine (detect_vm)

This C program detects whether it is running inside a virtual machine (VM) environment on a Windows system. It uses common artifacts and indicators associated with virtualization software to make an educated guess.

## Features

- **Detection Method**: Checks for common virtualization artifacts such as debugger presence and specific module handles.
- **Platform**: Designed for Windows operating systems.
- **Output**: Prints whether a virtual machine is detected or not.

## Requirements

- **Compiler**: GCC (GNU Compiler Collection) for Windows (MinGW or MSYS2).
- **Operating System**: Windows.

## Compilation

1. **Install GCC**: Ensure GCC is installed on your system. You can install GCC through MinGW or MSYS2.

2. **Compile the Program**:

   ```bash
   gcc -o detect_vm detect_vm.c

## Usage
````
./detect_vm.exe
````
This will execute the compiled detect_vm.exe program and print whether a virtual machine is detected based on the checks performed.

## Example Output
If a virtual machine is detected:
````
Virtual Machine Detected
````
If no virtual machine is detected:
````
Physical Machine Detected
````
## Notes
- This program provides basic detection based on known virtualization artifacts. It may produce false positives or negatives depending on the specific virtualization environment and configurations.

- Use responsibly and ensure compliance with legal and ethical guidelines when detecting virtual machines.