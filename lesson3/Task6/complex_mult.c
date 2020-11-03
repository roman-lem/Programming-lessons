void complexMult(double firstRe, double firstIm, double secondRe, double secondIm, double *ansRe, double *ansIm){

  *ansRe = firstRe * secondRe - firstIm * secondIm;
  *ansIm = firstRe * secondIm + firstIm * secondRe;
  

  return;
}
