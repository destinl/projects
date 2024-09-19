typedef struct zskiplistNode {
    //Zset 对象的元素值
    sds ele;
    //元素权重值
    double score;
    //后向指针
    struct zskiplistNode *backward;
  
    //节点的level数组，保存每层上的前向指针和跨度
    struct zskiplistLevel {
        struct zskiplistNode *forward;
        unsigned long span;
    } level[];
} zskiplistNode;
//redis 跳表数据结构
//zskiplistNode结构体，里面包含了元素值、元素权重、后向指针、level数组。
//每个链表节点“高度”有高有低，水平上看还是一个一个节点的，只不过有些节点很高，有些节点很低。