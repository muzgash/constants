include_directories(inc)
add_library(pi STATIC inc/libreriaPhi.h src/libreriaPhi.c)
add_executable(constants src/programaPhi.c)
target_link_libraries(constants -static pi m)
install(TARGETS pi DESTINATION ./lib)
install(TARGETS constants DESTINATION ./bin)

