#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp;
  char buffer[1024];

  fp = fopen("./data/person.csv", "r");
  if (fp == NULL) {
    printf("Could not open the file.\n");
    return 1;
  }

  while (fgets(buffer, 1024, fp) != NULL) {
    char *name = strtok(buffer, ",");
    char *age = strtok(NULL, ",");
    char *job = strtok(NULL, ",");

    if (strcmp(name, "Emily Johnson") == 0) {
      printf("%s,%s,%s", name, age, job);
      break;
    }
  }

  fclose(fp);

  return 0;
}
