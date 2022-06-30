#include <windows.h>
#include <Psapi.h>

int main() {

	PROCESS_MEMORY_COUNTERS pmc;
	BOOL getProcMem = GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc));
	if (pmc.WorkingSetSize <= 3456789) {
		MessageBoxA(NULL, "No debugger has been detected", "Debugger check", MB_OK);
	}
	else {
		MessageBoxA(NULL, "Debugger has been detected!", "Debugger check", MB_OK);
		
	}

	return 0;
}
