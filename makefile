.PHONY: all clean
CC = gcc -Wall -masm=intel
debug += -g
noOpt += -O0
common_CC = $(CC) $(debug) $(noOpt)
ALL: binaryArrayToInt

%.o: $.c
	$(common_CC) -c $<

binaryArrayToInt: binaryArrayToInt_driver.o binaryArrayToInt.s
	$(common_CC) -o $@ $^

clean:
	$(RM) *.o
	$(RM) binaryArrayToInt

# COMMENTS
# $@ rulle name variable
# $< first dependency variable
# $^ all dependencies variable
