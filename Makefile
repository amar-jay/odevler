build:
	mkdir -p out
	gcc odev_02/main.c -o out/main
run:
	./out/main
clean:
	rm ./out/*
start:
	make build
	make run
