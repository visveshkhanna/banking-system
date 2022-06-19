#define BANK_NAME "Visvesh"
#define BANK_ID "VISHU_"
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

int generate_pin() {
	srand( time( NULL ) );
	int pin = rand() % 9000 + 1000;
	return pin;
}

void title() {
	printf("Welcome to %s Banking Utility!\n\n", BANK_NAME);
}

void new_line() {
	printf("\n");
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