//
//  JSMNParser.cpp
//  JSMNLib
//
//  Created by Nguyen Hoang Nam on 13/6/16.
//  Copyright © 2016 Alan Nguyen. All rights reserved.
//

#include "JSMNParser.hpp"

JSMNParser::JSMNParser() {}
JSMNParser::JSMNParser(const std::string &title): m_title(title) {}
JSMNParser::~JSMNParser() {}

void JSMNParser::setTitle(const std::string &title)
{
    m_title = title;
}

const std::string &JSMNParser::getTtile()
{
    return m_title;
}