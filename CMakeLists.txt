include_directories(inc)
add_library(pi STATIC inc/libreriaPi.h src/libreriaPi.c)
add_executable(constants src/programa.c)
target_link_libraries(constants -static pi m)
install(TARGETS pi DESTINATION ./lib)
install(TARGETS constants DESTINATION ./bin)

