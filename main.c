#include<stdio.h>
#include<stdlib.h>
#include "functions.h"

int main(){

  struct guitar gib_les_paul;
  gib_les_paul.model = "Les Paul";
  gib_les_paul.year = 1957;
  int n = 0;

  struct guitar stratocaster;
  stratocaster.model = "Fender Stratocaster";
  stratocaster.year = 1954;
  n++;

  struct guitar prs_custom24;
  prs_custom24.model = "PRS Custom 24";
  prs_custom24.year = 1984;
  n++;

  struct guitar telecaster;
  telecaster.model = "Fender Telecaster";
  telecaster.year = 1950;
  n++;

  struct guitar telecaster2;
  telecaster.model = "Fender Telecaster";
  telecaster.year = 1950;
  n++;

  struct guitar guitars_array[] = {gib_les_paul, stratocaster, prs_custom24, telecaster, telecaster2};

  /******************** 
  Test return_one() and print_guitar()
  ********************/
  printf("Testing random guitar picker:\n");
  struct guitar chosen = return_one(guitars_array, n);
  print_guitar(chosen);
  printf("--------------------\n");

  /******************** 
  Test modify_guitar() and print_guitar()
  ********************/
  printf("Testing guitar modifier:\nExpected results: {\"Fender Stratocaster\", 1954} => {\"Acoustic\", 1900}\n");

  // Print original
  printf("\t[original]\n");
  print_guitar(stratocaster);

  // Modify original
  struct guitar *p_stratocaster = &stratocaster;
  modify_guitar(p_stratocaster, "Acoustic", 1900);

  // Print modified original
  printf("\t[modified]\n");
  print_guitar(stratocaster);

  return 0;
}
