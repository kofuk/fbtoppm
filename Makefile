fbtoppm: main.o
	$(CC) -o $@ $^

.PHONY: clean
clean:
	$(RM) main.o fbtoppm
