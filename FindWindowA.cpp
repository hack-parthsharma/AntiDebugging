#include <windows.h>

int main() {

    LPCSTR DetectOlly = "OLLYDBG";
    LPCSTR DetectWinDBG = "WinDbgFrameClass";

    if (FindWindowA(DetectOlly, 0) || FindWindowA(DetectWinDBG, 0)) {
        MessageBoxA(NULL, "Debugger has been detected!", "Debugger check", MB_OK);
        exit(1);
    }
    else {
        MessageBoxA(NULL, "No debugger has been detected", "Debugger check", MB_OK);
    }

    return 0;
}
