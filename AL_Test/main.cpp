#include <glfw3.h>
#include <glfw3native.h>
#include <stdio.h>
using namespace std;

void printFile()
{
	FILE *pFile;
	char pBufferArray[100];

	pFile = fopen("food.mid", "r");

	printf("size of file : %d", sizeof(*pFile));
	if (pFile != NULL)
	{
		
		while (!feof(pFile))
		{
			if (fgets(pBufferArray, 100, pFile) == NULL)break;
			fputs(pBufferArray, stdout);
		}

		fclose(pFile);
	}
	else
	{
		perror("Error opening file");
	}
}

int main() {
	printFile();

	glfwInit();

	/*GLFWwindow * window = glfwCreateWindow(640, 480, "Triangles", NULL, NULL);

	glfwMakeContextCurrent(window);
	
	while (!glfwWindowShouldClose(window))
	{
		printf("Running...\n");
	}

	glfwDestroyWindow(window);
	glfwTerminate();*/
	return 0;
}