#TargetName : Dependencies
#<TAB>commands

Build : project_main.c aschii_sum.c
	gcc project_main.c aschii_sum.c -o aschii_sum.out -lm

Run : Build
	./aschii_sum.out

clean:
	rm -rf *.o *.out *.i *.s
