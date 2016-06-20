#include<set>
#include<iostream>
#include"Folder.h"
#include"Message.h"

using namespace std;

Folder::Folder(const Folder &f) : mess(f.mess)
{
	add_to_message(f);
}

Folder &Folder::operator=(const Folder &f)
{
	remove_from_message();
	mess = f.mess;
	add_to_message(f);
}

Folder::~Folder()
{
	remove_from_message();
}

void Folder::addMsg(Message &msg)
{
	mess.insert(&msg);
}

void Folder::remMsg(Message &msg)
{
	mess.erase(&msg);
}

void Folder::showMsg()
{
	for(auto &m : mess)
	{
		cout << m->content << endl;
	}
}

void Folder::add_to_message(const Folder &f)
{
	for(auto &m : f.mess)
	{
		m->add(*this);
	}
}

void Folder::remove_from_message()
{
	for(auto &m : mess)
	{
		m->remove(*this);
	}
}
