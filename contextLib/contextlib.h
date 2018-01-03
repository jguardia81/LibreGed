#ifndef CONTEXTLIB_H
#define CONTEXTLIB_H


#include <string>
#include <Poco/Util/IniFileConfiguration.h>

class  ContextLib
{

private:
    /**
     * @brief ContextLib private contructor
     * Singleton pattern,. Wze need a unique instance of this
     */
    ContextLib();
    /**
     * @brief _contextLibPtr unique instance of this class
     */
    static ContextLib*  _contextLibPtr;
public:
    /**
     * @brief getInstance: create and return the unique instance of this class
     * @return the unique instance
     */
    static const ContextLib* getInstance();
    std::string getFileServerName();
    std::string getServerName();
    std::string getFileServerPort();
    std::string getServerPort();
};

#endif // CONTEXTLIB_H
