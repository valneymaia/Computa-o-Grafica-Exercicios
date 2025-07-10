#include <windows.h>
#include <GL/glut.h>


int init(void){
    /* coloca as funções opengl referente a desenho
    */
     /*inserir codigo
    */
    glClearColor(1.0,1.0,1.0,0.0);          //define cor da janela
    glMatrixMode(GL_PROJECTION);    // carregar a cor da janela
    gluOrtho2D(0.0,800.0,0.0,800.0); //projeção ortogonal

}

void display(void){
    /* coloca as funções opengl referente a desenho
    */
    /*inserir codigo
    */
    glClear(GL_COLOR_BUFFER_BIT); //DESENHA FUNDO // LIMPAR JANELA
    glColor3f(1.0,0.0,0.0);    //atribui o atributo color
    glBegin(GL_QUADS);
        glColor3f(1.0,0.0,0.0);
        glVertex2i(450,700);
        glVertex2i(350,700);
        glVertex2i(350,600);
        glVertex2i(450,600);
    glEnd();
    // tronco
    glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
        glVertex2i(400,600);
        glVertex2i(400,300);
    glEnd();
    // braço e
    glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
        glVertex2i(400,500);
        glVertex2i(500,400);
    glEnd();
    // braço d
    glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
        glVertex2i(400,500);
        glVertex2i(300,400);
    glEnd();
    // perna e
    glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
        glVertex2i(400,300);
        glVertex2i(300,200);
    glEnd();
     // perna d
    glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
        glVertex2i(400,300);
        glVertex2i(500,200);
    glEnd();

    glFlush();      //desenha os comadno não executado
}

int main(int argc, char** argv){
    glutInit(&argc,argv);                   //inicia o glut
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);   //configuração modo  de display
    glutInitWindowSize (800,800);                 //configura a largura  e altura  DA JANELA DE EXIBIÇÃO
    //glutInitWindowPosition (200,0);
    glutCreateWindow("Um programa OpenGL Exemplo");     //criar a janela  de exibição
    init();             //executa a função de inicialização
    glutDisplayFunc (display);      //estabelece a função display  como a função a callback de exibição
    glutMainLoop();
    return 0;

}

