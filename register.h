void Register() {
	register_thanks();
	new_line();
	char name[MAX];
	char str[MAX] = BANK_ID;
	int len = strlen(str);
	char num[MAX]; 
    int n = get_users_count() + 1;
	sprintf(num, "%d", n);
	for (int i=0; i<strlen(num); i++)
	{
		str[len+i] = num[i];
	}
	printf("Enter your name\nExample: John\n\n=> ");
	scanf("%s", name);
	struct User user = {str, name, 0, 0};
	struct UserAccess useraccess = {str, generate_pin()};

	printf("\n\nKindly save the below data for futher records, you can change the data anytime, in the login section!\n\n");

	if (check_name_exist(user.name)) {
		printf("\n**** Alert ****\n");
		printf("[  Duplicate Account Warning: User Name already exists!  ]\n");
	}

	printf("\n****** > User Data < ******\n\n");
	printf("User's Name => %s\n", user.name);
	print_time();
	printf("Balance: %d\n", 0);
	
	printf("\n****** > Personal Data < ******\n\n");
	printf("*** Note this data for future use! ***\n\n");
	printf("Account id => %s\n", user.account_id);
	printf("Pin => %d\n", useraccess.pin);

	printf("\n**** %s BANKING ****\n", BANK_NAME);

	register_user(user);
	register_user_access(useraccess);

}



