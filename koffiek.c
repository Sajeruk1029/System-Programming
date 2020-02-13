#include <stdio.h>
#include <stdbool.h>

#define DOLLAR 63.1F

struct Koffe
{
    char name [100];
    int cost;
};

void list_types()
{
    printf("%s\n", "0.Эспрессо");
    printf("%s\n", "1.Латте");
    printf("%s\n", "2.Амперикано");
    printf("%s\n", "3.Капучино");
    printf("%s\n", "4.Макиато");
}

void final(struct Koffe data)
{
    int cost = data.cost;
    int summa = 0;
    bool life = true;

    printf("%s%s\n", "Название товара: ", data.name);
    printf("%s%d\n", "Сумма к оплате в Р: ", data.cost);
    printf("%s%f\n", "Сумма к оплате в $: ", data.cost / DOLLAR);

    printf("%s\n", "");
    printf("%s\n", "Оплата заказа...");

    while(life)
    {
	printf("%s%d\n", "Вам необходимо внести: ", cost -= summa);
	scanf("%d", &summa);

	if(summa >= cost)
	{
	    life = false;
	}
    }

    printf("%s%d\n", "Спасибо! Ваша сдача: ", summa - cost);

}


void control_panel(int type)
{
    switch(type)
    {
	case 0:
	{
	    struct Koffe ecspr = {"Эспрессо\0", 10};
	    final(ecspr);
	    break;
	}

	case 1:
	{
	    struct Koffe latte = {"Латте\0", 100};
	    final(latte);
	    break;
	}

	case 2:
	{
	    struct Koffe american = {"Американо\0", 1000};
	    final(american);
	    break;
	}

	case 3:
	{
	    struct Koffe kapuch = {"Капучино\0", 10000};
	    final(kapuch);
	    break;
	}

	case 4:
	{
	    struct Koffe makia = {"Макиато\0", 100000};
	    final(makia);
	    break;
	}
    }
}


void select_type()
{
    int type = -1;
    bool life = true;

    while(life)
    {
	printf("%s\n", "Выбор товара...");
	list_types();
	scanf("%d", &type);

	switch(type)
	{
	    case 0:
	    {
		life = false;
		break;
	    }

	    case 1:
	    {
		life = false;
		break;
	    }

	    case 2:
	    {
		life = false;
		break;
	    }

	    case 3:
	    {
		life = false;
		break;
	    }

	    case 4:
	    {
		life = false;
		break;
	    }

	    default:
	    {
		printf("%s\n", "Ошибка!");
		break;
	    }
	}
    }

    control_panel(type);
}

int main()
{
    select_type();

    return 0;
}
