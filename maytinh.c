#include<stdio.h>

int main(){
	char linkjs[50]=" src=\"js/maytinh.js\"";
	char linkcss[50]=" <link rel=\"stylesheet\" href=\"style/maytinh.css\">";

	printf("Content-Type: text/html\n\n");

	printf("<html>\n<head>\n");
    printf("<script %s>", linkjs);
    printf("</script >\n");
    printf("<style>\n");
 	printf("</style>\n");
    printf("%s", linkcss);
    printf("</head>\n");
    printf("<body>\n");
    printf("<div class=\"bg\"></div>\n");
    printf("<div class=\"main\">\n");
    printf("<form name=\"form\">\n");
    printf("<input class=\"textview\" name=\"textview\">");
    printf("</form>\n");
    printf("<table>\n");
    printf("<tr>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"C\" onclick=\"clean()\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"<\" onclick=\"back()\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"/\" onclick=\"insert('/')\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"X\" onclick=\"insert('*')\"></td>\n");
    printf("</tr>\n");
    printf("<tr>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"7\" onclick=\"insert(7)\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"8\" onclick=\"insert(8)\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"9\" onclick=\"insert(9)\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"-\" onclick=\"insert('-')\"></td>\n");
    printf("</tr>\n");
    printf("<tr>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"4\" onclick=\"insert(4)\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"5\" onclick=\"insert(5)\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"6\" onclick=\"insert(6)\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"+\" onclick=\"insert('+')\"></td>\n");
    printf("</tr>\n");
    printf("<tr>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"1\" onclick=\"insert(1)\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"2\" onclick=\"insert(2)\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\"3\" onclick=\"insert(3)\"></td>\n");
    printf("<td rowspan=5><input class =\"button\" style=\"height:106\" type=\"button\" value=\"=\" onclick=\"equal()\"></td>\n");
    printf("</tr>\n");
    printf("<tr>\n");
    printf("<td colspan=2><input class =\"button\" style=\"width:200px\" type=\"button\" value=\"0\" onclick=\"insert(0)\"></td>\n");
    printf("<td><input class =\"button\" type=\"button\" value=\".\" onclick=\"insert('.')\"></td>\n");
    printf("</tr>\n");
    printf("</table>\n");
    printf("</div>\n");
    printf("</body>\n");
	printf("</html>\n");
    
	return 0;
}
