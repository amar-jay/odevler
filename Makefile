build:
	mkdir -p out
	gcc odev_01/main.c -o out/main
run:
	./out/main
clean:
	rm ./out/*
start:
	make build
	make run
