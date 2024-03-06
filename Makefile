# *****************************************************************************************
# Filename:             Makefile for Lists
# Programmer:           Devashish Dewangan CS21M017
# Project:              Implementation of Linked List
# *****************************************************************************************

SRCDIR = ./src
OBJDIR = ./obj
BINDIR = ./bin
INCDIR = ./include
CFLAGS = -g -c -w -I$(INCDIR)
CC = gcc

all: 	$(BINDIR)/prime

$(BINDIR)/prime: $(OBJDIR)/primeNumbers.o $(OBJDIR)/ListFun.o

	$(CC) -g -o $(BINDIR)/prime $(OBJDIR)/primeNumbers.o $(OBJDIR)/ListFun.o -I$(INCDIR)

$(OBJDIR)/primeNumbers.o: 		$(SRCDIR)/primeNumbers.c
	$(CC) $(CFLAGS) -o $(OBJDIR)/primeNumbers.o $(SRCDIR)/primeNumbers.c

$(OBJDIR)/ListFun.o: 		$(SRCDIR)/ListFun.c
	$(CC) $(CFLAGS) -o $(OBJDIR)/ListFun.o $(SRCDIR)/ListFun.c

clean: 
	rm -fr $(BINDIR)/* $(OBJDIR)/* 




