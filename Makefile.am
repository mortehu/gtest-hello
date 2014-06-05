check_PROGRAMS = foo_test
noinst_LTLIBRARIES = libgtest.la

AM_CXXFLAGS = -Wall

ACLOCAL_AMFLAGS = -I m4

libgtest_la_SOURCES = \
  gtest/src/gtest-all.cc \
  gtest/src/gtest-death-test.cc \
  gtest/src/gtest-filepath.cc \
  gtest/src/gtest-internal-inl.h \
  gtest/src/gtest-port.cc \
  gtest/src/gtest-printers.cc \
  gtest/src/gtest-test-part.cc \
  gtest/src/gtest-typed-test.cc \
  gtest/src/gtest.cc \
  gtest/src/gtest_main.cc
libgtest_la_CPPFLAGS = -Igtest
libgtest_la_LIBADD = -lpthread

foo_test_SOURCES = foo_test.cc
foo_test_LDADD = libgtest.la

TESTS = $(check_PROGRAMS)
