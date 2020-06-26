SUBDIRS = po
bin_PROGRAMS = test
man_MANS = man/test.1
test_SOURCES = src/main.c src/sub.c
AM_CPPFLAGS = -I$(top_srcdir)/include -DLOCALEDIR='"$(localedir)"' -DPACKAGE='"test"'
