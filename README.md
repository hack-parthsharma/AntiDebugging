## Anti debugger techniques

These proof-of-concept's demonstrate various techniques that can be used for anti-debugging, debugger detection, and more. When encountering any of these functions or methods, a reverse engineer needs to be familiar with methods for bypassing said anti-debugger techniques.

----

- **IsDebuggerPresent**

Using the Windows API function *IsDebuggerPresent* you can determine if your process is being debugged. This function works by checking the processes PEB structure's BeingDebugged value, located at 0x2. If this PEB value is set to 1, the process is being debugged, and 0 means it's not.

- **CheckRemoteDebuggerPresent**

Similar to the *IsDebuggerPresent* methods, the *CheckRemoteDebuggerPresent* API function allows you to check if any process is being debugged, by passing a handle of that process as the first parameter of the function. It set's a user-provided variable to either TRUE or FALSE, based on whether the process is being debugged or not.

- **GetProcessMemoryInfo**

Using the Windows API function *GetProcessMemoryInfo* you can determine if your process is being debugged. This function can check the working set, which is the amount of memory a process needs at a certain time. Non-debugged processes never require a great amount, you can use this idea with a simple check to see if the working set is a huge amount or not.

- **FindWindow**

Using the *FindWindow* function, you can detect specific debuggers based on window classes, you can manually provide specific window class strings that match to potential debuggers on the system, if this function finds them, it can detect it's being debugged.
