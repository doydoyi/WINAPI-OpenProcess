#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){

    DWORD pid = 4060;
    HANDLE handle_toProcess = OpenProcess(PROCESS_ALL_ACCESS, TRUE, pid);

    if(handle_toProcess == NULL){
        printf("Cannot open process. %ld", GetLastError());
        return EXIT_FAILURE;
    } else {
        printf("Process is opened.");
    };

    CloseHandle(handle_toProcess);

    return EXIT_SUCCESS; 
}