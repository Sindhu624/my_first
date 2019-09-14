#include <iostream>
using namespace std;
  
int i=0;
  
class num
{
 public:
    num()
    {
        i++;
        cout<<i<<endl;
    }
    ~num()
	{
		int square;
		square=i*i;
		i--;
		cout<<square<<endl;
	}

};
  
int main()
{
    num A[10];
    return 0;
}
