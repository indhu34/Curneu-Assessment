#include <iostream>
#include <string.h>
#include <exception>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include "json.hpp"
using namespace std;
using json = nlohmann::json;
namespace pt = boost::property_tree;
int main()
{
  
  pt::ptree root;
  pt::read_json("data.json", root);  
  int roll = root.get<int>("roll no");  
  string  name = root.get<string>("name");  
  string class1 = root.get<string>("class");  
  cout << "name : " << name << endl;      
  cout << "roll no : " << roll << endl;
  cout << "class : " << class1 << endl << "address : " << endl << endl;
  for (pt::ptree::value_type & v : root.get_child("address"))
  {
    cout << v.first << endl;
    cout << "  "<<v.second.data() << endl;
  }
  return 0;
}
