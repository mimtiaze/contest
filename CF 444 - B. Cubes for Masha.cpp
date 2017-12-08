

#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<stack>
#include<sstream>
#include<queue>
#include<climits>
#include<map>
#include<set>
#include<cassert>
#include<numeric>

#define pb push_back
#define fullV(a) a.begin(),a.end()
#define sz size()
#define lg length()
#define ll long long int
#define ull unsigned long long int
#define gcd(a,b) __gcd(a,b)
#define FOR(n) for(int i=0; i<n; i++)
#define FORA(n,a) for(int i=a; i<(a+n); i++)
#define FORB(n,a,i) for(int i=a; i<(a+n); i++)
#define inFile freopen("input.txt", "r", stdin);
#define outFile freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;


template <class ForwardIterator, class T>
bool bin_search (ForwardIterator first, ForwardIterator last, const T& val)
{
  first = std::lower_bound(first,last,val);
  return (first!=last && !(val<*first));
}


template <typename T>
std::string NumberToString ( T Number )
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}

vector<string> splitingWord(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}


int main(){

    int n;
    int A[6],B[6],C[6];
    vector<int> input;
    vector<int> ans;


    cin >> n;
    FOR(n*6)
    {
        int a;
        cin >> a;
        input.pb(a);
    }


    int temp;
    if(n==1)
    {
        FOR(6)
        {
            ans.pb(input[i]);
        }
    }
    else if(n==2)
    {
        FOR(6)
        {
            ans.pb(input[i]);
        }
        FORA(6,6)
        {
            ans.pb(input[i]);
        }

        FORA(6,0)
        {
            FORB(6,6,j)
            {
                temp = input[i]*10 + input[j];
                ans.pb(temp);
            }
        }

        FORA(6,0)
        {
            FORB(6,6,j)
            {
                temp = input[j]*10 + input[i];
                ans.pb(temp);
            }
        }

    }
    else if(n==3)
    {
        FOR(6)
        {
            ans.pb(input[i]);
        }
        FORA(6,6)
        {
            ans.pb(input[i]);
        }
        FORA(6,12)
        {
            ans.pb(input[i]);
        }

        // 1.2
        FORA(6,0)
        {
            FORB(6,6,j)
            {
                temp = input[i]*10 + input[j];
                ans.pb(temp);
            }
        }

        FORA(6,0)
        {
            FORB(6,6,j)
            {
                temp = input[j]*10 + input[i];
                ans.pb(temp);
            }
        }

        // 2,3
        FORA(6,6)
        {
            FORB(6,12,j)
            {
                temp = input[i]*10 + input[j];
                ans.pb(temp);
            }
        }

        FORA(6,6)
        {
            FORB(6,12,j)
            {
                temp = input[j]*10 + input[i];
                ans.pb(temp);
            }
        }

        // 1,3
        FORA(6,0)
        {
            FORB(6,12,j)
            {
                temp = input[i]*10 + input[j];
                ans.pb(temp);
            }
        }

        FORA(6,0)
        {
            FORB(6,12,j)
            {
                temp = input[j]*10 + input[i];
                ans.pb(temp);
            }
        }


        //1,2,3
        FORA(6,0)
        {
            FORB(6,6,j)
            {
                FORB(6,12,k)
                {
                    temp = input[i]*100 + input[j]*10 + input[k];
                    ans.pb(temp);
                }

            }
            FORB(6,12,j)
            {
                FORB(6,6,k)
                {
                    temp = input[i]*100 + input[j]*10 + input[k];
                    ans.pb(temp);
                }

            }
        }

        FORA(6,6)
        {
            FORB(6,0,j)
            {
                FORB(6,12,k)
                {
                    temp = input[i]*100 + input[j]*10 + input[k];
                    ans.pb(temp);
                }

            }
            FORB(6,12,j)
            {
                FORB(6,0,k)
                {
                    temp = input[i]*100 + input[j]*10 + input[k];
                    ans.pb(temp);
                }

            }
        }

        FORA(6,12)
        {
            FORB(6,0,j)
            {
                FORB(6,6,k)
                {
                    temp = input[i]*100 + input[j]*10 + input[k];
                    ans.pb(temp);
                }

            }
            FORB(6,6,j)
            {
                FORB(6,0,k)
                {
                    temp = input[i]*100 + input[j]*10 + input[k];
                    ans.pb(temp);
                }

            }
        }


    }


    sort(fullV(ans));

    for(int i=1;i<1000;i++)
    {
        if (!bin_search(ans.begin(),ans.end(),i))
        {
            cout << i-1 << endl;
            return 0;
        }
    }

	return 0;
}
