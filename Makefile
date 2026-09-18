CXX ?= g++
CXXFLAGS ?= -std=c++17 -O2 -Wall -Wextra -Wpedantic

SOLUTIONS := Ball EenyMeeny Endian FancyFrames FastFoodPrizes Marko SortofSorting TemperatureConfusion TrackSmoothing
TARGETS := $(addprefix build/,$(SOLUTIONS))

.PHONY: all check clean

all: $(TARGETS)

check: clean all
	@printf '\nBuilt %s solutions successfully.\n' "$(words $(SOLUTIONS))"

build/%: %.cpp | build
	$(CXX) $(CXXFLAGS) $< -o $@

build:
	mkdir -p $@

clean:
	rm -rf build
