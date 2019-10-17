struct guitar {char *model; int year;};
struct guitar return_one(struct guitar *guitars, int length);
void print_guitar(struct guitar toprint);
struct guitar * modify_guitar(struct guitar *p_guitar, char *new_model, int new_name);
