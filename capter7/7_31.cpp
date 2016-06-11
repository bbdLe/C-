class Y;

class X
{
	public:
		class Y *pointer;
};

class Y
{
	public:
		class X item;
};

int main()
{
	Y a;
	X b;
	return 0;
}
