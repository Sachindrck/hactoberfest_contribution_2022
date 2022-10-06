#include <iostream>
using namespace std;

class Tower{
	public:
		void TowerOfHanoi(int n, char s, char d, char c);
};
 
void Tower::TowerOfHanoi(int n, char s, char d, char c)
{
    if (n == 1)
    {
        cout << "Move disk 1 from peg " <<s <<" to peg " <<d<<endl;
        return;
    }
    TowerOfHanoi(n - 1, s, c, d);
    cout << "Move disk " << n << " from peg " <<s <<" to peg " <<d<< endl;
    TowerOfHanoi(n - 1,c, d, s);
}
 

int main()
{
	cout<<"Here in the program S denotes Source peg , D denotes Destination peg and C denotes the Center peg .\n\n";
    int n ; // Number of disks
    cout<<"Enter the number of disks :";
    cin>>n;
    Tower t;
    t.TowerOfHanoi(n, 'S', 'D', 'C'); 
    return 0;
}