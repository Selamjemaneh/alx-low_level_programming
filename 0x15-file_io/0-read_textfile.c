#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of the letters printed
 *
 * Return: numbers of letters ptinred. It fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ab;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	ab = open(filename, O_RDONLY);

	if (ab == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(ab, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(ab);

	free(buf);

	return (nwr);
}
