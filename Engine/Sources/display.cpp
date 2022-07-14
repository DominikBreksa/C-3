	#include "../Headers/display.h"

	/*********
	 * Function that take three float values and makes background flactuate colour via sin, cos, tan, and cot functions, bc. glClearColor take 3 floats betwen 0.0f and 1.0f
	 * float prev = float(glfwGetTime()); <<-- example of variables
     * float alfa = 0.0f;
     * float time = 0.0f;
	 *********/
	void ChangingColourFluttuation(float& prev, float& alfa, float& time) {
        time = float(glfwGetTime());
        if(time - prev >= 0.001f) {
            alfa += 0.001f;
            prev = time;
        }
        glClearColor(float(sin(alfa)), float(cos(alfa)), float(tan(alfa)), float(cos(alfa) / sin(alfa)));
        glClear(GL_COLOR_BUFFER_BIT);
	}