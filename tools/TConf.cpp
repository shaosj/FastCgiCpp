/*
 * =====================================================================================
 *
 *       Filename:  TConf.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年12月14日 16时24分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include "TConf.h"

Tool::TConf::TConf(std::string configName):
    m_configName(configName)
{

}

Tool::TConf::~TConf()
{

}

std::string Tool::TConf::getConfStr(std::string group, std::string key)
{

}

void Tool::TConf::setConfStr(std::string group, std::string key, std::string value)
{

}


#ifdef TEST_MAIN
int main(int args, char* argv[])
{

    Tool::TConf mConf("./test.conf");
    mConf.setConfStr("[LOG]", "level", "debug");
    mConf.getConfStr("[LOG]", "level");

    return 0;
}
#endif