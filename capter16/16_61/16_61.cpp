#include"Shared_ptr.h"
#include"16_61.h"

using namespace std;

int main()
{
	MySharedPtr<string> p = myMakeShared<string>(std::move("hello"));
}
