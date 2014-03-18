#include<iostream>
#include<vector>
#include<string>
using namespace std;


void fizzbuzz( vector<string>& vec, int num)
{
	string FizzBuzz("FizzBuzz");
	string Fizz("Fizz");
	string Buzz("Buzz");

	for(int i = 0; i < num; i++)
	{
		if( (0 == i % 3) && (0 == i % 5) )
		{
			vec.push_back(FizzBuzz);
		}
		else if( 0 == i % 3 )
		{
			vec.push_back(Fizz);
		}
		else if( 0 == i % 5 )
		{
			vec.push_back(Buzz);
		}
		else
		{
			vec.push_back(std::to_string(i));
		}
	}
}

int main()
{
	vector<string> vec;
	fizzbuzz(vec, 15);

	for(int i = 0; i< vec.size(); i++)
		cout<<vec[i]<<endl;

	system("PAUSE");
}