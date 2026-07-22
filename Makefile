
exe:main.o stud_add.o stud_del.o stud_mod.o stud_save.o stud_show.o
	cc main.o stud_add.o stud_del.o stud_mod.o stud_save.o stud_show.o -o exe
main.o:main.c
	cc -c main.c
stud_add.o:stud_add.c
	cc -c stud_add.c
stud_del.o:stud_del.c
	cc -c stud_del.c
stud_mod.o:stud_mod.c
	cc -c stud_mod.c
stud_save.o:stud_save.c
	cc -c stud_save.c
stud_show.o:stud_show.c
	cc -c stud_show.c
clear:
	echo "clearing Please Wait..."
	rm -rv *.o
