#include <windows.h>

int main() {

	if (IsDebuggerPresent()) {
		MessageBoxA(NULL, "Debugger has been detected!", "Debugger check", MB_OK);
	}
	else {
		MessageBoxA(NULL, "No debugger has been detected", "Debugger check", MB_OK);
	}

	return 0;
}
