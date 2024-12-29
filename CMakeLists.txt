cmake_minimum_required(VERSION 3.8)

PROJECT(dmdisablewarnning)

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
INCLUDE(cmake/ModuleImport.cmake)
INCLUDE(cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()
ModuleSetWinCompilerFlags()

ModuleImportAll("thirdparty")
InterfaceImport("dmdisablewarnning" "include" "")
ExeImport("test" "dmdisablewarnning")

#ADD_CUSTOM_COMMAND(
#TARGET dmdisablewarnningtest
#PRE_BUILD
#COMMAND ${CMAKE_COMMAND} -E copy_if_different
#${CMAKE_CURRENT_SOURCE_DIR}/config/test.csv
#$<TARGET_FILE_DIR:dmdisablewarnningtest>
#)

#INSTALL(DIRECTORY include/ DESTINATION include)
#INSTALL(TARGETS dmdisablewarnning
#        RUNTIME DESTINATION bin
#        LIBRARY DESTINATION lib
#        ARCHIVE DESTINATION lib)

#SET(DMDISABLEWARNNING_LIBS "dmdisablewarnning")
#MARK_AS_ADVANCED(${DMDISABLEWARNNING_LIBS})