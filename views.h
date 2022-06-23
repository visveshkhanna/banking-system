void UserView(char account_id[], char name[], float balance, int transactions) {
	printf(">>> %s BANK <<<\n\n", BANK_NAME);
	printf(">>>>>> ACCOUNT <<<<<<\n\n");
	printf("Name => %s\n", name);
	printf("Account => %s\n", account_id);
	printf("Balance => Rs. %.2f\n", balance);
	printf("Transactions => %d\n", transactions);
	new_line();
	thanks();
}