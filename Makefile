
CURDIR = $(shell pwd)
DOCKER=docker run -it -v $(CURDIR):/root/modern:rw modern-cpp
CHALLENGE?=1
CPPFILES = challenge$(CHALLENGE).cpp
run: static-analysis
		./test

static-analysis: build
		$(DOCKER) cppcheck --std=c++11 $(CPPFILES) --enable=all -q -I. --error-exitcode=1 && \
		$(DOCKER) clang-tidy $(CPPFILES) --checks="*" --warnings-as-errors="*" -- -I. -std=c++1z

build:
		$(DOCKER) g++-7 -g $(CPPFILES) -I. -std=c++17 -o test -Werror -Wall -Wextra -pedantic

docker:
		docker build -t modern-cpp .

shell:
		$(DOCKER) /bin/bash
