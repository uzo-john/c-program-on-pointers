#include <stdio.h>
/**
 * how to creat a pointer variable
 */

int main () {
	int age = 25;
	printf("%p", &age);  //&age is the address in which the value is stored in
	return 0;
}


output:
0x7ffc875fe0ee

or

int main ()
{
	int age = 39;
	printf("Address: %p", &age);
	return 0;
}

Output:
Address: 0x7ffc875fe0ee

/**
 * using pointers variables also gives the same thing
 * ptr
 */
int main ()
{
	int age = 34;
	printf("%p", ptr);
	return 0;
}

Output:
0x7ffc875fe0ee#include <stdio.h>
/**
 * how to creat a pointer variable
 */

int main () {
	int age = 25;
	printf("%p", &age);  //&age is the address in which the value is stored in
	return 0;
}


output:
0x7ffc875fe0ee

or

int main ()
{
	int age = 39;
	printf("Address: %p", &age);
	return 0;
}

Output:
Address: 0x7ffc875fe0ee

/**
 * using pointers variables also gives the same thing
 * ptr
 */
int main ()
{
	int age = 34;
	printf("%p", ptr);
	return 0;
}

Output:
0x7ffc875fe0ee
