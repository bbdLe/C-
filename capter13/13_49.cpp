#include "StrVec.h"
#include "13_48/String.h"
#include "Message.h"
#include "Folder.h"

int main()
{
	StrVec a, c;
	a.push_back("haha");
	StrVec b(std::move(a));
	c = std::move(b);

	String str1("hello");
	String str2(std::move(str1));

	Folder f1;
	Message msg1("hello.h");
	msg1.add(f1);
	Message msg2(std::move(msg1));
	Message msg3, msg4;
	msg3 = std::move(msg2);
	msg4 = std::move(msg3);
	f1.showMsg();
}
