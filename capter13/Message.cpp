#include<string>
#include<set>
#include"Message.h"
#include"Folder.h"

using namespace std;

Message::Message(const Message &omsg) : content(omsg.content), folders(omsg.folders)
{
	add_to_folders(omsg);
}

Message &Message::operator=(const Message &omsg)
{
	remove_from_folders();
	content = omsg.content;
	folders = omsg.folders;
	add_to_folders(omsg);
}

Message::~Message()
{
	remove_from_folders();
}

void Message::add(Folder &f)
{
	folders.insert(&f);
	f.addMsg(*this);
}

void Message::remove(Folder &f)
{
	folders.erase(&f);
	f.remMsg(*this);
}

void Message::add_to_folders(const Message &msg)
{
	for(auto &f : msg.folders)
	{
		f->addMsg(*this);
	}
}

void Message::remove_from_folders()
{
	for(auto &f : folders)
	{
		f->remMsg(*this);
	}
}
