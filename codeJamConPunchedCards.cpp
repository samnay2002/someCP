// this is my solution but its not accepted 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int T,r,c;
//     cin>>T;
//     for(int k=0;k<T;k++)
//     {
//         int a, b;
//         cin>>a>>b;
//         r=a;
//         c=b;
//         cout<<"Case #"<<k+1<<":"<<endl;
//         for (int i=0;i<(r*2)+1;i++)
//         {
//             for (int j=0;j<c;j++)
//             {
//                 if(i%2==0)
//                 {
//                     if(i==0 && j==0)
//                     {
//                         cout<<" . . +";
//                     }
//                     else if (j==0)
//                     {
//                         cout<<" + _ +";
//                     }
//                     else
//                     {
//                         cout<<" _ +";
//                     }
//                 }
//                 else
//                 {
//                     if(i==1 && j==0)
//                     {
//                         cout<<" . . |";
//                     }
//                     else if (j==0)
//                     {
//                         cout<<" | . |";
//                     }
//                     else
//                     {
//                         cout<<" . |";
//                     }                   
//                 }
//             }
//             cout<<endl;
//         }
//         cout<<endl<<endl;
//     }

//     return (0);
// }


// its the another perticipents solution in code jam
#include <iostream>
using namespace std;

int T, R, C;

int main() {
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        scanf("%d%d", &R, &C);
        printf("Case #%d:\n", tc);
        for (int i = 0; i < R * 2 + 1; i++) {
            for (int j = 0; j < C * 2 + 1; j++) {
                if (i == 0 && j == 0) {
                    printf(".");
                } else if (i + j == 1) {
                    printf(".");
                } else if (i % 2 == 0 && j % 2 == 0) {
                    printf("+");
                } else if (i % 2 == 1 && j % 2 == 0) {
                    printf("|");
                } else if (i % 2 == 0 && j % 2 == 1) {
                    printf("-");
                } else {
                    printf(".");
                }
            }
            printf("\n");
        }
    }
}