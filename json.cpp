#include <iostream>
#include "json.hpp"
#include <iomanip>

using json = nlohmann::json;

int main()
{
    // Here is a JSON text
    char text[] = R"(
    {
        { "balaji.sivakumar@curneu.com": { "userBasicDetails": { "userId": "IND0001", 
        "Email": "balaji@curneu.com", 
        "Country": "India", 
        "HospitalName": "CMC", 
        "Password": "K@123", "UserGender": "Male",
        "UserName": "BalajiSivakumar" } } }
    }
    )";

    // Let's parse and serialize JSON
    json j_complete = json::parse(text);
    std::cout << std::setw(4) << j_complete << std::endl;
