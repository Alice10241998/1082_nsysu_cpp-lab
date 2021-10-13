#include <iostream>

namespace TD
{
	class TwoD
	{
	public:
		TwoD(int row=1,int col=1);
		~TwoD();
		void set(int r,int c,int data);
		int get(int r , int c);
		friend TwoD operator+(const TwoD &t1,const TwoD &t2);
		void operator=(const TwoD &t1);
		void show(void);
	private:
		int **ary;
		int mrow;
		int mcol;
	};
}

