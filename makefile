
ttt:	ttt.chpl
	chpl -g -o ttt ttt.chpl --ccflags `pkg-config --cflags --libs gtk+-2.0`
