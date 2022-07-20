all: prod

prod:
	gcc -o production main.c
	./production
dd:
	gcc -o debug main.c -DDEBUG
	./debug
clean:
	rm -rf production debug