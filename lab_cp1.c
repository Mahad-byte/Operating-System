#include<stdio.h>

#include<sys/wait.h>

#include<stdlib.h>

int main() {
  pid_t A, B, D, C, E, F;
  int status;
  A = fork();
  if (A == 0) {
    printf("--C\n");
    C = fork();
    if (C == 0) {
      printf("---G\n");
      exit(0);
    } else if (C > 0) {
      wait(NULL);
    }
  } else if (A > 0) {
    printf("A\n");
    wait(NULL); //waits for C

    B = fork();
    if (B > 0) {
      printf("--B\n");
      B = fork(); //B forks E
      if (B == 0) {
        printf("---E\n");
        exit(0);
      } else {
        B = fork(); //B forks F
        if (B == 0) {
          printf("---F\n");
          exit(0);
        } else {
          waitpid(B, & status, 0); //wait for F
          B = fork();
          if (B == 0) {
            printf("---D\n");
            D = fork(); //D forks H
            if (D == 0) {
              printf("----H\n");
              exit(0);
            } else {
              waitpid(B, & status, 0); 
            }
          } else {
            waitpid(D, & status, 0);
          }
        }
      }
    }

  }

}
