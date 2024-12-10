#include "get_next_line.h"

int main()
{
	int		fd;
	char	*next_line;
	int		count;
	
	count = 1;
	fd = open("file.txt", O_RDONLY);




	/* ------------------------------------------------------------------- */
	/* uncoment this to test with a loop                                   */
	/* ------------------------------------------------------------------- */
	// while (1)
	// {
	// 	next_line = get_next_line(fd);
	// 	if (!next_line)
	// 		break ;
	// 	printf("line[%d]=>%s",count++, next_line);
	// 	free(next_line);
	// }





	/* ------------------------------------------------------------------- */
	/* uncoment this to test the function call manually, also cal it more  */
	/* than the number of new lines in your file to test leaks             */
	/* use a program that test leaks ( such as valgrind)                   */
	/* ------------------------------------------------------------------- */
	// next_line = get_next_line(fd);
	// printf("line[%d]=>%s",count, next_line);
	// count++;
	// free(next_line);
	// next_line = get_next_line(fd);
	// printf("line[%d]=>%s",count, next_line);
	// count++;
	// free(next_line);
	// next_line = get_next_line(fd);
	// printf("line[%d]=>%s",count, next_line);
	// count++;
	// free(next_line);
	// next_line = get_next_line(fd);
	// printf("line[%d]=>%s",count, next_line);
	// count++;
	// free(next_line);
	// next_line = get_next_line(fd);
	// printf("line[%d]=>%s",count, next_line);
	// count++;
	// free(next_line);
	// next_line = get_next_line(fd);
	// printf("line[%d]=>%s",count, next_line);
	// count++;
	// free(next_line);
	// next_line = get_next_line(fd);
	// printf("line[%d]=>%s",count, next_line);
	// count++;
	// free(next_line);
	// next_line = get_next_line(fd);
	// printf("line[%d]=>%s",count, next_line);
	// count++;
	// free(next_line);
	// next_line = get_next_line(fd);
	// printf("line[%d]=>%s",count, next_line);
	// count++;
	// free(next_line);


	close(fd);
	printf("\nend of file is reched");
}