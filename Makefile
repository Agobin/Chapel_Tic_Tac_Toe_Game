
ttt:	ttt.chpl
	chpl -g --savec output -o ttt ttt.chpl --ccflags `pkg-config --cflags --libs gtk+-3.0`
 
clean:
	rm -f ttt
	rm -rf output
