#include <stdio.h>
#include "linked_list.h"
#include "motor_init.h"
#include "motor_control.h"

int main() {

    LinkedListNode* head = create_linked_list(create_servo_motor(0));
    for (int i = 1; i <= 2; i++) {
        append_to_linked_list(&head, create_servo_motor(i));
    }

    move_motor(&head,142);
    scanf("");
    return 1;
}