#include <windows.h>
#include <GL/glut.h>


int init(void){
    /* coloca as funções opengl referente a desenho
    */
     /*inserir codigo
    */
    glClearColor(1.0,1.0,1.0,0.0);          //define cor da janela
    glMatrixMode(GL_PROJECTION);    // carregar a cor da janela
    gluOrtho2D(0.0,900.0,0.0,900.0); //projeção ortogonal

}

void display(void){
    /* coloca as funções opengl referente a desenho
    */
    /*inserir codigo
    */
    glClear(GL_COLOR_BUFFER_BIT); //DESENHA FUNDO // LIMPAR JANELA
    glColor3f(1.0,0.0,0.0);    //atribui o atributo color
    glBegin(GL_QUADS);
        glColor3f(0.0,0.0,0.0);
        glVertex2i(0,900);
        glVertex2i(0,600);
        glVertex2i(900,600);
        glVertex2i(900,900);
    glEnd();
        glBegin(GL_QUADS);
        glColor3f(1.0,0.0,0.0);
        glVertex2i(0,600);
        glVertex2i(0,300);
        glVertex2i(900,300);
        glVertex2i(900,600);
    glEnd();
        glBegin(GL_QUADS);
        glColor3f(1.0,1.0,0.0);
        glVertex2i(0,300);
        glVertex2i(0,000);
        glVertex2i(900,000);
        glVertex2i(900,300);
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

