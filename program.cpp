#include <bits/stdc++.h> // Include every standard library
using namespace std;

struct Node
{
	Node *links[26];
	int cntEndsWith = 0;
  	int cntPrefix = 0;

  	bool containsKey(char ch)
  	{
		return (links[ch - 'a'] != NULL);
	} 

  	Node *get(char ch)
  	{
    	return links[ch - 'a'];
  	}

  	void put(char ch, Node *node)
  	{
    	links[ch - 'a'] = node;
  	}

  	void inscreaseEnd()
  	{
    	cntEndsWith++;
  	}

  	void increasePrefix()
  	{
    	cntPrefix++;
  	}

  	void deleteEnd()
  	{
    	cntEndsWith--;
  	}

  	void reducePrefix()
  	{
    	cntPrefix--;
  	}

};

int main()
{
  return 0;
}
