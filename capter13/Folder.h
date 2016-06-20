#ifndef _FOLDER_H
#define _FOLDER_H
#include<set>
class Message;
class Folder
{
	public:
		Folder() = default;
		Folder(const Folder &);
		Folder &operator=(const Folder &);
		~Folder();
		void addMsg(Message &);
		void remMsg(Message &);
		void showMsg();

	private:
		std::set<Message *> mess;
		void add_to_message(const Folder &);
		void remove_from_message();
};
#endif
