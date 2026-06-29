#include<iostream>
#include<stdexcept>
#include "../../include/RedisCli/redis_cli.h"
using namespace std;

void RedisCLI::handleSet(const std::string& key,const std::string& value)
{
    store.put(key,value);

    cout<<"OK"<<endl;
}

void RedisCLI::handleGet(const std::string& key)
{
    try
    {
        cout<< store.get(key)<<endl;
    }
    catch(const std::out_of_range&)
    {
        cout<< "Key not found"<< std::endl;
    }
}

void RedisCLI::handleExists(const std::string& key)
{
    if(store.containsKey(key))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<< std::endl;
    }
}

void RedisCLI::handleCount()
{
    cout<< store.size()<< endl;
}

void RedisCLI::handleDel(const std::string& key)
{
    try
    {
        store.remove(key);

        std::cout
            << "OK"
            << std::endl;
    }
    catch(const std::out_of_range&)
    {
        std::cout
            << "Key not found"
            << std::endl;
    }
}

void RedisCLI::handleClear()
{
    store.clear();

    std::cout
        << "OK"
        << std::endl;
}

void RedisCLI::run()
{
    std::string command;

    while(true)
    {
        std::cout << "> ";

        std::cin >> command;

        if(command == "SET")
        {
            std::string key;
            std::string value;

            std::cin >> key >> value;

            handleSet(key,value);
        }
        else if(command == "GET")
        {
            std::string key;

            std::cin >> key;

            handleGet(key);
        }
        else if(command == "DEL")
        {
            std::string key;

            std::cin >> key;

            handleDel(key);
        }
        else if(command == "EXISTS")
        {
            std::string key;

            std::cin >> key;

            handleExists(key);
        }
        else if(command == "COUNT")
        {
            handleCount();
        }
        else if(command == "CLEAR")
        {
            handleClear();
        }
        else if(command == "EXIT")
        {
            break;
        }
        else
        {
            std::cout<< "Unknown command"<< std::endl;
        }
    }
}