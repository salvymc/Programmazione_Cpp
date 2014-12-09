#include <iostream>
using namespace std;
int main()
{
int V1[5] = {1,3,5,7,9};
int V2[5] = {2,4,6,8,10};
int V3[10];
int i;
int j;
int app;
int i_v1;
int i_v2;
int i_v3;
int printV3=0;

for (i_v3=0;i_v3<5;i_v3++){
    for (i_v1=0;i_v1<5;i_v1++){
        V3[i_v3] = V1[i_v1];
        i_v3++;
    }
}

for (i_v3=5;i_v3<10;i_v3++){
    for (i_v2=0;i_v2<5;i_v2++){
        V3[i_v3] = V2[i_v2];
        i_v3++;
    }
}

for (i=0;i<10;i++){
    for (j=0;j<10;j++){
        if (V3[i] < V3[j]){
            app = V3[i];
            V3[i] = V3[j];
            V3[j] = app;
        }
    }
}

cout << "Array Merge completato " <<endl;
cout <<endl;

while(printV3 < 10){
   cout << "V3"<<"["<<printV3<<"]"<<":"<<V3[printV3] <<endl;
   printV3++;
}
}
