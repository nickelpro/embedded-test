cmake_minimum_required(VERSION 3.24)
project(embedded CXX)

add_executable(flash src/main.cpp)
target_compile_features(flash PRIVATE cxx_std_20)
target_compile_options(flash PRIVATE
  -mmcu=atmega32u4 -Wall -Wno-overflow -fno-exceptions -fno-threadsafe-statics
  -fpermissive -ffunction-sections -fdata-sections
)

# set_target_properties(flash PROPERTIES INTERPROCEDURAL_OPTIMIZATION TRUE)
