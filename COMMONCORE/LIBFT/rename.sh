cd ./libft
set=$1
if [ $1 -eq 1 ]; then
    SRCBONUSES="ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c"
    for file in $SRCBONUSES; do
        newfile=$(echo "$file" | sed 's/_bonus\.c$/.c/')
        mv "$file" "$newfile"
        echo "Renamed $file to $newfile"
    done
elif [ $1 -eq 2 ]; then
    SRCBONUSES="ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c"
    for file in $SRCBONUSES; do
        newfile=$(echo "$file" | sed 's/\.c$/_bonus.c/')
        
        mv "$file" "$newfile"
        echo "Renamed $file to $newfile"
    done
fi
cd ..