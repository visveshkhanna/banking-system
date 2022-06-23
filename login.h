void Login() {
	LoginTitle();
	char account_id[MAX];
	int pin;
	printf("Enter the account id associated with your bank account\nExample: %s1\n\n=> ", BANK_ID);
	scanf(" %[^\n]s", account_id);
	// Check id exists
	if (check_id_exist(account_id))
	{
		new_line();
		printf("Enter the 4 digit pin\nExample: 0000\n\n=> ");
		scanf("%d", &pin);
		new_line();
		if (check_pin(account_id, pin)) {
			handle_id(account_id);
		} else {
			wrong_password(account_id);
		}
	} else {
		id_not_exist(account_id);
	}
}