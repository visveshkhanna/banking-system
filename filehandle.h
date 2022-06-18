void get_users() {
	int id, transactions;
	float balance;
	char name[MAX];
	FILE *fptr;
	fptr = fopen("users.txt", "r");
	fscanf(fptr, "%d %s %f %d", &id, name, &balance, &transactions);
	while (!feof(fptr)) {
		printf("ID: %d NAME: %s BALANCE: %.3f TRANSACTIONS: %d", id, name, balance, transactions);
		fscanf(fptr, "%d %s %f %d", &id, name, &balance, &transactions);
		new_line();
	}
	fclose(fptr);
}