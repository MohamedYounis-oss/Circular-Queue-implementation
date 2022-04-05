
#define CIRCULAR_QUEUE_SIZE 6

typedef enum
{
    CIRCULAR_QUEUE_FULL=0,
    CIRCULAR_QUEUE_EMPTY=0,
    CIRCULAR_QUEUE_DONE

}circular_queue_status;


circular_queue_status in_circularQueue(int data);

circular_queue_status de_circularQueue(int* pdata);
