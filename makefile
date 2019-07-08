DiceRoller: random.o
	g++ random.o -o DiceRoller
random.o: random.c
	g++ -c random.c
clean:
	rm -f *.o
	rm DiceRoller
run: DiceRoller
	./DiceRoller
