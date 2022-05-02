######################################################################
# Project: TMVA - Toolkit for Multivariate Data Analysis             #
# Code   : Example usage for TMVA analyses                           #
###################################################################### 

-include Makefile.inc


BINS = TmvaTrainer \
		GenPythiaData \


CXX = g++
CCFLAGS = $(shell root-config --cflags) -ggdb 

PYTHIA8_INCLUDE=-I/home/tmengel/pythia8307/include
PYTHIA8_LIB=-L/home/tmengel/pythia8307/lib -Wl,-rpath,/home/tmengel/pythia8307/lib
CXX_PYTHIA= $(PYTHIA8_INCLUDE) $(PYTHIA8_LIB) -lpythia8 -ldl


LD = g++
LDFLAGS = 

LIBS = $(shell root-config --libs) -lMLP -lMinuit -lTreePlayer -lTMVA -lTMVAGui -lXMLIO  -lMLP -lm


default : $(BINS)

$(BINS): % : %.C 
	@echo -n "Building $@ ... "
	$(CXX)  $(CCFLAGS) $< $(LIBS) $(CXX_PYTHIA) -o $@
	@echo "Done"


clean: 
	rm -f *.o	$(BINS)

