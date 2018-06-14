#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class test{
	public:
		int first;
		int second;
		
		void input();
		void output();
};

void test::input(){
	
	cout<<"Enter two number:"<<endl;
	cin>>first;
	cin>>second;
	
}

void test::output(){
	
	cout<<"first is "<<first<<"\n";
	cout<<"second is "<<second<<"\n";
	
}

int main(int argc, char** argv) {
	
	test t;
	t.input();
	t.output();
	
	return 0;
}
