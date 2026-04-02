#include <exception>
#include <string>

class InventoryException : public std::exception {
    std::string msg;
public:
    InventoryException(std::string m) : msg(m) {}
    const char* what() const noexcept override { return msg.c_str(); }
};