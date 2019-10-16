#include<stdio.h>
#include<stdlib.h>
#include "functions.h"

int main(){
  struct guitar gib_les_paul;
  gib_les_paul.model = "Les Paul";
  gib_les_paul.year = 1957;

  struct guitar stratocaster;
  stratocaster.model = "Fender Stratocaster";
  stratocaster.year = 1954;

  struct guitar prs_custom24;
  prs_custom24.model = "PRS Custom 24";
  prs_custom24.year = 1984;

  struct guitar telecaster;
  telecaster.model = "Fender Telecaster";
  telecaster.year = 1950;

  struct guitar telecaster2;
  telecaster.model = "Fender Telecaster";
  telecaster.year = 1950;

  struct guitar guitars_array[] = {gib_les_paul, stratocaster, prs_custom24, telecaster, telecaster2};
  return_one(guitars_array);
  return 0;
}
