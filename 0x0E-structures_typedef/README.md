# C - Structures, typedef
### What are structures, when, why and how to use them?
- A structure is a user defined data type available
  in C that allow to combine data items of different kinds

- We use structures when we need to group a related data items
  of different types as we can organize the data in a way that
  makes it easy to understand and manipulate. 
  Example: a record of an employee's name, age, and salary 
  would be a good candidate for a structure

- An Example of how we can use struct:
	```c
	struct struct_name
	{
		data_type variable_name;
		data_type variable_name;
		data_type variable_name;
	}
	```
	- As the data_type is like (int, float, char, etc...)
	- This is called declaring the structure (_No memory is allocated for a struct_ 
	  _until a variable of the struct type is defined_)
- We can use the struct we just declared as followed:
	```c
		struct struct_name name;
	```
	- struct name is that we used int declaration
	- name is the variable i'm gonna use to call the struct
	  it's similar to what we do in the other data types (int x _X here is the name_)
	- After creating the struct variable the code reserves a memory for the struct	
	  which include memory for the other variables in it
- What if we need to assign a value to it?
	- Here is how we can do it
		```c
		// The variable name is inside struct
		// The value is what i need to assign to it
		name.variable_name = value;
		```
	- The same thing if i want to access the struct variables
		```c
		printf("The variable is %s", name.variable_name);
		```
	- We can also use the struct as a function argument
		```c
		void print_struct(struct struct_name name)
		{
			 printf("The variable is %s", name.variable_name);
		}
		```
	- We also can access the structure pointer
		```c
			struct struct_name *ptr;
			// i have declared struct pointer and assigned the address of (name) to it
			ptr = &struct_name;
			/*
				We have two ways to access the pointer struct variable
				either this 
					ptr->variable_name;
				or this
					(*ptr).variable_name; 
			*/
		```

### What is typedef and how to use it

- **typedef** is a keyword in c that let you create a new name, or alias to
  an existing data type

- But, How can we use it?
	- Here is an example:
		```c
		typedef existing_data_type new_name;	
		```
		- existing_data_type is like (int, char, float, etc...)
		- it also can be used for structures
			```c
				typedef struct Empolyee
				{
					char *name;
					int age;
					float salary;
				} Emp;
			```
		- Now i can use the struct easier
			```c
				//Instead of using this

				struct Empolyee emp1;

				//Use this
				
				Emp emp1;
			```








	 
