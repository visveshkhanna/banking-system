#define BANK_NAME "Syndrome"
#define BANK_ID "SYN_"
#define MAX 100

struct User {
	char *account_id;
	char *name;
	float balance;
	int transactions;
};

struct UserAccess {
	char *account_id;
	int pin;
};

void new_line() {
	printf("\n");
}

int generate_pin() {
	srand( time( NULL ) );
	int pin = rand() % 9000 + 1000;
	return pin;
}

void pleaseWait() {
	printf("Please wait...\n");
}

void LoginTitle() {
	printf("Obtaining Resources for Logging in!\n");
	pleaseWait();
	new_line();
	sleep(2);
}

void id_not_exist(char account_id[]) {
	new_line();
	printf("The given id '%s' does not exists!\n\nMake sure of your account id and also make sure you have registered!\nError: InvalidAccount", account_id);
}

void wrong_password(char account_id[]) {
	new_line();
	printf("The pin is incorrect!\n\nMake sure you have entered the correct pin!\nError: InvalidPassword\nACC: %s\n", account_id);
}

void title() {
	printf("Welcome to %s Banking Utility!\n\n", BANK_NAME);
}

void thanks() {
	printf("Thanks for using %s Banking Utility!\nBye :)\n", BANK_NAME);
}

void wrong_option() {
	printf("No Such option!\n");
}

void register_thanks() {
	printf("Thanks for your interest in %s banking!\n", BANK_NAME);
}

void print_time() {
	time_t rawtime;
	struct tm * timeinfo;

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	printf ( "Time: %s", asctime (timeinfo) );
}