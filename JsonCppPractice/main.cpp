#include <iostream>
#include "json/json.h"

int main() {

    Json::Value root;
    root["number"] = 0;
    if (root["number"].isInt())
    {
        std::cout << root["number"].asString();
    }
    return 0;
}
