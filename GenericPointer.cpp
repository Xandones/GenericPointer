#include <iostream>

int main()
{
	int Number{ 4890 };
	char Letter{ 'X' };
	void *Gptr; // This is how we declare a generic pointer. It can receive any type of variable address.

	Gptr = &Number; // A generic pointer is set the same way as an ordinary pointer.
	printf("The value of the variable Number using the pointer Gptr is %d.\n", *(int*)Gptr);
	/*
	* When we want to use the value of a variable pointed by a pointer we need to indicate the variable type.
	* If we don't use *(variable type*) it won't be possible to access the variable pointed by this pointer.
	*/
	*(int*)Gptr = Number + 110; // We also need to cast the pointer before doing operations with it.
	printf("The value of the variable Number summed to 110 is %d.\n", *(int*)Gptr);
	Gptr = &Letter;
	printf("The value of the variable Letter using the pointer Gptr  is %c.\n", *(char*)Gptr);
	// Since the variable pointed isn't integer anymore we need to cast it to the new type: char.
	printf("The letter was %c.\n", *(char*)Gptr);
	printf("And now (10 positions above in ASCII table) is %c.", *(char*)Gptr = Letter + 10);
}