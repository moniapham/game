PROGRAM=piece
CXX_SRCS =piece.cc
CXXLIBS = -lX11 -lm
CCC_OBJS = ccc_x11.o ccc_shap.o ccc_time.o 
CCC_FILESDIR = /home/tpham3/cccfiles


CCC_OBJS2 = $(CCC_OBJS:%=$(CCC_FILESDIR)/%)

CXXINCLUDEPATHS = -I$(CCC_FILESDIR) -I/opt/X11/include

CXX = g++
CC = $(CXX)
LDFLAGS = -g -pipe -L/usr/X11R6/lib $(CXX_LIBS)
CXXFLAGS = -g -pipe -Wall $(CXXINCLUDEPATHS)

OBJS = $(CXX_SRCS:.cc=.o)

DEMANGLER = c++filt

$(PROGRAM) : depend $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) $(CCC_OBJS2) $(CXXLIBS) -o $(PROGRAM) 2>&1 \
             | $(DEMANGLER)

clean:
	/bin/rm -f *.o $(PROGRAM) *~ core \#*\#

depend:
	$(CXX) -MM $(CXX_SRCS) $(CXXINCLUDEPATHS) > .depend.mk

###
include .depend.mk
