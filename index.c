
#include<stdio.h>

int main(){
	char linkcss[50]="<link rel=\"stylesheet\" href=\"style/main.css\" />";
	char linkjs[50]="\"src=\"js/main.js\">";

	printf ("Content-Type: text/html\n\n");
	
	printf("<html>");
	printf("<head>");
	printf("<title>");
	printf("Trang web moi");
	printf("</title>");
	printf("<style %s>", linkjs);
	printf("%s", linkcss);
	printf("</style>");
	printf("</head>");
	printf("<body>");
	printf("<b> Chao mung ban den voi trang web nay </b></br>");
	printf("<i>Trang web nay duoc viet hoan toan bang ngon ngu c</i>");
	printf("</body>");
	printf("</html>");

	return 0;
}

