#include<stdio.h>
#include<string.h>

struct Data
{
    char loc1[1000];
    char loc2[1000];
    long long int price;
    int room;
    int bathroom;
    int carpark;
    char type[1000];
    long long int area;
    char furnish[1000];
}data[5000];

struct Loc1
{
    char loc1[1000];
    int count;
}dataLoc1[5000];

struct Loc2
{
    char loc2[1000];
    int count;
}dataLoc2[5000];

struct Rooms
{
    int room;
    int count;
}dataRoom[5000];

struct BathRooms
{
    int bathroom;
    int count;
}dataBathRoom[5000];

struct CarParks
{
    int carpark;
    int count;
}dataCarPark[5000];

struct Type
{
    char type[1000];
    int count;
}dataType[5000];

struct Furnish
{
    char furnish[1000];
    int count;
}dataFurnish[5000];

void funcLoc1(int count){
    int countDistinct = 0;
    for (int i = 0; i < count; i++)
    {
        int cek = 0;
        for (int j = 0; j < countDistinct; j++)
        {
            if (strcmp(data[i].loc1,dataLoc1[j].loc1) == 0)
            {
                dataLoc1[j].count++;
                cek = 1;
                break;
            }
        }
        if (cek == 0)
        {
            strcpy(dataLoc1[countDistinct].loc1, data[i].loc1);  
            dataLoc1[countDistinct].count = 1;
            countDistinct++;
        }  
    }  
    int max = 0;
    int maxIndex = 0;
    int min = 10000;
    int minIndex = 0;

    for (int i = 0; i < countDistinct; i++)
    {
        if (dataLoc1[i].count <= min)
        {
            min = dataLoc1[i].count;
            minIndex = i;
        }
        if (dataLoc1[i].count > max)
        {
            max = dataLoc1[i].count;
            maxIndex = i;
        }
        printf("%s : %d\n",dataLoc1[i].loc1,dataLoc1[i].count);
    }
    printf("Maximum value: %s with frequency: %d\n", dataLoc1[maxIndex].loc1,dataLoc1[maxIndex].count);
    printf("Minimum value: %s with frequency: %d\n",dataLoc1[minIndex].loc1,dataLoc1[minIndex].count);
}

void funcLoc2(int count){
    int countDistinct = 0;
    for (int i = 0; i < count; i++)
    {
        int cek = 0;
        for (int j = 0; j <= countDistinct; j++)
        {
            if (strcmp(data[i].loc2,dataLoc2[j].loc2) == 0)
            {
                dataLoc2[j].count++;
                cek = 1;
                break;
            }
        }
        if (cek == 0)
        {
            strcpy(dataLoc2[countDistinct].loc2, data[i].loc2);  
            dataLoc2[countDistinct].count = 1;
            countDistinct++;
        }  
    }  
    int max = 0;
    int maxIndex = 0;
    int min = 10000;
    int minIndex = 0;

    for (int i = 0; i < countDistinct; i++)
    {
        if (dataLoc2[i].count < min)
        {
            min = dataLoc2[i].count;
            minIndex = i;
        }
        if (dataLoc2[i].count > max)
        {
            max = dataLoc2[i].count;
            maxIndex = i;
        }
        printf("%s : %d\n",dataLoc2[i].loc2,dataLoc2[i].count);
    }
    printf("Maximum value: %s with frequency: %d\n", dataLoc2[maxIndex].loc2,dataLoc2[maxIndex].count);
    printf("Minimum value: %s with frequency: %d\n",dataLoc2[minIndex].loc2,dataLoc2[minIndex].count);
}

void funcRoom(int count){
    int countDistinct = 0;
    for (int i = 0; i < count; i++)
    {
        int cek = 0;
        for (int j = 0; j < countDistinct; j++)
        {
            if (data[i].room == dataRoom[j].room)
            {
                dataRoom[j].count++;
                cek = 1;
                break;
            }
        }
        if (cek == 0)
        {
            dataRoom[countDistinct].room = data[i].room;  
            dataRoom[countDistinct].count = 1;
            countDistinct++;
        }  
    }  
    int max = 0;
    int maxIndex = 0;
    int min = 10000;
    int minIndex = 0;
            

    for (int i = 0; i < countDistinct; i++)
    {
        if (dataRoom[i].count <= min)
        {
            min = dataRoom[i].count;
            minIndex = i;
        }
        if (dataRoom[i].count > max)
        {
            max = dataRoom[i].count;
            maxIndex = i;
        }

        printf("%d : %d\n",dataRoom[i].room,dataRoom[i].count);
    }
    printf("Maximum value: %d with frequency: %d\n", dataRoom[maxIndex].room,dataRoom[maxIndex].count);
    printf("Minimum value: %d with frequency: %d\n",dataRoom[minIndex].room,dataRoom[minIndex].count);
}
void funcBathRoom(int count){
    int countDistinct = 0;
    for (int i = 0; i < count; i++)
    {
        int cek = 0;
        for (int j = 0; j < countDistinct; j++)
        {
            if (data[i].bathroom == dataBathRoom[j].bathroom)
            {
                dataBathRoom[j].count++;
                cek = 1;
                break;
            }
        }
        if (cek == 0)
        {
            dataBathRoom[countDistinct].bathroom = data[i].bathroom;  
            dataBathRoom[countDistinct].count = 1;
            countDistinct++;
        }  
    }  
    int max = 0;
    int maxIndex = 0;
    int min = 10000;
    int minIndex = 0;
            

    for (int i = 0; i < countDistinct; i++)
    {
        if (dataBathRoom[i].count <= min)
        {
            min = dataBathRoom[i].count;
            minIndex = i;
        }
        if (dataBathRoom[i].count > max)
        {
            max = dataBathRoom[i].count;
            maxIndex = i;
        }
        // printf("masuk");

        printf("%d : %d\n",dataBathRoom[i].bathroom,dataBathRoom[i].count);
    }
    printf("Maximum value: %d with frequency: %d\n", dataBathRoom[maxIndex].bathroom,dataBathRoom[maxIndex].count);
    printf("Minimum value: %d with frequency: %d\n",dataBathRoom[minIndex].bathroom,dataBathRoom[minIndex].count);
}
void funcCarPark(int count){
    int countDistinct = 0;
    for (int i = 0; i < count; i++)
    {
        int cek = 0;
        for (int j = 0; j < countDistinct; j++)
        {
            if (data[i].carpark == dataCarPark[j].carpark)
            {
                dataCarPark[j].count++;
                cek = 1;
                break;
            }
        }
        if (cek == 0)
        {
            dataCarPark[countDistinct].carpark = data[i].carpark;  
            dataCarPark[countDistinct].count = 1;
            countDistinct++;
        }  
    }  
    int max = 0;
    int maxIndex = 0;
    int min = 10000;
    int minIndex = 0;
            

    for (int i = 0; i < countDistinct; i++)
    {
        if (dataCarPark[i].count <= min)
        {
            min = dataCarPark[i].count;
            minIndex = i;
        }
        if (dataCarPark[i].count > max)
        {
            max = dataCarPark[i].count;
            maxIndex = i;
        }

        printf("%d : %d\n",dataCarPark[i].carpark,dataCarPark[i].count);
    }
    printf("Maximum value: %d with frequency: %d\n", dataCarPark[maxIndex].carpark,dataCarPark[maxIndex].count);
    printf("Minimum value: %d with frequency: %d\n",dataCarPark[minIndex].carpark,dataCarPark[minIndex].count);
}
void funcType(int count){
    int countDistinct = 0;
    for (int i = 0; i < count; i++)
    {
        int cek = 0;
        for (int j = 0; j < countDistinct; j++)
        {
            if (strcmp(data[i].type,dataType[j].type) == 0)
            {
                dataType[j].count++;
                cek = 1;
                break;
            }
        }
        if (cek == 0)
        {
            strcpy(dataType[countDistinct].type, data[i].type);  
            dataType[countDistinct].count = 1;
            countDistinct++;
        }  
    }  
    int max = 0;
    int maxIndex = 0;
    int min = 10000;
    int minIndex = 0;

    for (int i = 0; i < countDistinct; i++)
    {
        if (dataType[i].count <= min)
        {
            min = dataType[i].count;
            minIndex = i;
        }
        if (dataType[i].count > max)
        {
            max = dataType[i].count;
            maxIndex = i;
        }
        printf("%s : %d\n",dataType[i].type,dataType[i].count);
    }
    printf("Maximum value: %s with frequency: %d\n", dataType[maxIndex].type,dataType[maxIndex].count);
    printf("Minimum value: %s with frequency: %d\n",dataType[minIndex].type,dataType[minIndex].count);
}
void funcFurnish(int count){
    int countDistinct = 0;
    for (int i = 0; i < count; i++)
    {
        int cek = 0;
        for (int j = 0; j < countDistinct; j++)
        {
            if (strcmp(data[i].furnish,dataFurnish[j].furnish) == 0)
            {
                dataFurnish[j].count++;
                cek = 1;
                break;
            }
        }
        if (cek == 0)
        {
            strcpy(dataFurnish[countDistinct].furnish, data[i].furnish);  
            dataFurnish[countDistinct].count = 1;
            countDistinct++;
        }  
    }  
    int max = 0;
    int maxIndex = 0;
    int min = 10000;
    int minIndex = 0;

    for (int i = 0; i < countDistinct; i++)
    {
        if (dataFurnish[i].count <= min)
        {
            min = dataFurnish[i].count;
            minIndex = i;
        }
        if (dataFurnish[i].count > max)
        {
            max = dataFurnish[i].count;
            maxIndex = i;
        }
        printf("%s : %d\n",dataFurnish[i].furnish,dataFurnish[i].count);
    }
    printf("Maximum value: %s with frequency: %d\n", dataFurnish[maxIndex].furnish,dataFurnish[maxIndex].count);
    printf("Minimum value: %s with frequency: %d\n",dataFurnish[minIndex].furnish,dataFurnish[minIndex].count);
}
void funcArea(int count){
    long long int max = 0;
    long long int min = 1e9;
    long long int hasil = 0;
    for (int i = 0; i < count; i++)
    {
        if (data[i].area <= min)
        {
            min = data[i].area;
        }
        if (data[i].area > max)
        {
            max = data[i].area;
        }
        hasil += data[i].area;
    }
    printf("Maximum Area: %d\n", max);
    printf("Minimum Area: %d\n",min);
    printf("Average Area: %d\n",hasil/count);
}
void funcPrice(int count){
    long long int max = 0;
    long long int min = 1e9;
    long long int hasil = 0;
    for (int i = 0; i < count; i++)
    {
        if (data[i].price <= min)
        {
            min = data[i].price;
        }
        if (data[i].price > max)
        {
            max = data[i].price;
        }
        hasil += data[i].price;
    }
    printf("Maximum Price: %lld\n", max);
    printf("Minimum Price: %lld\n",min);
    printf("Average Price: %lld\n",hasil/count);
}
int main(){
    FILE *fp = fopen("file.csv","r");
    int count = 0;
    char title[1000];
    fgets(title,1000,fp);
    while (!feof(fp))
    {
        fscanf(fp,"%[^,],%[^,],%lld,%d,%d,%d,%[^,],%lld,%[^\n]\n",data[count].loc1, data[count].loc2, &data[count].price, &data[count].room, &data[count].bathroom, &data[count].carpark,data[count].type, &data[count].area, data[count].furnish);
        count++;
    }
    char opt[1000];
    printf("Apa yang anda cari?(loc1,loc2,room,bathrooms,carparks,type,furnish,area,price)\n");
    scanf("%s",opt);
    if (strcmp(opt,"loc1") == 0)
    {
        funcLoc1(count);
    }else if (strcmp(opt,"loc2") == 0)
    {
        funcLoc2(count);
    }else if (strcmp(opt,"room") == 0)
    {
        funcRoom(count);
    }else if (strcmp(opt,"bathrooms") == 0)
    {
        funcBathRoom(count);
    }else if (strcmp(opt,"carparks") == 0)
    {
        funcCarPark(count);
    }else if (strcmp(opt,"type") == 0)
    {
        funcType(count);
    }else if (strcmp(opt,"furnish") == 0)
    {
        funcFurnish(count);
    }else if (strcmp(opt,"area") == 0)
    {
        funcArea(count);
    }else if (strcmp(opt,"price") == 0)
    {
        funcPrice(count);
    }
    
    return 0;
}
