include_directories(${PROJECT_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_library(mylib SHARED
    main.cpp
    Serial.cpp
)

set_target_properties(mylib PROPERTIES OUTPUT_NAME "shared")


set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)


set(LIBPATHS ${LIBRARY_OUTPUT_PATH}/lib.so)


add_executable(main main.cpp)

target_link_libraries(main ${LIBPATHS})