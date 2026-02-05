#include "complex_numbers.h"

complex_t c_add(complex_t a, complex_t b)
{
    double x = a.real+b.real;
    double y = a.imag+b.imag;
    return (complex_t){x,y};
}

complex_t c_sub(complex_t a, complex_t b)
{
    double x = a.real-b.real;
    double y = a.imag-b.imag;
    return (complex_t){x,y};
}

complex_t c_mul(complex_t a, complex_t b)
{
    double p = c_real(a);
    double q = c_imag(a);
    double r = c_real(b);
    double s = c_real(b);
    double x = (p*r-q*s);
    double y = (q*r+p*s);
    return (complex_t){x,y};
}

complex_t c_div(complex_t a, complex_t b)
{
    double p = c_real(a);
    double q = c_imag(a);
    double r = c_real(b);
    double s = c_real(b);
    double x = (p*r+q*s)/(r*r+s*s);
    double y = (q*r-p*s)/(r*r+s*s);
    return (complex_t){x,y};
}

double c_abs(complex_t x)
{
    double p = c_real(x);
    double q = c_imag(x);
    return sqrt(p*p + q*q);
}

complex_t c_conjugate(complex_t x)
{
    return (complex_t){x.real,-x.imag};
}

double c_real(complex_t x)
{
    return x.real;
}

double c_imag(complex_t x)
{
    return x.imag;
}

complex_t c_exp(complex_t x)
{
    return (complex_t){exp(x.real) * cos(x.imag),exp(x.real)*sin(x.imag)};
}
