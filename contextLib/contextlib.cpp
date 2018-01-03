#include "contextlib.h"

/**
 * @brief ContextLib::_contextLibPtr declare the static field
 */
ContextLib* ContextLib::_contextLibPtr = nullptr;

/**
 * @brief ContextLib::ContextLib
 * Constructor
 */
ContextLib::ContextLib()
{
}

const ContextLib*  ContextLib::getInstance()
{
    if (_contextLibPtr == nullptr) {
        _contextLibPtr = new ContextLib();
    }

    return _contextLibPtr;
}

std::string ContextLib::getFileServerName()
{

}

std::string ContextLib::getServerName()
{

}

std::string ContextLib::getFileServerPort()
{

}

std::string ContextLib::getServerPort()
{

}
