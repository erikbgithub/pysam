#ifndef @pysam@_PYSAM_H
#define @pysam@_PYSAM_H

#include <stdio.h>

extern FILE * @pysam@_stderr;

extern FILE * @pysam@_stdout;

extern const char * @pysam@_stdout_fn;

/*! set pysam standard error to point to file descriptor

  Setting the stderr will close the previous stderr.
 */
FILE * @pysam@_set_stderr(int fd);

/*! set pysam standard output to point to file descriptor

  Setting the stdout will close the previous stdout.
 */
FILE * @pysam@_set_stdout(int fd);

/*! set pysam standard output to point to filename

 */
void @pysam@_set_stdout_fn(const char * fn);

/*! close pysam standard error and set to NULL
  
 */
void @pysam@_close_stderr(void);

/*! close pysam standard output and set to NULL
  
 */
void @pysam@_close_stdout(void);

int @pysam@_puts(const char *s);

int @pysam@_dispatch(int argc, char *argv[]);

void @pysam@_exit(int status);

void @pysam@_set_optind(int);

extern int @pysam@_main(int argc, char *argv[]);
  
#endif
