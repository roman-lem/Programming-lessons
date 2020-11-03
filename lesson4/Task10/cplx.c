#include "cplx.h"

//--------------------------------------

struct cplx cplxSum(struct cplx first, struct cplx second){

  struct cplx ans = {0, 0};

  ans.re = first.re + second.re;
  ans.im = first.im + second.im;

  return ans;
}

//--------------------------------------

struct cplx cplxDiff(struct cplx first, struct cplx second){

  struct cplx ans = {0, 0};

  ans.re = first.re - second.re;
  ans.im = first.im - second.im;

  return ans;
}

//--------------------------------------

struct cplx cplxMult(struct cplx first, struct cplx second){

  struct cplx ans = {0, 0};

  ans.re = first.re * second.re - first.im * second.im;
  ans.im = first.im * second.re + first.im * second.re;

  return ans;
}

//--------------------------------------

struct cplx cplxDev(struct cplx first, struct cplx second){

  struct cplx ans = {0, 0};

  ans.re = (first.re * second.re + first.im * second.im) / (second.re * second.re + second.im * second.im);
  ans.im = (first.im * second.re - first.re * second.im) / (second.re * second.re + second.im * second.im);

  return ans;
}
