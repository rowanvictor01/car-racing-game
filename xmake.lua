add_requires("sfml")
set_toolchains("gcc-15")
set_languages("cxx23")
add_cxxflags("-pedantic-errors", "-Wall", "-Wextra", "-Wconversion", "-Wsign-conversion", "-g")


target("car-racing-game")
    set_kind("binary")
    add_files("src/*.cpp")
    add_includedirs("include/")
    add_packages("sfml")