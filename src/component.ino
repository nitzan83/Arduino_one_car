#include "config.h"

struct {
    int x;
    int y;
} Point;

struct {
    Point position;
    char name[MAX_COMPONENT_NAME_LEN + 1];
    char image;
} Component;

int
Component_init(Component *c, Point *initial_position, char name[MAX_COMPONENT_NAME_LEN], char image) 
{
    memset(&c->name, 0, MAX_COMPONENT_NAME_LEN);
    
    COMPONENT_change_position(c, initial_position);
    COMPONENT_set_image(c, image);
    memcpy(c->name, name, sizeof(name))
}

void
COMPONENT_change_position(Component *c, Point *new_position)
{
    c->point.x = new_position->x;
    c->point.y = new_position->y;
}

void
COMPONENT_set_image(Component *c, char new_image)
{
    c->image = new_image;
}

