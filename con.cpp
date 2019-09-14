#include <iostream>
using namespace std;
  
int i=0;
  
class S
{
 public:
    S()
    {
        i++;
        cout<<i<<endl;
    }
};
  
int main()
{
    S A[100];
    return 0;
}
