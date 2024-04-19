#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define FROGBARIAN_EXPORT __declspec(dllexport)
#else
  #define FROGBARIAN_EXPORT
#endif

FROGBARIAN_EXPORT void frogbarian();
FROGBARIAN_EXPORT void frogbarian_print_vector(const std::vector<std::string> &strings);
