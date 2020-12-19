#include "get_next_line.h"
#include <stdio.h>

void	put_GNL(char *file, int (*f)(int, char **)){
	char *line;
	int fd;

	line = NULL;
	fd = open(file, O_RDONLY);
	// fd = open("test00.txt", O_RDONLY);

	int ret ,i = 0;
	printf("===%s start===\n", file);
	while ((ret = f(fd, &line)) > 0)
	{
		printf("line %2d, ret:%2d, %s\n", ++i, ret, line);
	}
	printf("line %2d, ret:%2d, %s\n", ++i, ret, line);
	close(fd);
	printf("===%s end=====\n\n", file);
}

#include <time.h>
int main(){

// =======start error management 1==========

//     gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c main.c && ./a.out

		// printf("\n====start error management 1====\n\n");
		// char *line;
		// int ret;
		// line = NULL;
		// ret = get_next_line(42, &line);
		// printf("fd=%d, ret:%2d, %s\n", 42, ret, line);
		// printf("\n====end error management 1====\n\n");

// ======end error management 1=======

// =======start error management 2==========

//     gcc -Wall -Wextra -Werror -D BUFFER_SIZE=1000000000000 get_next_line.c get_next_line_utils.c main.c && ./a.out

		// printf("\n====start error management 2====\n\n");
		// char *line;
		// int ret;
		// line = NULL;
		// int fd = open("test00.txt", O_RDONLY);
		// ret = get_next_line(fd, &line);
		// printf("fd00 1st, ret:%2d, %s\n", ret, line);
		// printf("\n====end error management 2====\n\n");

// ======end error management 2=======


// =======start Testing 1==========


//	Large BUFFER_SIZE (>1024)
//	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=3000 get_next_line.c get_next_line_utils.c main.c && ./a.out

//	Small BUFFER_SIZE (< 8, and 1)

//	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=6 get_next_line.c get_next_line_utils.c main.c && ./a.out
//	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=1 get_next_line.c get_next_line_utils.c main.c && ./a.out
//	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=4 get_next_line.c get_next_line_utils.c main.c && ./a.out
//	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=5 get_next_line.c get_next_line_utils.c main.c && ./a.out
//	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=3 get_next_line.c get_next_line_utils.c main.c && ./a.out

		// printf("\n====start testing 1====\n\n");
		// char *line;
		// int ret;
		// line = NULL;
		// int fd = open("test00.txt", O_RDONLY);
		// ret = get_next_line(fd, &line);
		// printf("fd00 1st, ret:%2d, %s\n", ret, line);

		// printf("\n====end testing 1====\n");

// =======end Testing 1==========


// =======start Testing 2(standard input)==========

		// printf("\n====start testing 2(stdin)====\n");
		// char *line;
		// int fd = 0;///////stdin == 0
		// int ret;
		// while ((ret = get_next_line(fd, &line)) > 0)
		// {
		// 	printf("ret:%d, %s\n", ret, line);
		// }
		// printf("ret:%d, %s\n", ret, line);
		// printf("\n====end testing 2====\n");

// =======end Testing 2==========


// =======start Testing 3==========

// printf("\n\n\n====start testing 3====\n\n\n");

//		printf("\n");
		// put_GNL("test30.txt", get_next_line);// 2k+characters
		// put_GNL("test31.txt", get_next_line);// 3characters
		// put_GNL("test32.txt", get_next_line);// 1character
		// put_GNL("test33.txt", get_next_line);// emptyline
//		printf("\n\n\n====end testing 3====\n\n\n");

// =======end Testing 3==========


// =======bonus test==========

	// printf("\n===bonus test===\n");
	// char *line;
	// int ret;
	// line = NULL;
	// int fd00 = open("test00.txt", O_RDONLY);
	// int fd01 = open("test01.txt", O_RDONLY);
	// int fd02 = open("test02.txt", O_RDONLY);
	// printf("fd00 : %d\n", fd00);
	// printf("fd01 : %d\n", fd01);
	// printf("fd02 : %d\n\n", fd02);

	// ret = get_next_line(fd00, &line);
	// printf("fd00      1st, ret:%2d, %s\n", ret, line);
	// ret = get_next_line(fd01, &line);
	// printf("fd01      1st, ret:%2d, %s\n", ret, line);
	// ret = get_next_line(fd00, &line);
	// printf("fd00      2nd, ret:%2d, %s\n", ret, line);
	// ret = get_next_line(fd02, &line);
	// printf("fd02      1st, ret:%2d, %s\n", ret, line);


	// ret = get_next_line(10, &line);//fd'10' is not existing
	// printf("non-exist 1st, ret:%2d, %s\n", ret, line);
	// ret = get_next_line(fd02, &line);
	// printf("fd02      2st, ret:%2d, %s\n", ret, line);
	// printf("===bonus test end===\n\n");

// ======end file test=======






// =======file test==========
	// printf("\n");
	// put_GNL("test00.txt", get_next_line);// normal file
	// put_GNL("test01.txt", get_next_line);// single character 
	// put_GNL("test02.txt", get_next_line);// only isspace
	// put_GNL("test03.txt", get_next_line); // super huge file
	// put_GNL("test04.txt", get_next_line); // empty file
	// put_GNL("test05.txt", get_next_line); // small file
	// put_GNL("test06.txt", get_next_line); // 3000 character line
	// put_GNL("test07.txt", get_next_line); 
	// put_GNL("test08.txt", get_next_line); 
// ======end file test=======




// ======= time measures =========
	// clock_t t1, t2;
	// char *line;
	// int fd;

	// fd = open("test03.txt", O_RDONLY);
	// t1 = clock();
	// get_next_line(fd, &line);
	// t2 = clock();
	// close(fd);
	// printf("time : %f\n", (double)(t2 - t1) / CLOCKS_PER_SEC);
// ===== end time measures =======

	// while (1);
}