#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    scanf("%[^\n]", str);
    printf("#include <stdio.h>\nint main()\n{\n    printf(\"%%s\\n\",\"%s\");\n    return 0;\n}\n", str);
    return 0;
}
