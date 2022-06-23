bool check_id_exist(char query_account_id[]) {
	int transactions;
	float balance;
	char account_id[MAX], name[MAX];
	FILE *fptr;
	fptr = fopen("users.txt", "r");
	fscanf(fptr, "%s %s %f %d", account_id, name, &balance, &transactions);
	while (!feof(fptr)) {
		//printf("N: %s ACC: %s Q: %s\n", account_id, name, query_account_id);
		if (strcmp(account_id, query_account_id) == 0)
		{
			return true;
		}
		fscanf(fptr, "%s %s %f %d", account_id, name, &balance, &transactions);
	}
	fclose(fptr);
	return false;
}

bool check_pin(char query_account_id[], int query_pin) {
	char account_id[MAX];
	int pin;
	FILE *fptr;
	fptr = fopen("user_access.txt", "r");
	fscanf(fptr, "%s %d", account_id, &pin);
	while (!feof(fptr)) {
		//printf("ACC: %s P: %d Q: %d\n", account_id, pin, query_pin);
		if (strcmp(account_id, query_account_id) == 0)
		{
			if (pin == query_pin)
			{
				return true;
			}
		}
		fscanf(fptr, "%s %d", account_id, &pin);
	}
	fclose(fptr);
	return false;
}

void handle_id(char query_account_id[]) {
	int transactions;
	float balance;
	char account_id[MAX], name[MAX];
	FILE *fptr;
	fptr = fopen("users.txt", "r");
	fscanf(fptr, "%s %s %f %d", account_id, name, &balance, &transactions);
	while (!feof(fptr)) {
		//printf("N: %s ACC: %s Q: %s\n", account_id, name, query_account_id);
		if (strcmp(account_id, query_account_id) == 0)
		{
			UserView(account_id, name, balance, transactions);
		}
		fscanf(fptr, "%s %s %f %d", account_id, name, &balance, &transactions);
	}
	fclose(fptr);
}


bool check_name_exist(char query_name[]) {
	int transactions;
	float balance;
	char account_id[MAX], name[MAX];
	FILE *fptr;
	fptr = fopen("users.txt", "r");
	fscanf(fptr, "%s %s %f %d", account_id, name, &balance, &transactions);
	while (!feof(fptr)) {
		//printf("%s %s\n", name, query_account_id);
		if (strcmp(name, query_name) == 0)
		{
			return true;
		}
		fscanf(fptr, "%s %s %f %d", account_id, name, &balance, &transactions);
	}
	fclose(fptr);
	return false;
}

void register_user(struct User data) {
	FILE *fptr;
	fptr = fopen("users.txt", "a");
	fprintf(fptr, "\n%s %s %f %d", data.account_id, data.name, data.balance, data.transactions);
	fclose(fptr);
}

void register_user_access(struct UserAccess data) {
	FILE *fptr;
	fptr = fopen("user_access.txt", "a");
	fprintf(fptr, "\n%s %d", data.account_id, data.pin);
	fclose(fptr);
}

int get_users_count() {
	FILE *fptr;
	fptr = fopen("users.txt", "r");
	int count = 0;
	char c;
	for (c = getc(fptr); c != EOF; c = getc(fptr)) {
		if (c == '\n') {
			count++;
		}
	}
	fclose(fptr);
	return count;
}