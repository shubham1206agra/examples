#pragma cling load("/srv/conda/envs/notebook/lib/libarmadillo.so")
#pragma cling load("/code/build/lib/libmlpack.so")
#pragma cling load("/srv/conda/envs/notebook/lib/libomp.so")
#pragma cling load("/srv/conda/envs/notebook/lib/libpython3.so")
#pragma cling add_include_path("/srv/conda/envs/notebook/include/python3.7m/")

#define ARMA_DONT_USE_WRAPPER
