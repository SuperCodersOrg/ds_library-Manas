#ifndef REDIS_CLI_H
#define REDIS_CLI_H

#include <string>
#include "../HashMap/hash_map.h"

class RedisCLI
{
private:
    HashMap<std::string, std::string> store;

    

public:
    void run();
    
    void handleSet(const std::string& key,const std::string& value);

    void handleGet(const std::string& key);

    void handleDel(const std::string& key);

    void handleExists(const std::string& key);

    void handleCount();

    void handleClear();
};


#endif