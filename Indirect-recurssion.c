#include<stdio.h>

#include<ctype.h>
 //Input Grammer
// A-> Bb|BA
// B-> Cc
// C-> Ac
int main() {
  int i, j, k;
  char str[3][10], f;
  // Initializing match_criteria
  int match_criteria[3] = {
    0,
    0,
    0
  };
  //Taking Input Grammer from user
  printf("Enter grammar consist of 3 lines \n");
  for (i = 0; i < 3; i++) {
    scanf("%s", str[i]);
  }
  //Looking for B(2nd) in A (first)
  for (i = 0; i < strlen(str[0]); i++) {
    if (str[1][0] == str[0][i]) {
      //changing value of criteria 1
      match_criteria[0] = 1;
    }
  }
  //Looking for C(3rd) in B(2nd)
  for (i = 0; i < strlen(str[1]); i++) {
    if (str[2][0] == str[1][i]) {
      //changing value of criteria 1
      match_criteria[1] = 1;
    }
  }
  //Looking for A(1st) in C(3rd)
  for (i = 0; i < strlen(str[2]); i++) {
    if (str[0][0] == str[2][i]) {
      //changing value of criteria 1
      match_criteria[2] = 1;
    }
  }
  if (match_criteria[0] + match_criteria[1] + match_criteria[2] == 3)
  //if all criterias meet the the grammer is recurssive
  {
    printf("Grammer is Indirectly Recursive");
  } else
  //if all criterias are not meet the the grammer is non recursive
  {
    printf("Grammer is not Indirectly Recursive");
  }
}