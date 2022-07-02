    #include "Engine/Sources/start.cpp"
    #include <stdlib.h>
    #include <cmath>

    #include <glad/glad.h>
    #include <GLFW/glfw3.h>

    /* Initialize the library */
    void Initialize(void) {
        if (!glfwInit()) {
            std::cerr << "GLFW Not Initialized!\n";
            exit(-1);
        }
    }

    int main(int argc, char *argv[]) {  
        /* Initialize the library */
        Initialize();

        Win Start;

        if(argc >= 4)
            Win Start = Win(argc, argv);
        else
            Win Start = Win();
        
        // Hints
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);  // OpenGL 3.3
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);

        /* Create a windowed mode window and its OpenGL context */
        GLFWwindow* window = glfwCreateWindow(Start.GetWidth(), Start.GetHight(), Start.GetScreenName().c_str(), nullptr, nullptr);                 // Pointer to the GLFW window Object
        if (!window) {
            std::cerr << "Window wasn't created\n";
            glfwTerminate();
            exit(-1);
        }

        /* Make the window's context current */
        glfwMakeContextCurrent(window);

        gladLoadGL();

        glViewport(0,0, Start.GetWidth(), Start.GetHight());

        //glClearColor(0.01f, 0.13f, 0.17f, 1.0f);
        //glClear(GL_COLOR_BUFFER_BIT);
        //glfwSwapBuffers(window);

        float prev = float(glfwGetTime());
        float alfa = 0.0f;
        float time = 0.0f;
        /* Loop until the user closes the window */
        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
            time = float(glfwGetTime());
            if(time - prev >= 0.001f) {
                alfa += 0.001f;
                prev = time;
            }
            glClearColor(float(sin(alfa)), float(cos(alfa)), float(tan(alfa)), 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            glfwSwapBuffers(window);
        }

        glfwDestroyWindow(window);
        glfwTerminate();
        return 0;
    }
