#ifndef MODULE_IG
#define MODULE_IG

#include <fstream>
#include "entity.hpp"
#include "architecture.hpp"

class Module
{
public:
    Module(std::fstream);
    virtual Module & create() = 0;
    ~Module();
private:
    Entity entity;
    Architecture architecture;
};


#endif 