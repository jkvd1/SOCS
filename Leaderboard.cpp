#include <stdio.h>
#include <string.h>

typedef struct Data{
	char nama[22];
	int skor;
}data[12];

void bubble(struct Data data[], int tc) {
	for (int i = 0; i < tc-1; i++) {
		for (int j = 0; j < tc-i-1; j++) {
			if (data[j].skor < data[j+1].skor || (data[j].skor == data[j+1].skor && strcmp(data[j].nama, data[j+1].nama) > 0)) {
struct Data temp = data[j];
data[j] = data[j+1];
data[j+1] = temp;
}
}
}
}

int main() {
	int tc;
	scanf("%d", &tc);
	struct Data data[tc];

	for (int i = 1; i < tc; i++) {
    	scanf("%s %d\n", data[i].nama, &data[i].skor);
	}

	bubble(data,tc);

	for (int i = 1; i < tc; i++) {
    	int j = i;
    	while (j < tc && data[j].skor == data[i].skor && strcmp(data[j].nama, data[i].nama) == 0) 
	j++;
    	printf("%s [%d]\n", data[i].nama, data[i].skor);
    	i = j-1;
}

return 0;
}
