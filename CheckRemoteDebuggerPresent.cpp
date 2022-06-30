#include <windows.h>
#include <debugapi.h>

int main() {

    BOOL debugCheck = FALSE;

    if (CheckRemoteDebuggerPresent(GetCurrentProcess(), &debugCheck)) {
        MessageBoxA(NULL, "Debugger has been detected", "Debugger check", MB_OK);
        ExitProcess(1);
    }
    else {
        MessageBoxA(NULL, "No debugger has been detected", "Debugger check", MB_OK);
    }

    return 0;
}
