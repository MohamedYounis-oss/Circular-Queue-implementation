
#include "circular_queue.h"

static int circular_queue[CIRCULAR_QUEUE_SIZE];
static int in = 0;
static int out = 0;
static int in_count = 2;
static int out_count = 2;


circular_queue_status in_circularQueue(int data)
{
    circular_queue_status status = CIRCULAR_QUEUE_DONE;

    if (in == out && ((in_count+out_count)%2!=0))
    {
        status = CIRCULAR_QUEUE_FULL;
    }
    else
    {
        circular_queue[in] = data;
        in++;
        status = CIRCULAR_QUEUE_DONE;
    }

    if (in == CIRCULAR_QUEUE_SIZE)
    {
        in = 0;
        in_count++;
    }

    return status;
}


circular_queue_status de_circularQueue(int* pdata)
{
    circular_queue_status status = CIRCULAR_QUEUE_DONE;

    if (in == out && (in_count+out_count)%2==0)
    {
        status = CIRCULAR_QUEUE_EMPTY;
    }
    else
    {
        *pdata = circular_queue[out];
        out++;
        status = CIRCULAR_QUEUE_DONE;
    }

    if (out == CIRCULAR_QUEUE_SIZE)
    {
        out = 0;
        out_count++;
    }

    return status;
}

