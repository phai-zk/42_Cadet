clear
if [ "$#" -eq 1 ]; then
    cc -Wall -Wextra -Werror -g -D BUFFER_SIZE=$1 *.c */*.c -I ./main_work/
else
    echo "Put the agreement."
fi