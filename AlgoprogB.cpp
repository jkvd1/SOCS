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
    char search[1000];
    char col[1000];
    printf ("Apa yang ingin kalian cari?\n");
    scanf("%s",search);
    printf("Lokasi mana yang ingin dipilih?\n");
    scanf("%s",col);
    int cek = 0;
    
    for (int i = 0; i < count; i++)
    {
        if (strcmp(col,"loc1") == 0)
        {
            if (strstr(data[i].loc1,search))
            {
                cek = 1;
                printf("%-25s| %-12s | %-8lld| %-3s| %-3s| %-3s| %-10s| %-8lld| %-8s\n",data[i].loc1, data[i].loc2,data[i].price,data[i].room,data[i].bathroom,data[i].carpark,data[i].type,data[i].area, data[i].furnish);
            }   
        }else if (strcmp(col,"loc2") == 0)
        {
            if (strstr(data[i].loc2,search))
            {
                cek = 1;
                printf("%-25s| %-12s | %-8lld| %-3s| %-3s| %-3s| %-10s| %-8lld| %-8s\n",data[i].loc1, data[i].loc2,data[i].price,data[i].room,data[i].bathroom,data[i].carpark,data[i].type,data[i].area, data[i].furnish);
            }   
        }else if (strcmp(col,"room") == 0)
        {
            if (strstr(data[i].room,search))
            {
                cek = 1;
                printf("%-25s| %-12s | %-8lld| %-3s| %-3s| %-3s| %-10s| %-8lld| %-8s\n",data[i].loc1, data[i].loc2,data[i].price,data[i].room,data[i].bathroom,data[i].carpark,data[i].type,data[i].area, data[i].furnish);
            }   
        }else if (strcmp(col,"bathroom") == 0)
        {
            if (strstr(data[i].bathroom,search))
            {
                cek = 1;
                
                printf("%-25s| %-12s | %-8lld| %-3s| %-3s| %-3s| %-10s| %-8lld| %-8s\n",data[i].loc1, data[i].loc2,data[i].price,data[i].room,data[i].bathroom,data[i].carpark,data[i].type,data[i].area, data[i].furnish);
            }   
        }else if (strcmp(col,"carpark") == 0)
        {
            if (strstr(data[i].carpark,search))
            {
                cek = 1;

                printf("%-25s| %-12s | %-8lld| %-3s| %-3s| %-3s| %-10s| %-8lld| %-8s\n",data[i].loc1, data[i].loc2,data[i].price,data[i].room,data[i].bathroom,data[i].carpark,data[i].type,data[i].area, data[i].furnish);
            }   
        }else if (strcmp(col,"type") == 0)
        {
            if (strstr(data[i].type,search))
            {
                cek = 1;

                printf("%-25s| %-12s | %-8lld| %-3s| %-3s| %-3s| %-10s| %-8lld| %-8s\n",data[i].loc1, data[i].loc2,data[i].price,data[i].room,data[i].bathroom,data[i].carpark,data[i].type,data[i].area, data[i].furnish);
            }   
        }else if (strcmp(col,"furnish") == 0)
        {
            if (strstr(data[i].furnish,search))
            {
                cek = 1;

                printf("%-25s| %-12s | %-8lld| %-3s| %-3s| %-3s| %-10s| %-8lld| %-8s\n",data[i].loc1, data[i].loc2,data[i].price,data[i].room,data[i].bathroom,data[i].carpark,data[i].type,data[i].area, data[i].furnish);
            }   
        }
        
    }
    if (cek == 0)
    {
        printf("Data searched doesn't exist in the record");
    }
    
    return 0;
}
