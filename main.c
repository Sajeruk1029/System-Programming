#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void sr_znach()
{
    int x1 = 0, x2 = 0;

    printf("%s\n", "Enter x1...");
    scanf("%d", &x1);
    printf("%s\n", "Enter x2...");
    scanf("%d", &x2);

    printf("%s%d\n", "Sr znach: ", ((x1 + x2) / 2));
}

void duem_to_sm()
{
    int num = 0;
    const float DUEM = 25.4F;

    printf("%s\n", "Enter duem...");
    scanf("%d", &num);
    printf("%s%d\n", "Sm: ", (int)trunc(DUEM * num));
}

void sm_to_duem()
{
    int num = 0;
    const float SM = 25.4F;

    printf("%s\n", "Enter sm...");
    scanf("%d", &num);
    printf("%s%d\n", "Duem: ", (int)trunc(num / SM));
}

void farengete_to_celsi()
{
    int num = 0;


    printf("%s\n", "Enter temperature(f)...");
    scanf("%d", &num);
    printf("%s%f\n", "temperature(c): ", (num - 32) / 1.8f);
}

void celsi_to_farengete()
{
    int num = 0;


    printf("%s\n", "Enter temperature(c)...");
    scanf("%d", &num);
    printf("%s%f\n", "temperature(f): ", (num * 1.8) + 32);
}

void s_kolca()
{
    int num_vnesh = 0, num_vnutr = 0;

    printf("%s\n", "Enter vneshniy radius...");
    scanf("%d", &num_vnesh);
    printf("%s\n", "Enter vnutreniy radius...");
    scanf("%d", &num_vnutr);

    printf("%s%f\n", "S kolca: ", M_PI * (pow(num_vnesh, 2) - pow(num_vnutr, 2)));
}

void p_s_a()
{
    int a = 0;

    printf("%s\n", "Enter storonu...");
    scanf("%d", &a);

    printf("%s%d%s%s%f\n", "P: ", a * 4, " " , "S: ", pow(a, 2));

}

void p_s_b()
{
    float a = 0.0f, b = 0.0f, c = 0.0f;

    printf("%s\n", "Enter katet...");
    scanf("%f", &a);
    printf("%s\n", "Enter katet...");
    scanf("%f", &b);
    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("%s%f%s%s%f\n", "P: ", a + b + c, " " , "S: ", 0.5 * a * b);
}

void p_s_c()
{
    float a = 0.0f, h = 0.0f, b = 0.0f, c = 0.0f;

    printf("%s\n", "Enter storonu...");
    scanf("%f", &a);
    printf("%s\n", "Enter osnovanie...");
    scanf("%f", &h);

    b = sqrt(pow(a / 2, 2) + pow(h, 2));
    c = b;

    printf("%s%f%s%s%f\n", "P: ", a + b + c , " " , "S: ", 0.5 * a * h);

}

void p_s_d()
{
    float a = 0.0f, b = 0.0f, h = 0.0f, rezerv = 0.0f;

    printf("%s\n", "Enter 1 nijnee osnovanie...");
    scanf("%f", &a);
    printf("%s\n", "Enter 2 verhnee osnovanie..");
    scanf("%f", &b);
    printf("%s\n", "Enter visota..");
    scanf("%f", &h);

    rezerv = a - b;

    rezerv = sqrt(pow(rezerv, 2) + pow(h, 2));

    rezerv = 2 * rezerv;

    printf("%s%f%s%s%f\n", "P: ", rezerv + a + b, " " , "S: ", 0.5 * a * b * h);
}

void p_s_e()
{
    float a = 0.0f, h = 0.0f;

    printf("%s\n", "Enter storonu...");
    scanf("%f", &a);

    h = sqrt(pow(a, 2) - pow(a / 2, 2));

    printf("%s%f%s%s%f\n", "P: ", a * 3, " " , "S: ", 0.5 * h * a);
}

void s_o_a()
{
    int r = 0, h = 0;

    printf("%s\n", "Enter radius...");
    scanf("%d", &r);
    printf("%s\n", "Enter visota...");
    scanf("%d", &h);

    printf("%s%f%s%f\n", "S: ", 2 * M_PI * r * h, " V: ", M_PI * pow(r, 2) * h);

}

void s_o_b()
{
    int R = 0, r = 0, h = 0;

    printf("%s\n", "Enter radius...");
    scanf("%d", &r);
    printf("%s\n", "Enter radius vneshniy...");
    scanf("%d", &R);
    printf("%s\n", "Enter visota...");
    scanf("%d", &h);

    printf("%s%f%s%f\n", "S: ", M_PI * (pow(r, 2) - pow(R, 2)), " V: ", M_PI * (pow(r, 2) - pow(R, 2)) * h);

}

void s_o_c()
{

    int r = 0;

    printf("%s\n", "Enter radius...");
    scanf("%d", &r);

    printf("%s%f%s%f\n", "S: ", 4 * M_PI * pow(r, 2), " V: ", (3/4) * M_PI * pow(r, 3));


}

void ps_ss_a()
{

    int r = 0;

    printf("%s\n", "Enter radius...");
    scanf("%d", &r);

    printf("%s%d%s%f\n", "P: ", (r * 2) * 4, " S: ", pow((r * 2), 2));

}

void ps_ss_b()
{

    int a = 0;

    printf("%s\n", "Enter storonu...");
    scanf("%d", &a);

    printf("%s%f%s%f\n", "P: ", 2 * M_PI * (a / 2), " S: ", pow((a / 2), 2) * M_PI);

}

void ps_ss_c()
{

    int r = 0;

    printf("%s\n", "Enter radius...");
    scanf("%d", &r);

    printf("%s%d%s%f\n", "P: ", (r * 2) * 3, " S: ", (pow(r * 2, 2) * sqrt(3)) / 4);

}

void ps_ss_d()
{

    int a = 0;

    printf("%s\n", "Enter storonu...");
    scanf("%d", &a);

    printf("%s%f%s%f\n", "P: ", 2 * M_PI * (a / 2), " S: ", pow((a / 2), 2) * M_PI);

}

int main()
{
    int num = -1;

    bool life = true;

    while (life) {

        printf("%s\n", "Enter a number of task...");
        printf("\n");
        printf("%s\n", "0 -- exit");
        printf("%s\n", "1 -- 1");
        printf("%s\n", "2 -- 2");
        printf("%s\n", "3 -- 3");
        printf("%s\n", "4 -- 4");
        printf("%s\n", "5 -- 5");
        printf("%s\n", "6 -- 6");
        printf("%s\n", "7 -- 7.a");
        printf("%s\n", "8 -- 7.b");
        printf("%s\n", "9 -- 7.c");
        printf("%s\n", "10 -- 7.d");
        printf("%s\n", "11 -- 7.e");
        printf("%s\n", "12 -- 8.a");
        printf("%s\n", "13 -- 8.b");
        printf("%s\n", "14 -- 8.c");
        printf("%s\n", "15 -- 9.a");
        printf("%s\n", "16 -- 9.b");
        printf("%s\n", "17 -- 9.c");
        printf("%s\n", "18 -- 9.d");
        printf("\n");
        scanf("%d", &num);
        printf("\n");

        switch (num) {

        case 1:
        {
            sr_znach();
	    break;
        }

        case 2:
        {
            duem_to_sm();
	    break;
        }

        case 3:
        {
            sm_to_duem();
    	    break;
	}

        case 4:
        {
            farengete_to_celsi();
	    break;
        }

        case 5:
        {
            celsi_to_farengete();
	    break;
        }

        case 6:
        {
            s_kolca();
	    break;
        }

        case 7:
        {
            p_s_a();
	    break;
        }

        case 8:
        {
            p_s_b();
	    break;
        }

        case 9:
        {
            p_s_c();
	    break;
        }

        case 10:
        {
            p_s_d();
	    break;
        }

        case 11:
        {
            p_s_e();
	    break;
        }

        case 12:
        {
            s_o_a();
	    break;
        }

        case 13:
        {
            s_o_b();
	    break;
        }

        case 14:
        {
            s_o_c();
	    break;
        }

        case 15:
        {
            ps_ss_a();
	    break;
        }

        case 16:
        {
            ps_ss_b();
	    break;
        }

        case 17:
        {
            ps_ss_c();
	    break;
        }

        case 18:
        {
            ps_ss_d();
	    break;
        }

        case 0:
        {
            life = false;
            printf("%s\n", "Bye!");
	    break;
        }

        default:
        {
            printf("%s\n", "Error!");
	    break;
        }

        }


    }

    return 0;

}
