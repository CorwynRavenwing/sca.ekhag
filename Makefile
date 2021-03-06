# this Makefile creates .csv files out of .lst files, by removing
# TAB characters from each line and then running 'flip -u' on the file.
#
# It is designed to be identical for all directories that need it.
# Therefore, changes anywhere should be copied everywhere else.
#
# Last changed: 2007-09-24

LST_FILES = $(wildcard *.lst)
CSV_FILES = $(LST_FILES:.lst=.csv)
# CSV_FILES = $(addsuffix .csv, $(basename $(LST_FILES) ) )

all: $(CSV_FILES)

%.csv: %.lst Makefile
	@echo making $@ from $<
	sed -e 's/\t//g'		\
		< $<				\
		| grep -v '^.$$'	\
		| grep -v '^#'		\
		| grep -v '^$$'		\
		> $@.tmp
	flip -uvb $@.tmp
	mv $@.tmp $@

check:
	@echo should make CSV files '$(CSV_FILES)' from LST files '$(LST_FILES)'

