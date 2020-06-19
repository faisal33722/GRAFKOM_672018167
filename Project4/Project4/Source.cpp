#include <iostream> 
#include <GL/glut.h>

void outline() {

	glBegin(GL_QUADS);
	glColor3ub(62, 61, 92);
	glVertex2f(0, 0);
	glVertex2f(0, 840);
	glVertex2f(840, 840);
	glVertex2f(840, 0);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(226, 82, 71);
	glVertex2f(20, 20);
	glVertex2f(20, 820);
	glVertex2f(820, 820);
	glVertex2f(820, 20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 0);
	glVertex2f(60, 60);
	glVertex2f(60, 780);
	glVertex2f(780, 780);
	glVertex2f(780, 60);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(57, 56, 90);
	glVertex2f(70, 70);
	glVertex2f(70, 770);
	glVertex2f(770, 770);
	glVertex2f(770, 70);
	glEnd();
	glFlush();
} //// isine kotak utama

void garislintang() {

	//1
	glBegin(GL_LINES);
	glColor3ub(223, 74, 76);
	glVertex2f(420, 768);
	glVertex2f(73, 70);
	glEnd();

	//2
	glBegin(GL_LINES);
	glColor3ub(223, 74, 76);
	glVertex2f(770, 67);
	glVertex2f(414, 775);
	glEnd();


	//3
	glBegin(GL_LINES);
	glColor3ub(223, 74, 76);
	glVertex2f(420, 67);
	glVertex2f(70, 775);
	glEnd();


	//4;
	glBegin(GL_LINES);
	glColor3ub(223, 74, 76);
	glVertex2f(420, 67);
	glVertex2f(770, 772);
	glEnd();

	glFlush();
}

void segitiga() {

	//segitiga 1 kiri tengah
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(70, 550);//kaki bawah bawah
	glVertex2f(150, 413);//atas
	glVertex2f(70, 250);//kaki bawah atas
	glEnd();
	glFlush();


	//segitiga 2 kanan tengah
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(770, 550);//kaki bawah bawah
	glVertex2f(690, 413);//atas
	glVertex2f(770, 250);//kaki bawah atas
	glEnd();
	glFlush();


	//segitiga 1 kanan atas
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(595, 300);//kaki atas
	glVertex2f(720, 70);//kaki kanan
	glVertex2f(470, 70);//kaki bawah kiri
	glEnd();
	glFlush();


	//segitiga 1 kanan bawah
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(595, 530);//kaki atas
	glVertex2f(720, 770);//kaki kanan
	glVertex2f(470, 770);//kaki bawah kiri
	glEnd();
	glFlush();




	//segitiga 1 kiri bawah
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(245, 530);//kaki atas
	glVertex2f(370, 770);//kaki kanan
	glVertex2f(110, 770);//kaki bawah kiri
	glEnd();
	glFlush();


	//segitiga 1 kiri ats
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(245, 300);//kaki atas
	glVertex2f(370, 70);//kaki kanan
	glVertex2f(110, 70);//kaki bawah kiri
	glEnd();
	glFlush();



	//segitiga senter 1
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(420, 150);//kaki atas
	glVertex2f(550, 413);//kaki kanan
	glVertex2f(290, 413);//kaki bawah kiri
	glEnd();
	glFlush();


	//segitiga senter 1
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(420, 670);//kaki atas
	glVertex2f(550, 413);//kaki kanan
	glVertex2f(290, 413);//kaki bawah kiri
	glEnd();
	glFlush();

}

void garissegitiga() {


	//segitiga senter 1 kng
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 204, 24);
	glVertex2f(420, 680);//kaki atas
	glVertex2f(550, 413);//kaki kanan
	glVertex2f(290, 413);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga senter 1 pth
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(420, 660);//kaki atas
	glVertex2f(540, 413);//kaki kanan
	glVertex2f(300, 413);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga senter 1 abg
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(420, 645);//kaki atas
	glVertex2f(530, 413);//kaki kanan
	glVertex2f(310, 413);//kaki bawah kiri
	glEnd();
	glFlush();


	//segitiga senter 1 kng
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 204, 24);
	glVertex2f(420, 150);//kaki atas
	glVertex2f(550, 413);//kaki kanan
	glVertex2f(290, 413);//kaki bawah kiri
	glEnd();
	glFlush();
    //segitiga senter 1 pth
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(420, 170);//kaki atas
	glVertex2f(540, 413);//kaki kanan
	glVertex2f(300, 413);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga senter 1 abng
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(420, 183);//kaki atas
	glVertex2f(530, 413);//kaki kanan
	glVertex2f(310, 413);//kaki bawah kiri
	glEnd();
	glFlush();




	//segitiga 1 kiri ats k
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 204, 24);
	glVertex2f(245, 300);//kaki atas
	glVertex2f(370, 70);//kaki kanan
	glVertex2f(110, 70);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga 1 kiri ats p
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(245, 285);//kaki atas
	glVertex2f(360, 70);//kaki kanan
	glVertex2f(120, 70);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga 1 kiri ats a
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(245, 265);//kaki atas
	glVertex2f(350, 70);//kaki kanan
	glVertex2f(130, 70);//kaki bawah kiri
	glEnd();
	glFlush();




	//segitiga 1 kiri bawah K
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 204, 24);
	glVertex2f(245, 530);//kaki atas
	glVertex2f(370, 770);//kaki kanan
	glVertex2f(110, 770);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga 1 kiri bawah P
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(245, 545);//kaki atas
	glVertex2f(360, 770);//kaki kanan
	glVertex2f(120, 770);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga 1 kiri bawah A
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(245, 560);//kaki atas
	glVertex2f(350, 770);//kaki kanan
	glVertex2f(130, 770);//kaki bawah kiri
	glEnd();
	glFlush();





	//segitiga 1 kanan bawah K
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 204, 24);
	glVertex2f(595, 530);//kaki atas
	glVertex2f(720, 770);//kaki kanan
	glVertex2f(470, 770);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga 1 kanan bawah P
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(595, 545);//kaki atas
	glVertex2f(710, 770);//kaki kanan
	glVertex2f(480, 770);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga 1 kanan bawah A
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(595, 560);//kaki atas
	glVertex2f(700, 770);//kaki kanan
	glVertex2f(490, 770);//kaki bawah kiri
	glEnd();
	glFlush();





	//segitiga 1 kanan atas K
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 204, 24);
	glVertex2f(595, 300);//kaki atas
	glVertex2f(720, 70);//kaki kanan
	glVertex2f(470, 70);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga 1 kanan atas P
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(595, 285);//kaki atas
	glVertex2f(710, 70);//kaki kanan
	glVertex2f(480, 70);//kaki bawah kiri
	glEnd();
	glFlush();
	//segitiga 1 kanan atas A
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(595, 265);//kaki atas
	glVertex2f(700, 70);//kaki kanan
	glVertex2f(490, 70);//kaki bawah kiri
	glEnd();
	glFlush();





	//segitiga 2 kanan tengah K
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 204, 24);
	glVertex2f(770, 550);//kaki bawah bawah
	glVertex2f(690, 413);//atas
	glVertex2f(770, 250);//kaki bawah atas
	glEnd();
	glFlush();
	//segitiga 2 kanan tengah P
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(770, 535);//kaki bawah bawah
	glVertex2f(700, 413);//atas
	glVertex2f(770, 265);//kaki bawah atas
	glEnd();
	glFlush();
	//segitiga 2 kanan tengah A
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(770, 520);//kaki bawah bawah
	glVertex2f(710, 413);//atas
	glVertex2f(770, 280);//kaki bawah atas
	glEnd();
	glFlush();




	//segitiga 1 kiri tengah K
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 204, 24);
	glVertex2f(70, 550);//kaki bawah bawah
	glVertex2f(150, 413);//atas
	glVertex2f(70, 250);//kaki bawah atas
	glEnd();
	glFlush();
	//segitiga 1 kiri tengah P
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2f(70, 540);//kaki bawah bawah
	glVertex2f(140, 413);//atas
	glVertex2f(70, 260);//kaki bawah atas
	glEnd();
	glFlush();
	//segitiga 1 kiri tengah A
	glBegin(GL_TRIANGLES);
	glColor3ub(217, 89, 90);
	glVertex2f(70, 525);//kaki bawah bawah
	glVertex2f(130, 413);//atas
	glVertex2f(70, 275);//kaki bawah atas
	glEnd();
	glFlush();



}

void render() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	outline();
	garislintang();
	segitiga();
	garissegitiga();
}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutCreateWindow("FAISHAL HAKIM INDRAYANA [672018168]");
	glutDisplayFunc(render);
	glLineWidth(3);
	gluOrtho2D(0, 840, 840, 0);
	glutMainLoop();

	return 0;
}