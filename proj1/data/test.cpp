#include<iostream>

using namespace std;


int main()
{
    FILE *fp = fopen("default.txt", "w");
    fprintf(fp, "500000\n");
    for(int  i = 0; i < 500000; i++)
    {
        fprintf(fp, "%d %d %d\n", i, i, 500000 - i);
    }

    fclose(fp);

}
