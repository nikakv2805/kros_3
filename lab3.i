%module lab3

%{
#include "lab3.h"
%}

%include "lab3.h"

int factorial(int num);

float sqrtFloat(float num);

double sqrtDouble(double num);

%typemap(out) char * {
  int len = strlen($1);
  $result = SWIG_Python_AppendAndOwn(PyUnicode_FromStringAndSize($1, len), $1);
}

%inline %{
char *shout(const char *inp);
%}