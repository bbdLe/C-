#ifndef _MESSAGE_H
#define _MESSAGE_H
#include<string>
#include<set>
class Folder;
class Message
{
	friend class Folder;
	public:
		Message(const std::string &message = "") : content(message) {}
		Message(const Message &);
		Message &operator=(const Message &);
		~Message();
		void add(Folder &);
		void remove(Folder &);
	
	private:
		std::string content;
		std::set<Folder *> folders;
		void add_to_folders(const Message &);
		void remove_from_folders();
};

#endif
