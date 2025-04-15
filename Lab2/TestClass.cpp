#include <iostream>
using namespace std;
class House {
private:
float price; // cannot be accessed directly outside
protected:
int rooms; //can be accessed in child classes
public:
string address; // can be accessed directly outside 
};

int main()
{
    House h1;

    h1.address = "123 Main St"; // OK: address is public
    std::cout << "Address: " << h1.address << std::endl;
    
    return 0;
}
