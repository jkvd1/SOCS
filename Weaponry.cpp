#include <stdio.h>

struct senjata{
	char nama[101];
	int damage;
};

void bubble(struct senjata sjt[], int tc) {
    for (int i = 0; i < tc-1; i++) {
        for (int j = 0; j < tc-i-1; j++) {
            if (sjt[j].damage > sjt[j+1].damage) {
                struct senjata temp = sjt[j];
                sjt[j] = sjt[j+1];
                sjt[j+1] = temp;
            }
        }
    }
}


int main() {
	int tc;
	scanf("%d", &tc);
	
	struct senjata sjt[tc];
	
	for (int i = 1; i < tc; i++) {
        scanf("%s %d\n", sjt[i].nama, &sjt[i].damage);
    	}
	
	bubble(sjt,tc);
	
	for (int i = 1; i < tc; i++) {
        printf("%s %d\n", sjt[i].nama, sjt[i].damage);
    	}
	
	
	return 0;
}

