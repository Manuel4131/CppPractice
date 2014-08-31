#include <iostream>
#include <memory>
#include <string>

using namespace std;
int main()
{
 allocator<string> alloc;	//object can allocate string
 auto const p= alloc.allocate(5);
 auto q= p;
 alloc.construct(q++, "a string");
 alloc.construct(q++, " b string"); 
// cout<< *p <<endl;
 cout<< *(p+1)<<endl;

// Destruct all 
//	while(q!=p)
//		alloc.destory(--q);

// To deallocate all the created instance objects.
//	alloc.deallocate(p, n);	
			//p is the ponter which points to the start.
			// n is the allocated number.


return 1; 
}
