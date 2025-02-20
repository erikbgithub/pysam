#ifndef bcftools_PYSAM_H
#define bcftools_PYSAM_H

#include <stdio.h>

extern FILE * bcftools_stderr;

extern FILE * bcftools_stdout;

extern const char * bcftools_stdout_fn;

/*! set pysam standard error to point to file descriptor

  Setting the stderr will close the previous stderr.
 */
FILE * bcftools_set_stderr(int fd);

/*! set pysam standard output to point to file descriptor

  Setting the stdout will close the previous stdout.
 */
FILE * bcftools_set_stdout(int fd);

/*! set pysam standard output to point to filename

 */
void bcftools_set_stdout_fn(const char * fn);

/*! close pysam standard error and set to NULL
  
 */
void bcftools_close_stderr(void);

/*! close pysam standard output and set to NULL
  
 */
void bcftools_close_stdout(void);

int bcftools_puts(const char *s);

int bcftools_dispatch(int argc, char *argv[]);

void bcftools_exit(int status);

void bcftools_set_optind(int);

extern int bcftools_main(int argc, char *argv[]);
  
#endif
