#include<stdio.h>
#include<string.h>

struct Data
{
    char loc1[1000];
    char loc2[1000];
    long long int price;
    char room[1000];
    char bathroom[1000];
    char carpark[1000];
    char type[1000];
    long long int area;
    char furnish[1000];
}data[5000];

int main(){
    FILE *fp = fopen("file.csv","r");
    int count = 0;
    char title[1000];
    fgets(title,1000,fp);
    while (!feof(fp))
    {
        fscanf(fp,"%[^,],%[^,],%lld,%[^,],%[^,],%[^,],%[^,],%lld,%[^\n]\n",data[count].loc1, data[count].loc2, &data[count].price, data[count].room, data[count].bathroom, data[count].carpark,data[count].type, &data[count].area, data[count].furnish);
        count++;
    }
    int cek = 0;
    for (int i = 0; i < count-1; i++)
    {
        for (int j = 0; j < count-i-1; j++)
        {
            if (strcmp(data[j].loc1,data[j+1].loc1) > 0)
            {
                struct Data temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%-25s| %-12s | %-8lld| %-3s| %-3s| %-3s| %-10s| %-8lld| %-8s\n",data[i].loc1, data[i].loc2,data[i].price,data[i].room,data[i].bathroom,data[i].carpark,data[i].type,data[i].area, data[i].furnish);
    }
    return 0;
}
