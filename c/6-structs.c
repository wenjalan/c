#include <stdio.h>

struct User {
	int age;
	int height;
	float weight;
};

struct User get_user();

int main() {
	struct User user;
	user.age = 21;
	user.height = 175;
	user.weight = 65.2;

	printf( "User 1's age: %d\n", user.age );

	struct User user2 = get_user();
	struct User* user2_p = &user2;
	printf( "User 2's age: %d\n", user2_p->age );
}

struct User get_user() {
	struct User user;
	user.age = 19;
	user.height = 165;
	user.weight = 50.2;
	return user;
}
