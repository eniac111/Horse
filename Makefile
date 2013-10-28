CC=gcc
EXEC_NAME=horse
INSTALL_DIR=/usr/local/bin

default : horse

clean : 
	rm ${EXEC_NAME}

horse : main.c
	${CC} -o ${EXEC_NAME} main.c

install : 
	cp ${EXEC_NAME} ${INSTALL_DIR}
