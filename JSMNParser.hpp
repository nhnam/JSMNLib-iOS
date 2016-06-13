//
//  JSMNParser.hpp
//  JSMNLib
//
//  Created by Nguyen Hoang Nam on 13/6/16.
//  Copyright © 2016 Alan Nguyen. All rights reserved.
//

#ifndef JSMNParser_hpp
#define JSMNParser_hpp

#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <curl/curl.h>

#include "jsmn.h"

class JSMNParser {
public:
    JSMNParser();
    JSMNParser(const std::string &title);
    ~JSMNParser();
    
public:
    void setTitle(const std::string &title);
    const std::string &getTtile();
    
private:
    std::string m_title;
};

#endif /* JSMNParser_hpp */
