#include "../vx_os/vx_back/vx_back.h"
#include "../vx_os/vx_io/vx_io.h"


// -------------------------- Matrix Multiplication --------------------------

typedef struct
{
	unsigned * x;
	unsigned * y;
	unsigned * z;
	unsigned mat_dim;
	unsigned offset;
	
} mat_mult_arg_t;
void vx_sq_mat_mult(void *, void *, void *, unsigned);




typedef struct
{
	unsigned * x;
	unsigned * y;
	unsigned * z;
	unsigned num_cols;
	unsigned num_rows;
	unsigned offset;
	
} mat_r_arg_t;
// -------------------------- Matrix Addition --------------------------
void vx_mat_add(void *, void *, void *, unsigned, unsigned);

// -------------------------- Matrix Subtraction --------------------------
void vx_mat_sub(void *, void *, void *, unsigned, unsigned);