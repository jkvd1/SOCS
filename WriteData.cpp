#include <stdio.h>

int main() {
	char name[1000];
	long long int NIM;
	float GPA;
	FILE *fp;
	
	char path[100]="C://Users//renda//Documents/Binus Docs//AlgoProg//record.txt";
	
	fp=fopen(path,"w");
	
	fprintf(fp,"DATA NILAI SISWA\n");
	
	if(fp==NULL){
		printf("Error");
		return 0;
	}
	
	long int tc;
	int counter=1;
	printf("jumlah mahasiswa:");
	scanf("%ld",&tc);
	
	while(counter<=tc){
		printf("mahasiswa ke %d\n",counter);
		printf("Nama:");
		scanf("%s",name);
		printf("NIM:");
		scanf("%lld",&NIM);
		printf("GPA:");
		scanf("%f",&GPA);
		fprintf(fp,"%d.\nNama	: %s\nNIM	: %lld\nGPA	: %0.1f\n",counter,name,NIM,GPA);
		counter++;
	}
	fclose(fp);
	
	return 0;
}

