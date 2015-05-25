include_directories(inc)
add_library(pi STATIC inc/libreriaPi.h src/libreriaPi.c)
add_library(Euler STATIC inc/libreriaEuler.h src/libreriaEuler.c)
add_executable(constants src/programa.c)
add_executable(EulerMas src/programaEuler.c)
target_link_libraries(constants -static pi m)
target_link_libraries(EulerMas -static Euler m)
install(TARGETS pi DESTINATION ./lib)
install(TARGETS Euler DESTINATION ./lib)



