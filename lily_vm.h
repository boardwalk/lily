#ifndef LILY_VM_H
# define LILY_VM_H

# include "lily_error.h"
# include "lily_symtab.h"

typedef struct {
    int **saved_code;
    int stack_pos;
    int stack_size;
    lily_excep_data *error;
    lily_var *lily_main;
} lily_vm_state;

lily_vm_state *lily_new_vm_state(lily_excep_data *);
void lily_free_vm_state(lily_vm_state *);
void lily_vm_execute(lily_excep_data *, lily_var *);

#endif
