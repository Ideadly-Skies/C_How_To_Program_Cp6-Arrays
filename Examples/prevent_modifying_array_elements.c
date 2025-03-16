// in function tryToModifyArray, array b is const, so it cannot be
// used to modify its array argument in the caller
// void tryToModifyArray(const int b[]){
//     b[0] /= 2;
//     b[1] /= 2;
//     b[2] /= 2;
// }