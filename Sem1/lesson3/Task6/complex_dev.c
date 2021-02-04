void complexDev(double firstRe, double firstIm, double secondRe, double secondIm, double *ansRe, double *ansIm){

  *ansRe = (firstRe * secondRe + firstIm * secondIm) / (secondRe * secondRe + secondIm * secondIm);
  *ansIm = (firstIm * secondRe - firstRe * secondIm) / (secondRe * secondRe + secondIm * secondIm);

  return;
}
