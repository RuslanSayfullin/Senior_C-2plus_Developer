// Порядок выполнения операций
char abc[] = "abc";
char xyz[] = "xyz";
char *p = abc;
printf("%c", ++*p);
p = xyz;
printf("%c", *p++);