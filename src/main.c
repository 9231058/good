/*
 * In The Name Of God
 * ========================================
 * [] File Name : main.c
 *
 * [] Creation Date : 19-01-2016
 *
 * [] Created By : Iman Tabrizian (tabrizian@outlook.com)
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
/*
 * Copyright (c) 2016 Parham Alvani and Iman Tabrizian.
*/
#include "multiplayer.h"

#include <stdio.h>

int main()
{
	cell_new();
	struct cell_move_data good;
	good.move_direction = 10;
	good.cell_id = 1;
	good = cell_move(good);
	printf("%d %d\n", good.cell_id, good.move_direction);
}
