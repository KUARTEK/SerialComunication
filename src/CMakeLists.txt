cmake_minimum_required(VERSION 3.24)

project("BasictProject")

set(SOURCES
	Main.cpp
	../include/Daire.h
	../include/Dikdortgen.h
	../include/setgetdeneme.h
	../include/Kare.h
	../include/Sekiller.h
	../include/Ucgen.h)

set(HEADERS
	../include/Daire.h
	../include/Dikdortgen.h
	../include/setgetdeneme.h
	../include/Kare.h
	../include/Sekiller.h
	../include/Ucgen.h)

add_executable("${PROJECT_NAME}" ${SOURCES})

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
install(FILES "Main.cpp" DESTINATION src)
install(FILES ${HEADERS} DESTINATION include)
