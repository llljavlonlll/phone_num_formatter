CC = gcc
CFLAG = -Wall -g
TARGET = phone
OBJS = main.o phone_fmt.o
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
phone.o: phone.c
	$(CC) $(CFLAGS) -c phone.c
phone_fmt.o: phone_fmt.c
	$(CC) $(CFLAGS) -c phone_fmt.c
clean:
	/bin/rm -f *.o $(TARGET)
