/*
 * A node in the Skip List
 */
typedef struct sklist_node 
{
  void                 *value;                           
  struct sklist_node   *prev;                             
  int                  level;  
  struct sklist_node   *fwd[MAX_LEVELS];
} sklist_node_t;
