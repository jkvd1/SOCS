#include <stdio.h>
#include <string.h>

struct Data {
  char num[101];
  int beauty;
};

void bubble(struct Data data[], int tc) {
  for (int i = 0; i < tc - 1; i++) {
    for (int j = 0; j < tc - i - 1; j++) {
      if (data[j].beauty > data[j + 1].beauty || 
	 (data[j].beauty == data[j + 1].beauty && strcmp(data[j].num, data[j + 1].num) > 0)) {
        struct Data temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }
}

int summ(char num[]) {
  int sum = 0;
  for (int i = 0; i < strlen(num); i++) {
    sum += (num[i] - '0');
  }
  return sum;
}

int main() {
  int tc, size;
  scanf("%d %d", & tc, & size);
  struct Data data[tc];

  for (int i = 0; i < tc; i++) {
    scanf("%s", data[i].num);
    data[i].beauty = summ(data[i].num);
  }

  bubble(data, tc);

  for (int i = 0; i < tc; i++) {
    printf("%s\n", data[i].num);
  }

  return 0;
}
