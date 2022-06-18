struct User {
	int id;
	char name[MAX];
	float balance;
	int transactions;
};


void get_data() {
	get_users();
}

void Register() {
	register_thanks();
	new_line();
	get_data();	
}



