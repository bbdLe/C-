#include<string>
#include<set>
#include"Message.h"
#include"Folder.h"
#include<iostream>

using namespace std;

Message::Message(const Message &omsg) : content(omsg.content), folders(omsg.folders)
{
	add_to_folders(omsg);
}

Message::Message(Message &&msg) : content(std::move(msg.content))
{
	move_folder(&msg);
	cout << "left refer" << endl;
}

Message &Message::operator=(const Message &omsg)
{
	remove_from_folders();
	content = omsg.content;
	folders = omsg.folders;
	add_to_folders(omsg);
}

Message &Message::operator=(Message &&msg)
{
	if(&msg != this)
	{
		content = std::move(msg.content);
		remove_from_folders();
		move_folder(&msg);
		cout << "left refer" << endl;
	}
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

void Message::move_folder(Message *msg)
{
	folders = std::move(msg->folders);
	for(auto f : folders)
	{
		f->remMsg(*msg);
		f->addMsg(*this);
	}
	msg->folders.clear();
}
