#define colCount 5
extern enum type_number { positive, negative, all };
int geometricProgression(int f, int zn, int n);
int SumOfGeometricProgression(int f, int q, int n, int sum);


int happy(char* arr);

void sort_d(int*arr, int r);
void sort_u(int*arr, int r);
void sort(int*arr, int r, int n);

int  numb(type_number tn, int start = 1, int end = 10);
double  numb(type_number tn, double start, int end);

void create(int *arr, int r, int start, int end, type_number tn);

void createMatrix(int(*arr)[colCount], int r, int start, int end, type_number tn);
void createMatrix(double(*arr)[colCount], int r, double start, int end, type_number tn);


void print_arr(int *arr, int r);

void print_arr(int *arr, int r);
void print_matrix(int(*arr)[colCount], int r);
void print_matrix(double(*arr)[colCount], int r);


void arr_d(int *arr, int arrl[][4], int r);

int sum(int num, ...);


void smooth(int *a, int r, const int *k);

int sum_ind(int(*a)[4], int r, int &col, int &row, int &max);

void sr_arif(double(*a)[colCount], int r);
void twoInOne(int(*a)[colCount], int r, int *mas);

void MasReturn(int*a, int r, int *sum, int * pr);
void MasReturn(short(*a)[colCount], short r, short*sum, int* pr);
void MasReturn(int(*a)[colCount], int r, int *sum, int * pr);
void MasReturn(double(*a)[colCount], double r, double *sum, double* pr);
int MaxMas(int* mas, int r, int max = 0, int start = 0);
int IndexOfMaxArr(int* arr, int r, int max = 0, int start = 0, int index = 0);
int SumOfPositive(int *arr, int r, bool positive = true);
int Euclid(int a, int b);



