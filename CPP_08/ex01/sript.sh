#!/bin/bash

touch main10000.cpp

printf "#include \"Span.hpp\"\n#include <list>\n#include <cstdlib>\n#include <ctime>\n\nint main(){\n	Span sp = Span(10001)\n" > main10000.cpp

# Añadir números aleatorios al objeto Span
for i in $(seq 1 10000); do
    printf "	sp.addNumber($((RANDOM % 10000)));\n" >> main10000.cpp
done
printf "	return 0\n}\n" >> main10000.cpp
