#include <string>

using namespace std;

//Is windows the compiling os ?
#ifndef __linux__
FILE* __cdecl popen(const char* _Command, const char* _Mode);
int __cdecl pclose(FILE* _Stream);
#endif

string _system(const char* cmd);