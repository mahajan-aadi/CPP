/*#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

    char name[20];
    char RegNo[9];
    int Mark[5];
    char Grade[5];
    int sum =0;
    int total=0;
    int i=0;


    cout<<"Enter the name of student : ";cin>>name;
    cout<<"Enter the Regiser Number of the student : ";cin>>RegNo;
    i=1;
    while(i<=5)
    {
        cout<<"Enter the "<<i<<"th mark of "<<name<<"  :";
        cin>>Mark[i-1];
        total += Mark[i-1];
        switch(Mark[i-1]/10)
        {
        case 10:
        case 9:
            Grade[i-1] = 'S';
            break;
        case 8:
            Grade[i-1] = 'A';
            break;
        case 7:
            Grade[i-1] = 'B';
            break;
        case 6:
            Grade[i-1] = 'C';
            break;
        case 5:
            Grade[i-1] = 'D';
            break;
        default:
            Grade[i-1] = 'F';
        }
        i++;

    }

    //display the information

    cout<<"Name of the Student : "<<name<<"\t\t\t"<<"Register Number : "<<RegNo<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;

    i=0;
    while(i<5)
    {
        cout<<"The Mark "<<i+1<<"  :"<<setw(3)<<Mark[i]<<"\t\t\t";
        cout<<"Grade  : "<<Grade[i]<<endl;
        i++;
    }

    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"The Total Mark is :"<<total;

    return 0;

}
*/

#include <bits/stdc++.h>
using namespace std;

string trim(string);
vector<string> splitString(string);


int minOperations(int N, int M, vector<vector<int> > A) {
    // Write your code here
    int ret1=0;
    int ret2=0;
    for(int i=0,p=(N-1);i<N,p>=0;i++,p--)
    {
        for(int j=0,q=(M-1);j<M,q>=0;j++,q--)
        {
           if(i!=(N-1) && j!=(M-1))
            {
                if((A[i][j+1]==A[i][j]))
                {
                    if(A[i][j+1]==0)
                        A[i][j+1]=1;
                    else
                        A[i][j+1]=0;
                    ret1++;
                }

               if((A[i+1][j]==A[i][j]))
                {
                    if(A[i+1][j]==0)
                        A[i+1][j]=1;
                    else
                        A[i+1][j]=0;
                    ret1++;
                }
            }
           else if(j!=(M-1))
            {
                if((A[i][j+1]==A[i][j]))
                {
                    if(A[i][j+1]==0)
                        A[i][j+1]=1;
                    else
                        A[i][j+1]=0;
                    ret1++;
                }
            }
            else if(i!=(N-1))
            {
                if((A[i+1][j]==A[i][j]))
                {
                    if(A[i+1][j]==0)
                        A[i+1][j]=1;
                    else
                        A[i+1][j]=0;
                    ret1++;
                }
            }

            if(p!=0 && q!=0)
            {
                if((A[p][q-1]==A[p][q]))
                {
                    if(A[p][q-1]==0)
                        A[p][q-1]=1;
                    else
                        A[p][q-1]=0;
                    ret2++;
                }

               if((A[p-1][q]==A[p][q]))
                {
                    if(A[p-1][q]==0)
                        A[p-1][q]=1;
                    else
                        A[p-1][q]=0;
                    ret2++;
                }
            }
           else if(q!=0)
            {
                if((A[p][q-1]==A[p][q]))
                {
                    if(A[p][q-1]==0)
                        A[p][q-1]=1;
                    else
                        A[p][q-1]=0;
                    ret2++;
                }
            }
            else if(p!=0)
            {
                if((A[p-1][q]==A[p][q]))
                {
                    if(A[p-1][q]==0)
                        A[p-1][q]=1;
                    else
                        A[p-1][q]=0;
                    ret2++;
                }
            }
        }
    }
    return ret2;
  /*  if(ret1>ret2)
        return ret2;
    else
        return ret1;*/

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string inputline;

    getline(cin, inputline);
    int N = stoi(trim(inputline));

    getline(cin, inputline);
    int M = stoi(trim(inputline));

    vector<vector<int>> A(N,vector<int>(M));
    for(int i=0; i<N; i++) {
        getline(cin, inputline);
        vector<string> inputLineArr = splitString(trim(inputline));
        for (int j=0; j<M; j++) {
            A[i][j] = stoi(inputLineArr[j]);
        }
    }

    int result = minOperations(N, M, A);

    cout << result << "\n";

    return 0;
}


/* Utility functions. Don't modify these */
string trim(string str){
  if(str.empty())
      return str;

  size_t firstScan = str.find_first_not_of(' ');
  size_t first     = firstScan == string::npos ? str.length() : firstScan;
  size_t last      = str.find_last_not_of(' ');
  return str.substr(first, last-first+1);
}


vector<string> splitString(string input_string) {
  string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
      return x == y and x == ' ';
  });

  input_string.erase(new_end, input_string.end());

  while (input_string[input_string.length() - 1] == ' ') {
      input_string.pop_back();
  }

  vector<string> splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = input_string.find(delimiter);

  while (pos != string::npos) {
      splits.push_back(input_string.substr(i, pos - i));

      i = pos + 1;
      pos = input_string.find(delimiter, i);
  }

  splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

  return splits;
}

