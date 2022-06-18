#define MAX_SIZE 10

int main_options() {
	int option;
	char options[3][MAX_SIZE] = {
		"Login",
		"Register",
		"Exit"
	};
	for (int i = 0; i < 3; ++i)
	{
		printf("%d) %s\n", i+1, options[i]);
	}
	printf("\nSelect an option: ");
	scanf("%d", &option);
	return option;
}

void main_options_handle(int option) {
	if (option > 0 && option < 4)
	{
		switch (option) {
			case 1:
				new_line();
				Login();
				break;
			case 2:
				new_line();
				Register();
				break;
			case 3:
				new_line();
				thanks();
				exit(0);
		}
	} else {
		printf("No such option!");
	}
}

void main_view() {
	int mop;
	mop = main_options();
	main_options_handle(mop);
}


	