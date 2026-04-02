#pragma once
#include <exception>

class ExceptieIndexInvalid : public std::exception {
public:
    const char* what() const noexcept override {
        return "Index invalid!";
    }
};