Docu:

As usual include the headers for windows, input output, and the standard library.

Variables: 
DWORD pid; will change depending on the Process ID given. (Manually change)
HANDLE handle_toProcess; Variable that calls the OpenProcess function that has parameters. For parameters refer to the holy bible a.k.a Windows API Documanetaion [Windows API for OpenProcess] (https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-openprocess)

if() statement to check if the handle to the process is null, if the process is NULL prints the cannot open as well as the GetLastError() then exits for the failure with EXIT_FAILURE (1);
else the process is opened then prints that the process is opened.

line 17 indicates that the handle to the process is closed to avoid kernel leaks (just google this shit. <3)

return EXIT_SUCCESS;
