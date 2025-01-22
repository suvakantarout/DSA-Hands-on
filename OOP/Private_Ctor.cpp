//Can Constructor be made private ?

#include<iostream>
using namespace std;

class Box
{	
//	Default members are private
	int width;
	Box(int_w) : width(_w){
	
	};
	
	public:
		int getwidth() const
		{
			return width;
		}
		
		void setwidth(int_val)
		{
			width = _val;
		}
		
		friend class BoxFactory;

};

class BoxFactory
{	
	public:
		Box getBox(int _w)
		{
			return Box(_w);
		}
};




int main(){
	
	BoxFctory bfact;
	Box b = bfact.getBox(5);
	cout<<b.getwidth()<<endl;
		
	return 0;
}
