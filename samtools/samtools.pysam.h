#ifndef samtools_PYSAM_H
#define samtools_PYSAM_H

#include <stdio.h>

extern FILE * samtools_stderr;

extern FILE * samtools_stdout;

extern const char * samtools_stdout_fn;

/*! set pysam standard error to point to file descriptor

  Setting the stderr will close the previous stderr.
 */
FILE * samtools_set_stderr(int fd);

/*! set pysam standard output to point to file descriptor

  Setting the stdout will close the previous stdout.
 */
FILE * samtools_set_stdout(int fd);

/*! set pysam standard output to point to filename

 */
void samtools_set_stdout_fn(const char * fn);

/*! close pysam standard error and set to NULL
  
 */
void samtools_close_stderr(void);

/*! close pysam standard output and set to NULL
  
 */
void samtools_close_stdout(void);

int samtools_puts(const char *s);

int samtools_dispatch(int argc, char *argv[]);

void samtools_exit(int status);

void samtools_set_optind(int);

extern int samtools_main(int argc, char *argv[]);
  
#endif
