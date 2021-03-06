# This file was automatically generated by bakefile.
#
# Any manual changes will be lost if it is regenerated,
# modify the source .bkl file instead if possible.

# You may define standard make variables such as CFLAGS or
# CXXFLAGS to affect the build. For example, you could use:
#
#      make CXXFLAGS=-g
#
# to build with debug information. The full list of variables
# that can be used by this makefile is:
# AR, CC, CFLAGS, CPPFLAGS, CXX, CXXFLAGS, LD, LDFLAGS, MAKE, RANLIB.

# You may also specify config=Debug|Release
# or their corresponding lower case variants on make command line to select
# the corresponding default flags values.
ifeq ($(config),debug)
override config := Debug
endif
ifeq ($(config),release)
override config := Release
endif
ifeq ($(config),Debug)
override CPPFLAGS += -DDEBUG
override CFLAGS += -g -O0
override CXXFLAGS += -g -O0
override LDFLAGS += -g
else ifeq ($(config),Release)
override CPPFLAGS += -DNDEBUG
override CFLAGS += -O2
override CXXFLAGS += -O2
else ifneq (,$(config))
$(warning Unknown configuration "$(config)")
endif
#
# Additionally, this makefile is customizable with the following
# settings:
#
#      BOOST_ROOT                         Path to the Boost installation
#      ISHIKO_PROCESS_ROOT                Path to the Ishiko Process installation
#      ISHIKO_TESTFRAMEWORK_ROOT          Path to the Ishiko TestFramework installation
#      ISHIKO_ERRORS_ROOT                 Path to the Ishiko Errors installation
#      DIPLODOCUSDB_PHYSICALSTORAGE_ROOT  Path to the DiplodocusDB installation

# Use "make RANLIB=''" for platforms without ranlib.
RANLIB ?= ranlib

CC := cc
CXX := c++

# The directory for the build files, may be overridden on make command line.
builddir = .

ifneq ($(builddir),.)
_builddir := $(if $(findstring $(abspath $(builddir)),$(builddir)),,../../)$(builddir)/../GNUmakefile/
_builddir_error := $(shell mkdir -p $(_builddir) 2>&1)
$(if $(_builddir_error),$(error Failed to create build directory: $(_builddir_error)))
endif

# ------------
# Configurable settings:
# 

# Path to the Boost installation
BOOST_ROOT ?= $(BOOST)
# Path to the Ishiko Process installation
ISHIKO_PROCESS_ROOT ?= $(ISHIKO)/Process
# Path to the Ishiko TestFramework installation
ISHIKO_TESTFRAMEWORK_ROOT ?= $(ISHIKO)/TestFramework
# Path to the Ishiko Errors installation
ISHIKO_ERRORS_ROOT ?= $(ISHIKO)/Errors
# Path to the DiplodocusDB installation
DIPLODOCUSDB_PHYSICALSTORAGE_ROOT ?= $(DIPLODOCUSDB)/PhysicalStorage

# ------------

all: $(_builddir)DiplodocusDBPageRepositoryTests

$(_builddir)DiplodocusDBPageRepositoryTests: $(_builddir)DiplodocusDBPageRepositoryTests_PageTests.o $(_builddir)DiplodocusDBPageRepositoryTests_PageCacheTests.o $(_builddir)DiplodocusDBPageRepositoryTests_main.o $(_builddir)DiplodocusDBPageRepositoryTests_PageFileRepositoryTests.o $(_builddir)DiplodocusDBPageRepositoryTests_PageRepositoryWriterTests.o $(_builddir)DiplodocusDBPageRepositoryTests_PageRepositoryReaderTests.o
	$(CXX) -o $@ $(LDFLAGS) $(_builddir)DiplodocusDBPageRepositoryTests_PageTests.o $(_builddir)DiplodocusDBPageRepositoryTests_PageCacheTests.o $(_builddir)DiplodocusDBPageRepositoryTests_main.o $(_builddir)DiplodocusDBPageRepositoryTests_PageFileRepositoryTests.o $(_builddir)DiplodocusDBPageRepositoryTests_PageRepositoryWriterTests.o $(_builddir)DiplodocusDBPageRepositoryTests_PageRepositoryReaderTests.o -L$(ISHIKO_ERRORS_ROOT)/Lib -L$(BOOST_ROOT)/lib -L$(DIPLODOCUSDB_PHYSICALSTORAGE_ROOT)/Lib -L$(ISHIKO_PROCESS_ROOT)/Lib -L$(ISHIKO_TESTFRAMEWORK_ROOT)/Lib -pthread

$(_builddir)DiplodocusDBPageRepositoryTests_PageTests.o: ../../Source/PageTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -I$(ISHIKO_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_PHYSICALSTORAGE_ROOT)/Include -I$(ISHIKO_PROCESS_ROOT)/Include -I$(ISHIKO_TESTFRAMEWORK_ROOT)/Include ../../Source/PageTests.cpp

$(_builddir)DiplodocusDBPageRepositoryTests_PageCacheTests.o: ../../Source/PageCacheTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -I$(ISHIKO_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_PHYSICALSTORAGE_ROOT)/Include -I$(ISHIKO_PROCESS_ROOT)/Include -I$(ISHIKO_TESTFRAMEWORK_ROOT)/Include ../../Source/PageCacheTests.cpp

$(_builddir)DiplodocusDBPageRepositoryTests_main.o: ../../Source/main.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -I$(ISHIKO_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_PHYSICALSTORAGE_ROOT)/Include -I$(ISHIKO_PROCESS_ROOT)/Include -I$(ISHIKO_TESTFRAMEWORK_ROOT)/Include ../../Source/main.cpp

$(_builddir)DiplodocusDBPageRepositoryTests_PageFileRepositoryTests.o: ../../Source/PageFileRepositoryTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -I$(ISHIKO_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_PHYSICALSTORAGE_ROOT)/Include -I$(ISHIKO_PROCESS_ROOT)/Include -I$(ISHIKO_TESTFRAMEWORK_ROOT)/Include ../../Source/PageFileRepositoryTests.cpp

$(_builddir)DiplodocusDBPageRepositoryTests_PageRepositoryWriterTests.o: ../../Source/PageRepositoryWriterTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -I$(ISHIKO_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_PHYSICALSTORAGE_ROOT)/Include -I$(ISHIKO_PROCESS_ROOT)/Include -I$(ISHIKO_TESTFRAMEWORK_ROOT)/Include ../../Source/PageRepositoryWriterTests.cpp

$(_builddir)DiplodocusDBPageRepositoryTests_PageRepositoryReaderTests.o: ../../Source/PageRepositoryReaderTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -I$(ISHIKO_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_PHYSICALSTORAGE_ROOT)/Include -I$(ISHIKO_PROCESS_ROOT)/Include -I$(ISHIKO_TESTFRAMEWORK_ROOT)/Include ../../Source/PageRepositoryReaderTests.cpp

clean:
	rm -f $(_builddir)*.o
	rm -f $(_builddir)*.d
	rm -f $(_builddir)DiplodocusDBPageRepositoryTests

.PHONY: all clean

# Dependencies tracking:
-include $(_builddir)*.d
