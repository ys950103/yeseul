#ifdef DLL_EXPORTING_EXPORTS
#define DLL_EXPORTING_API __declspec(dllexport)
#else
#define DLL_EXPORTING_API __declspec(dllexport)
#endif

DLL_EXPORTING_API void FunctionInDll();