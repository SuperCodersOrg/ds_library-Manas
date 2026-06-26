#include<iostream>
#include<stdexcept>
#include "../include/RedisCli/redis_cli.h"

void RedisCLI::handleSet(const std::string& key,const std::string& value)
{
    store.put(key,value);

    std::cout<< "OK"<< std::endl;
}