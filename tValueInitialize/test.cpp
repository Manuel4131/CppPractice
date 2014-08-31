#include <iostream>

using namespace std;
int main()
{
const int *test= new const int();
cout<< "Value: "<< *test;

return 1; 
}
