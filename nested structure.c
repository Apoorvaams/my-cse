#include <stdio.h>
int main() {
    struct apoorva{
        int age;
        float weight;
    };
    struct poorvi{
        int mark;
        struct apoorva a1;
    };
    struct poorvi p1;
    scanf("%d",&p1.mark);
    scanf("%d",&p1.a1.age);
    scanf("%f",&p1.a1.weight);
    }
