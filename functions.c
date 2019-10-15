#include<time.h>

struct guitar {char *model; int year;};


int return_one(){
  struct guitar gib_les_paul;
  gib_les_paul.model = "Les Paul";
  gib_les_paul.year = 1957;

  struct guitar stratocaster;
  stratocaster.model = "Fender Stratocaster"
  stratocaster.year = 1954;

  struct guitar prs_custom24;
  prs_custom24.model = "PRS Custom 24"
  prs_custom24.year = 1984

  struct guitar telecaster;
  telecaster.model = "Fender Telecaster"
  telecaster.year = 1950
  srand(time(NULL));
  return rand();
}
