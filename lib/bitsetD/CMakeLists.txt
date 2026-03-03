
#add_executable(bitsetD_h bitsetD.h) хедера так не пишем. они в инклюдах
add_executable(bitsetD_cpp bitsetD.cpp)
add_library(bitsetD STATIC
        bitsetD.h bitsetD.cpp)
