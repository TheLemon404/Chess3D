#pragma once
#include <string>

struct Logger {
    void Log(std::string message);
    void ThrowRuntimeError(std::string message);
};
