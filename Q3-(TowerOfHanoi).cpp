#include<iostream>
using namespace std;

//tower of HANOI function implementation
void TOH(int n,char Sour, char Aux,char Des)
{ 
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
		return;
	}
	
	TOH(n-1,Sour,Des,Aux);
	cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
	TOH(n-1,Aux,Sour,Des);
}

//main program
int main()
{ 
	int n;
	
	cout<<"Enter no. of disks:";	
	cin>>n;
	//calling the TOH 
	TOH(n,'A','B','C');
	
	return 0;
}

#For returning number of moves

/*#include<iostream>
using namespace std;

int TOH(int n)
{
    if(n==1)
        return 1;
    else
        return (2*TOH(n-1)+1);
}

int main()
{
    int n,m;
    cout<<"\nEnter the no. of discs: ";
    cin>>n;
    m = TOH(n);
    cout<<"\nNo. of moves taken are: "<<m;
}*/
