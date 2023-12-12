    #include<stdio.h>
    #include<stdlib.h>
    #include<unistd.h>
    #include<sys/types.h>
    #include<sys/wait.h>


    int main(int argc, char **argv){
    if(argc < 2){
    exit(EXIT_FAILURE);
    }
    int arr[argc];
    int arrP[argc];
    int parent_to_child1[2], parent_to_child2[2], child1_to_parent[2], child2_to_parent2[2];
    pipe(parent_to_child1);
    pipe(child1_to_parent);
    pid_t p = fork();
    int arrC[argc];
    int sum = 0, sum2 = 0;
    if(p==0){
    close(parent_to_child1[1]);
    read(parent_to_child1[0], arrC, argc*sizeof(int));
    printf("Child\n");
    for(int i=1;i<argc;i++){
    printf("%d\n", arrC[i]);
    }
    close(child1_to_parent[0]);

    for(int i=0;i<argc;i++){
    sum+=arrC[i];
    }
    write(child1_to_parent[1], &sum, argc*sizeof(int));
    close(child1_to_parent[1]);
    }
    else{
    close(parent_to_child1[0]);
    for(int i=1;i<argc;i++){
    arr[i] = atoi(argv[i]);
    }
    write(parent_to_child1[1], arr, argc*sizeof(int));
    close(child1_to_parent[1]);
    wait(NULL);
    close(parent_to_child1[1]);
    read(child1_to_parent[0], &sum2, argc*sizeof(int));
    printf("Sum:%d\n", sum2);

    }

    }
