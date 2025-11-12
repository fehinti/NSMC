/* Include files */

#include "ABS_contDyn_model_SMC_FZL_NN_sfun.h"
#include "c11_ABS_contDyn_model_SMC_FZL_NN.h"
#include <math.h>
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c11_emlrtMCI = { 125,/* lineNo */
  13,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+randfun/eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c11_b_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/ops/power.m"/* pName */
};

static emlrtMCInfo c11_c_emlrtMCI = { 133,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo c11_d_emlrtMCI = { 138,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo c11_e_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtRSInfo c11_emlrtRSI = { 9, /* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_b_emlrtRSI = { 11,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_c_emlrtRSI = { 15,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_d_emlrtRSI = { 20,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_e_emlrtRSI = { 23,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_f_emlrtRSI = { 38,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_g_emlrtRSI = { 39,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_h_emlrtRSI = { 40,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_i_emlrtRSI = { 42,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_j_emlrtRSI = { 50,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_k_emlrtRSI = { 53,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_l_emlrtRSI = { 54,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_m_emlrtRSI = { 55,/* lineNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fcnName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pathName */
};

static emlrtRSInfo c11_n_emlrtRSI = { 135,/* lineNo */
  "rng",                               /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c11_o_emlrtRSI = { 133,/* lineNo */
  "rng",                               /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c11_p_emlrtRSI = { 132,/* lineNo */
  "rng",                               /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c11_q_emlrtRSI = { 71,/* lineNo */
  "rng",                               /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c11_r_emlrtRSI = { 282,/* lineNo */
  "rng",                               /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c11_s_emlrtRSI = { 284,/* lineNo */
  "rng",                               /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c11_t_emlrtRSI = { 286,/* lineNo */
  "rng",                               /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c11_u_emlrtRSI = { 287,/* lineNo */
  "rng",                               /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c11_v_emlrtRSI = { 117,/* lineNo */
  "randn",                             /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/randn.m"/* pathName */
};

static emlrtRSInfo c11_w_emlrtRSI = { 40,/* lineNo */
  "eml_randn",                         /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/private/eml_randn.m"/* pathName */
};

static emlrtRSInfo c11_x_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand.m"/* pathName */
};

static emlrtRSInfo c11_y_emlrtRSI = { 15,/* lineNo */
  "eml_rand_mcg16807_stateful",        /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand_mcg16807_stateful.m"/* pathName */
};

static emlrtRSInfo c11_ab_emlrtRSI = { 39,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c11_bb_emlrtRSI = { 56,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c11_cb_emlrtRSI = { 405,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c11_db_emlrtRSI = { 414,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c11_eb_emlrtRSI = { 416,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c11_fb_emlrtRSI = { 11,/* lineNo */
  "normrnd",                           /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/stats/eml/normrnd.m"/* pathName */
};

static emlrtRSInfo c11_gb_emlrtRSI = { 38,/* lineNo */
  "rnd",                               /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/rnd.m"/* pathName */
};

static emlrtRSInfo c11_hb_emlrtRSI = { 12,/* lineNo */
  "normrnd",                           /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/private/normrnd.m"/* pathName */
};

static emlrtRSInfo c11_ib_emlrtRSI = { 13,/* lineNo */
  "normrnd",                           /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/private/normrnd.m"/* pathName */
};

static emlrtRSInfo c11_jb_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/matfun/mpower.m"/* pathName */
};

static emlrtRSInfo c11_kb_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo c11_lb_emlrtRSI = { 69,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo c11_mb_emlrtRSI = { 15,/* lineNo */
  "xdot",                              /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+refblas/xdot.m"/* pathName */
};

static emlrtRSInfo c11_nb_emlrtRSI = { 32,/* lineNo */
  "xdotx",                             /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+refblas/xdotx.m"/* pathName */
};

static emlrtRSInfo c11_ob_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c11_pb_emlrtRSI = { 94,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo c11_qb_emlrtRSI = { 142,/* lineNo */
  "mtimes",                            /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

static emlrtRSInfo c11_rb_emlrtRSI = { 55,/* lineNo */
  "mtimes",                            /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+refblas/mtimes.m"/* pathName */
};

static emlrtRSInfo c11_sb_emlrtRSI = { 242,/* lineNo */
  "mtimes",                            /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+refblas/mtimes.m"/* pathName */
};

static emlrtRSInfo c11_tb_emlrtRSI = { 245,/* lineNo */
  "mtimes",                            /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+refblas/mtimes.m"/* pathName */
};

static emlrtRSInfo c11_ub_emlrtRSI = { 178,/* lineNo */
  "mtimes",                            /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

static emlrtRTEInfo c11_emlrtRTEI = { 11,/* lineNo */
  28,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_b_emlrtRTEI = { 47,/* lineNo */
  57,                                  /* colNo */
  "sxalloc",                           /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/sxalloc.m"/* pName */
};

static emlrtRTEInfo c11_c_emlrtRTEI = { 36,/* lineNo */
  32,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c11_d_emlrtRTEI = { 58,/* lineNo */
  28,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c11_e_emlrtRTEI = { 20,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c11_f_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "scalexpAlloc",                      /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"/* pName */
};

static emlrtRTEInfo c11_g_emlrtRTEI = { 47,/* lineNo */
  9,                                   /* colNo */
  "sxalloc",                           /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/sxalloc.m"/* pName */
};

static emlrtRTEInfo c11_h_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "normrnd",                           /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/private/normrnd.m"/* pName */
};

static emlrtRTEInfo c11_i_emlrtRTEI = { 13,/* lineNo */
  8,                                   /* colNo */
  "normrnd",                           /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/private/normrnd.m"/* pName */
};

static emlrtRTEInfo c11_j_emlrtRTEI = { 23,/* lineNo */
  23,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_k_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_l_emlrtRTEI = { 31,/* lineNo */
  5,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_m_emlrtRTEI = { 32,/* lineNo */
  5,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_n_emlrtRTEI = { 33,/* lineNo */
  5,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_o_emlrtRTEI = { 35,/* lineNo */
  5,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_p_emlrtRTEI = { 52,/* lineNo */
  5,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_q_emlrtRTEI = { 69,/* lineNo */
  28,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c11_r_emlrtRTEI = { 94,/* lineNo */
  38,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c11_s_emlrtRTEI = { 37,/* lineNo */
  28,                                  /* colNo */
  "eml_rand_mt19937ar_stateful",       /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m"/* pName */
};

static emlrtRTEInfo c11_t_emlrtRTEI = { 218,/* lineNo */
  20,                                  /* colNo */
  "mtimes",                            /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pName */
};

static emlrtRTEInfo c11_u_emlrtRTEI = { 140,/* lineNo */
  5,                                   /* colNo */
  "mtimes",                            /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pName */
};

static emlrtRTEInfo c11_v_emlrtRTEI = { 60,/* lineNo */
  13,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_w_emlrtRTEI = { 60,/* lineNo */
  5,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_x_emlrtRTEI = { 6,/* lineNo */
  16,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_y_emlrtRTEI = { 6,/* lineNo */
  26,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_ab_emlrtRTEI = { 6,/* lineNo */
  32,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_bb_emlrtRTEI = { 6,/* lineNo */
  38,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_cb_emlrtRTEI = { 6,/* lineNo */
  44,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_db_emlrtRTEI = { 53,/* lineNo */
  5,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_eb_emlrtRTEI = { 54,/* lineNo */
  5,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_fb_emlrtRTEI = { 55,/* lineNo */
  5,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtRTEInfo c11_gb_emlrtRTEI = { 36,/* lineNo */
  9,                                   /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"/* pName */
};

static emlrtDCInfo c11_emlrtDCI = { 31,/* lineNo */
  15,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c11_b_emlrtDCI = { 31,/* lineNo */
  15,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c11_c_emlrtDCI = { 31,/* lineNo */
  29,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c11_d_emlrtDCI = { 31,/* lineNo */
  29,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c11_e_emlrtDCI = { 32,/* lineNo */
  15,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c11_f_emlrtDCI = { 32,/* lineNo */
  15,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c11_g_emlrtDCI = { 32,/* lineNo */
  29,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c11_h_emlrtDCI = { 32,/* lineNo */
  29,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c11_i_emlrtDCI = { 33,/* lineNo */
  15,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c11_j_emlrtDCI = { 33,/* lineNo */
  15,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c11_k_emlrtDCI = { 33,/* lineNo */
  29,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c11_l_emlrtDCI = { 33,/* lineNo */
  29,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo c11_hb_emlrtRTEI = { 37,/* lineNo */
  13,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtECInfo c11_emlrtECI = { 1, /* nDims */
  57,                                  /* lineNo */
  17,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtECInfo c11_b_emlrtECI = { 1,/* nDims */
  58,                                  /* lineNo */
  13,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtECInfo c11_c_emlrtECI = { 1,/* nDims */
  59,                                  /* lineNo */
  13,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtECInfo c11_d_emlrtECI = { 1,/* nDims */
  60,                                  /* lineNo */
  13,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475"  /* pName */
};

static emlrtDCInfo c11_m_emlrtDCI = { 47,/* lineNo */
  63,                                  /* colNo */
  "sxalloc",                           /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/sxalloc.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c11_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  31,                                  /* colNo */
  "w_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_n_emlrtDCI = { 38,/* lineNo */
  31,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  54,                                  /* colNo */
  "theta_last",                        /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_o_emlrtDCI = { 38,/* lineNo */
  54,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  63,                                  /* colNo */
  "r_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_p_emlrtDCI = { 38,/* lineNo */
  63,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  74,                                  /* colNo */
  "v_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_q_emlrtDCI = { 38,/* lineNo */
  74,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  51,                                  /* colNo */
  "theta_last",                        /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_r_emlrtDCI = { 39,/* lineNo */
  51,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  60,                                  /* colNo */
  "r_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_s_emlrtDCI = { 39,/* lineNo */
  60,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  71,                                  /* colNo */
  "v_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_t_emlrtDCI = { 39,/* lineNo */
  71,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  30,                                  /* colNo */
  "w_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_u_emlrtDCI = { 39,/* lineNo */
  30,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  46,                                  /* colNo */
  "w_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_v_emlrtDCI = { 40,/* lineNo */
  46,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  35,                                  /* colNo */
  "theta_last",                        /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_w_emlrtDCI = { 40,/* lineNo */
  35,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_k_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  69,                                  /* colNo */
  "theta_last",                        /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_x_emlrtDCI = { 40,/* lineNo */
  69,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  78,                                  /* colNo */
  "r_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_y_emlrtDCI = { 40,/* lineNo */
  78,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  89,                                  /* colNo */
  "v_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_ab_emlrtDCI = { 40,/* lineNo */
  89,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  23,                                  /* colNo */
  "w_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_bb_emlrtDCI = { 42,/* lineNo */
  23,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  45,                                  /* colNo */
  "Theta_hat",                         /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_cb_emlrtDCI = { 42,/* lineNo */
  45,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  54,                                  /* colNo */
  "r_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_db_emlrtDCI = { 42,/* lineNo */
  54,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  65,                                  /* colNo */
  "v_hat",                             /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_eb_emlrtDCI = { 42,/* lineNo */
  65,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c11_fb_emlrtDCI = { 25,/* lineNo */
  9,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c11_gb_emlrtDCI = { 25,/* lineNo */
  9,                                   /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c11_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  19,                                  /* colNo */
  "Theta_hat",                         /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_hb_emlrtDCI = { 43,/* lineNo */
  19,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  29,                                  /* colNo */
  "Theta_hat",                         /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_ib_emlrtDCI = { 45,/* lineNo */
  29,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  11,                                  /* colNo */
  "A",                                 /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_jb_emlrtDCI = { 45,/* lineNo */
  11,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  13,                                  /* colNo */
  "A",                                 /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_kb_emlrtDCI = { 45,/* lineNo */
  13,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  29,                                  /* colNo */
  "Theta_hat",                         /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_lb_emlrtDCI = { 46,/* lineNo */
  29,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  11,                                  /* colNo */
  "B",                                 /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_mb_emlrtDCI = { 46,/* lineNo */
  11,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  13,                                  /* colNo */
  "B",                                 /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_nb_emlrtDCI = { 46,/* lineNo */
  13,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_y_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  29,                                  /* colNo */
  "Theta_hat",                         /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_ob_emlrtDCI = { 47,/* lineNo */
  29,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  11,                                  /* colNo */
  "C",                                 /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_pb_emlrtDCI = { 47,/* lineNo */
  11,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_bb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  13,                                  /* colNo */
  "C",                                 /* aName */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_qb_emlrtDCI = { 47,/* lineNo */
  13,                                  /* colNo */
  "ABS-SMC/Antilock Braking System/RNN Uncertainty Observer",/* fName */
  "#ABS_contDyn_model_SMC_FZL_NN:475", /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c11_rb_emlrtDCI = { 37,/* lineNo */
  34,                                  /* colNo */
  "eml_rand_mt19937ar_stateful",       /* fName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRSInfo c11_vb_emlrtRSI = { 140,/* lineNo */
  "mtimes",                            /* fcnName */
  "/Applications/MATLAB_R2024b.app/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

static char_T c11_cv[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y', 'n',
  'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a', 'n', 's',
  'i', 'o', 'n' };

static char_T c11_cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
  'e', 'r', 'd', 'i', 'm' };

static uint32_T c11_uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
  1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
  2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
  951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
  1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
  1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
  3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
  1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
  761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
  3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
  699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
  1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
  4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
  3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
  4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
  170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
  1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
  1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
  1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
  3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
  501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
  1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
  2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
  2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
  4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
  2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
  2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
  3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
  733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
  1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
  627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
  3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
  3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
  3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
  354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
  1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
  1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
  3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
  2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
  2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
  548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
  1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
  3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
  2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
  191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
  3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
  396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
  3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
  2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
  3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
  1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
  1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
  976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
  2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
  766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
  3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
  1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
  607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
  3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
  1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
  2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
  4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
  551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
  3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
  1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
  552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
  181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
  3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
  4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
  478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
  3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
  786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
  2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
  4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
  4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
  3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
  3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
  370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
  3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
  1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
  2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
  2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
  4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
  1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
  506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
  138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
  3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
  1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
  2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
  643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
  1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
  4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
  4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
  1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
  3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
  3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
  3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
  190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
  2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
  453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
  4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
  2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
  363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
  1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
  2844269403U, 79981964U, 624U };

/* Function Declarations */
static void initialize_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void initialize_params_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void mdl_start_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void mdl_terminate_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void enable_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void disable_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void sf_gateway_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void ext_mode_exec_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void c11_update_jit_animation_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void c11_do_animation_call_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void set_sim_state_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_st);
static void c11_rng(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
                    *chartInstance);
static real_T c11_now(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
                      *chartInstance);
static void c11_randn(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
                      *chartInstance, const emlrtStack *c11_sp, real_T
                      c11_varargin_1, c11_coder_array_real_T *c11_r);
static void c11_eml_rand_mt19937ar
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, uint32_T c11_e_state[625], uint32_T c11_f_state[625],
   real_T *c11_r);
static void c11_genrand_uint32_vector
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, uint32_T
   c11_mt[625], uint32_T c11_b_mt[625], uint32_T c11_u[2]);
static void c11_genrandu(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
  *chartInstance, const emlrtStack *c11_sp, uint32_T c11_mt[625], uint32_T
  c11_b_mt[625], real_T *c11_r);
static void c11_b_randn(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
  *chartInstance, const emlrtStack *c11_sp, real_T c11_varargin_1[2],
  c11_coder_array_real_T *c11_r);
static void c11_dynamic_size_checks
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, c11_coder_array_real_T_2D *c11_a, c11_coder_array_real_T *
   c11_b, int32_T c11_innerDimA, int32_T c11_innerDimB);
static void c11_mtimes(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
  *chartInstance, const emlrtStack *c11_sp, c11_coder_array_real_T_2D *c11_A,
  c11_coder_array_real_T *c11_B, c11_coder_array_real_T *c11_C);
static real_T c11_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_nullptr, const char_T *c11_identifier);
static real_T c11_b_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_c_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, const mxArray *c11_nullptr, const char_T *c11_identifier,
   boolean_T *c11_svPtr, c11_coder_array_real_T *c11_y);
static void c11_d_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, const mxArray *c11_u, const emlrtMsgIdentifier
   *c11_parentId, boolean_T *c11_svPtr, c11_coder_array_real_T *c11_y);
static real_T c11_e_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_nullptr, const char_T *c11_identifier, boolean_T *c11_svPtr);
static real_T c11_f_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId, boolean_T *c11_svPtr);
static uint32_T c11_g_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_nullptr, const char_T *c11_identifier, boolean_T *c11_svPtr);
static uint32_T c11_h_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId, boolean_T *c11_svPtr);
static void c11_i_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_nullptr, const char_T *c11_identifier, boolean_T *c11_svPtr,
   uint32_T c11_y[625]);
static void c11_j_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId, boolean_T *c11_svPtr,
   uint32_T c11_y[625]);
static void c11_k_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_nullptr, const char_T *c11_identifier, boolean_T *c11_svPtr,
   uint32_T c11_y[2]);
static void c11_l_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId, boolean_T *c11_svPtr,
   uint32_T c11_y[2]);
static real_T c11_b_eml_rand_mt19937ar
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, uint32_T c11_e_state[625]);
static void c11_b_genrand_uint32_vector
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, uint32_T
   c11_mt[625], uint32_T c11_u[2]);
static real_T c11_b_genrandu(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
  *chartInstance, const emlrtStack *c11_sp, uint32_T c11_mt[625]);
static void c11_plus(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
                     *chartInstance, const emlrtStack *c11_sp,
                     c11_coder_array_real_T *c11_in1, c11_coder_array_real_T
                     *c11_in2);
static void c11_array_real_T_SetSize
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, c11_coder_array_real_T *c11_coderArray, const
   emlrtRTEInfo *c11_srcLocation, int32_T c11_size0);
static void c11_array_boolean_T_SetSize
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, c11_coder_array_boolean_T *c11_coderArray, const
   emlrtRTEInfo *c11_srcLocation, int32_T c11_size0);
static void c11_array_real_T_2D_SetSize
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, c11_coder_array_real_T_2D *c11_coderArray, const
   emlrtRTEInfo *c11_srcLocation, int32_T c11_size0, int32_T c11_size1);
static void c11_array_real_T_Constructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_real_T *c11_coderArray);
static void c11_array_real_T_Destructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_real_T *c11_coderArray);
static void c11_array_real_T_2D_Constructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_real_T_2D *c11_coderArray);
static void c11_array_boolean_T_Constructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_boolean_T *c11_coderArray);
static void c11_array_real_T_2D_Destructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_real_T_2D *c11_coderArray);
static void c11_array_boolean_T_Destructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_boolean_T *c11_coderArray);
static void init_dsm_address_info
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  emlrtStack c11_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c11_st.tls = chartInstance->c11_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c11_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "statistics_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c11_init_flag_not_empty = false;
  chartInstance->c11_alpha_hat_not_empty = false;
  chartInstance->c11_v_hat_not_empty = false;
  chartInstance->c11_w_hat_not_empty = false;
  chartInstance->c11_r_hat_not_empty = false;
  chartInstance->c11_Theta_hat_not_empty = false;
  chartInstance->c11_seed_not_empty = false;
  chartInstance->c11_method_not_empty = false;
  chartInstance->c11_state_not_empty = false;
  chartInstance->c11_b_state_not_empty = false;
  chartInstance->c11_c_state_not_empty = false;
  chartInstance->c11_b_method_not_empty = false;
  chartInstance->c11_d_state_not_empty = false;
  chartInstance->c11_doneDoubleBufferReInit = false;
  chartInstance->c11_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  c11_struct_eEK4UP04tYRm1KL9kIRfJH c11_r;
  const mxArray *c11_m = NULL;
  const mxArray *c11_mxField;
  real_T c11_d;
  const char_T *c11_fieldNamesVar[6] = { "eta1", "eta2", "eta3", "eta4", "eta5",
    "neuron_N" };

  c11_m = sf_mex_get_sfun_param(chartInstance->S, 1U, 1U);
  sf_mex_check_bus_parameter(c11_m, 0, NULL, 6, &c11_fieldNamesVar[0], "rnn",
    "struct_eEK4UP04tYRm1KL9kIRfJH");
  c11_mxField = sf_mex_getfield(c11_m, "eta1", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c11_mxField), &c11_r.eta1, 1, 0, 0U, 0,
                      0U, 0);
  c11_mxField = sf_mex_getfield(c11_m, "eta2", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c11_mxField), &c11_r.eta2, 1, 0, 0U, 0,
                      0U, 0);
  c11_mxField = sf_mex_getfield(c11_m, "eta3", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c11_mxField), &c11_r.eta3, 1, 0, 0U, 0,
                      0U, 0);
  c11_mxField = sf_mex_getfield(c11_m, "eta4", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c11_mxField), &c11_r.eta4, 1, 0, 0U, 0,
                      0U, 0);
  c11_mxField = sf_mex_getfield(c11_m, "eta5", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c11_mxField), &c11_r.eta5, 1, 0, 0U, 0,
                      0U, 0);
  c11_mxField = sf_mex_getfield(c11_m, "neuron_N", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c11_mxField), &c11_r.neuron_N, 1, 0, 0U,
                      0, 0U, 0);
  sf_mex_destroy(&c11_m);
  sf_mex_clear_bus_parameter_worklist();
  chartInstance->c11_rnn = c11_r;
  sf_mex_import_named("dt", sf_mex_get_sfun_param(chartInstance->S, 0U, 0U),
                      &c11_d, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c11_dt = c11_d;
}

static void mdl_start_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  c11_array_real_T_Constructor(chartInstance, &chartInstance->c11_alpha_hat);
  c11_array_real_T_Constructor(chartInstance, &chartInstance->c11_v_hat);
  c11_array_real_T_Constructor(chartInstance, &chartInstance->c11_w_hat);
  c11_array_real_T_Constructor(chartInstance, &chartInstance->c11_r_hat);
  c11_array_real_T_Constructor(chartInstance, &chartInstance->c11_Theta_hat);
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  c11_array_real_T_Destructor(chartInstance, &chartInstance->c11_alpha_hat);
  c11_array_real_T_Destructor(chartInstance, &chartInstance->c11_v_hat);
  c11_array_real_T_Destructor(chartInstance, &chartInstance->c11_w_hat);
  c11_array_real_T_Destructor(chartInstance, &chartInstance->c11_r_hat);
  c11_array_real_T_Destructor(chartInstance, &chartInstance->c11_Theta_hat);
}

static void mdl_setup_runtime_resources_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  static const uint32_T c11_decisionTxtEndIdx = 0U;
  static const uint32_T c11_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c11_JITStateAnimation
                        [0], &chartInstance->c11_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c11_covrtInstance, 1U, 0U, 1U,
    89U);
  covrtChartInitFcn(chartInstance->c11_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c11_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c11_decisionTxtStartIdx, &c11_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c11_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c11_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  0U, 0U, 1U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U,
                     "c11_ABS_contDyn_model_SMC_FZL_NN", 0, -1, 2550);
  covrtEmlIfInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U, 237, 260, -1,
                    1302, false);
  covrtEmlForInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U, 1505, 1527,
                     2021);
}

static void mdl_cleanup_runtime_resources_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c11_covrtInstance);
}

static void enable_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  ptrdiff_t c11_incx_t;
  ptrdiff_t c11_incy_t;
  ptrdiff_t c11_n_t;
  c11_coder_array_boolean_T c11_varargin_3;
  c11_coder_array_real_T c11_r;
  c11_coder_array_real_T c11_r1;
  c11_coder_array_real_T c11_r2;
  c11_coder_array_real_T c11_r3;
  c11_coder_array_real_T c11_r4;
  c11_coder_array_real_T c11_r5;
  c11_coder_array_real_T c11_r6;
  c11_coder_array_real_T c11_r7;
  c11_coder_array_real_T c11_r8;
  c11_coder_array_real_T c11_r9;
  c11_coder_array_real_T c11_r_hat_dot;
  c11_coder_array_real_T c11_v_hat_dot;
  c11_coder_array_real_T c11_w_hat_dot;
  c11_coder_array_real_T c11_ztemp;
  c11_coder_array_real_T_2D c11_A;
  c11_coder_array_real_T_2D c11_B;
  c11_coder_array_real_T_2D c11_C;
  c11_struct_eEK4UP04tYRm1KL9kIRfJH c11_b_rnn;
  emlrtStack c11_b_st;
  emlrtStack c11_c_st;
  emlrtStack c11_d_st;
  emlrtStack c11_e_st;
  emlrtStack c11_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c11_b_y = NULL;
  const mxArray *c11_c_y = NULL;
  const mxArray *c11_d_y = NULL;
  const mxArray *c11_y = NULL;
  real_T c11_dv[2];
  real_T c11_dv1[2];
  real_T c11_varargin_1[2];
  real_T c11_a;
  real_T c11_ab_a;
  real_T c11_b;
  real_T c11_b_a;
  real_T c11_b_b;
  real_T c11_b_c;
  real_T c11_b_d_hat;
  real_T c11_b_dt;
  real_T c11_b_k;
  real_T c11_b_roundFloatVar;
  real_T c11_b_s;
  real_T c11_b_x;
  real_T c11_bb_a;
  real_T c11_c;
  real_T c11_c_a;
  real_T c11_c_b;
  real_T c11_c_c;
  real_T c11_c_roundFloatVar;
  real_T c11_cb_a;
  real_T c11_d;
  real_T c11_d1;
  real_T c11_d10;
  real_T c11_d11;
  real_T c11_d12;
  real_T c11_d13;
  real_T c11_d14;
  real_T c11_d15;
  real_T c11_d16;
  real_T c11_d17;
  real_T c11_d18;
  real_T c11_d19;
  real_T c11_d2;
  real_T c11_d20;
  real_T c11_d21;
  real_T c11_d22;
  real_T c11_d23;
  real_T c11_d24;
  real_T c11_d25;
  real_T c11_d26;
  real_T c11_d27;
  real_T c11_d28;
  real_T c11_d3;
  real_T c11_d4;
  real_T c11_d5;
  real_T c11_d6;
  real_T c11_d7;
  real_T c11_d8;
  real_T c11_d9;
  real_T c11_d_a;
  real_T c11_d_b;
  real_T c11_d_c;
  real_T c11_d_roundFloatVar;
  real_T c11_db_a;
  real_T c11_dnetk_dr;
  real_T c11_dnetk_dv;
  real_T c11_dnetk_dw;
  real_T c11_e_a;
  real_T c11_e_c;
  real_T c11_e_roundFloatVar;
  real_T c11_f_a;
  real_T c11_f_roundFloatVar;
  real_T c11_g_a;
  real_T c11_g_roundFloatVar;
  real_T c11_h_a;
  real_T c11_h_roundFloatVar;
  real_T c11_i_a;
  real_T c11_j_a;
  real_T c11_k_a;
  real_T c11_l_a;
  real_T c11_m_a;
  real_T c11_n_a;
  real_T c11_net_k;
  real_T c11_o_a;
  real_T c11_p_a;
  real_T c11_q_a;
  real_T c11_r_a;
  real_T c11_roundFloatVar;
  real_T c11_s_a;
  real_T c11_t_a;
  real_T c11_u_a;
  real_T c11_v_a;
  real_T c11_w_a;
  real_T c11_x;
  real_T c11_x_a;
  real_T c11_y_a;
  int32_T c11_iv[1];
  int32_T c11_ab_loop_ub;
  int32_T c11_b_fixedVar;
  int32_T c11_b_innerDimA;
  int32_T c11_b_innerDimB;
  int32_T c11_b_loop_ub;
  int32_T c11_b_mA;
  int32_T c11_b_n;
  int32_T c11_bb_loop_ub;
  int32_T c11_c_fixedVar;
  int32_T c11_c_innerDimA;
  int32_T c11_c_innerDimB;
  int32_T c11_c_k;
  int32_T c11_c_loop_ub;
  int32_T c11_c_n;
  int32_T c11_cb_loop_ub;
  int32_T c11_d_fixedVar;
  int32_T c11_d_innerDimA;
  int32_T c11_d_innerDimB;
  int32_T c11_d_loop_ub;
  int32_T c11_d_n;
  int32_T c11_db_loop_ub;
  int32_T c11_e_fixedVar;
  int32_T c11_e_innerDimA;
  int32_T c11_e_innerDimB;
  int32_T c11_e_loop_ub;
  int32_T c11_eb_loop_ub;
  int32_T c11_f_fixedVar;
  int32_T c11_f_loop_ub;
  int32_T c11_fb_loop_ub;
  int32_T c11_fixedVar;
  int32_T c11_g_fixedVar;
  int32_T c11_g_loop_ub;
  int32_T c11_gb_loop_ub;
  int32_T c11_h_fixedVar;
  int32_T c11_h_loop_ub;
  int32_T c11_hb_loop_ub;
  int32_T c11_i;
  int32_T c11_i1;
  int32_T c11_i10;
  int32_T c11_i100;
  int32_T c11_i101;
  int32_T c11_i102;
  int32_T c11_i103;
  int32_T c11_i104;
  int32_T c11_i105;
  int32_T c11_i106;
  int32_T c11_i107;
  int32_T c11_i108;
  int32_T c11_i109;
  int32_T c11_i11;
  int32_T c11_i12;
  int32_T c11_i13;
  int32_T c11_i14;
  int32_T c11_i15;
  int32_T c11_i16;
  int32_T c11_i17;
  int32_T c11_i18;
  int32_T c11_i19;
  int32_T c11_i2;
  int32_T c11_i20;
  int32_T c11_i21;
  int32_T c11_i22;
  int32_T c11_i23;
  int32_T c11_i24;
  int32_T c11_i25;
  int32_T c11_i26;
  int32_T c11_i27;
  int32_T c11_i28;
  int32_T c11_i29;
  int32_T c11_i3;
  int32_T c11_i30;
  int32_T c11_i31;
  int32_T c11_i32;
  int32_T c11_i33;
  int32_T c11_i34;
  int32_T c11_i35;
  int32_T c11_i36;
  int32_T c11_i37;
  int32_T c11_i38;
  int32_T c11_i39;
  int32_T c11_i4;
  int32_T c11_i40;
  int32_T c11_i41;
  int32_T c11_i42;
  int32_T c11_i43;
  int32_T c11_i44;
  int32_T c11_i45;
  int32_T c11_i46;
  int32_T c11_i47;
  int32_T c11_i48;
  int32_T c11_i49;
  int32_T c11_i5;
  int32_T c11_i50;
  int32_T c11_i51;
  int32_T c11_i52;
  int32_T c11_i53;
  int32_T c11_i54;
  int32_T c11_i55;
  int32_T c11_i56;
  int32_T c11_i57;
  int32_T c11_i58;
  int32_T c11_i59;
  int32_T c11_i6;
  int32_T c11_i60;
  int32_T c11_i61;
  int32_T c11_i62;
  int32_T c11_i63;
  int32_T c11_i64;
  int32_T c11_i65;
  int32_T c11_i66;
  int32_T c11_i67;
  int32_T c11_i68;
  int32_T c11_i69;
  int32_T c11_i7;
  int32_T c11_i70;
  int32_T c11_i71;
  int32_T c11_i72;
  int32_T c11_i73;
  int32_T c11_i74;
  int32_T c11_i75;
  int32_T c11_i76;
  int32_T c11_i77;
  int32_T c11_i78;
  int32_T c11_i79;
  int32_T c11_i8;
  int32_T c11_i80;
  int32_T c11_i81;
  int32_T c11_i82;
  int32_T c11_i83;
  int32_T c11_i84;
  int32_T c11_i85;
  int32_T c11_i86;
  int32_T c11_i87;
  int32_T c11_i88;
  int32_T c11_i89;
  int32_T c11_i9;
  int32_T c11_i90;
  int32_T c11_i91;
  int32_T c11_i92;
  int32_T c11_i93;
  int32_T c11_i94;
  int32_T c11_i95;
  int32_T c11_i96;
  int32_T c11_i97;
  int32_T c11_i98;
  int32_T c11_i99;
  int32_T c11_i_loop_ub;
  int32_T c11_innerDimA;
  int32_T c11_innerDimB;
  int32_T c11_j_loop_ub;
  int32_T c11_k;
  int32_T c11_k_loop_ub;
  int32_T c11_l_loop_ub;
  int32_T c11_loop_ub;
  int32_T c11_mA;
  int32_T c11_m_loop_ub;
  int32_T c11_n;
  int32_T c11_n_loop_ub;
  int32_T c11_o_loop_ub;
  int32_T c11_p_loop_ub;
  int32_T c11_q_loop_ub;
  int32_T c11_r_loop_ub;
  int32_T c11_s_loop_ub;
  int32_T c11_t_loop_ub;
  int32_T c11_u_loop_ub;
  int32_T c11_v_loop_ub;
  int32_T c11_var;
  int32_T c11_w_loop_ub;
  int32_T c11_x_loop_ub;
  int32_T c11_y_loop_ub;
  boolean_T c11_innerDimOk;
  c11_st.tls = chartInstance->c11_fEmlrtCtx;
  c11_b_st.prev = &c11_st;
  c11_b_st.tls = c11_st.tls;
  c11_c_st.prev = &c11_b_st;
  c11_c_st.tls = c11_b_st.tls;
  c11_d_st.prev = &c11_c_st;
  c11_d_st.tls = c11_c_st.tls;
  c11_e_st.prev = &c11_d_st;
  c11_e_st.tls = c11_d_st.tls;
  covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 0U, *chartInstance->c11_s);
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c11_JITTransitionAnimation[0] = 0U;
  chartInstance->c11_sfEvent = CALL_EVENT;
  c11_b_s = *chartInstance->c11_s;
  c11_b_rnn = chartInstance->c11_rnn;
  c11_b_dt = chartInstance->c11_dt;
  covrtEmlFcnEval(chartInstance->c11_covrtInstance, 4U, 0, 0);
  c11_array_real_T_Constructor(chartInstance, &c11_ztemp);
  if (covrtEmlIfEval(chartInstance->c11_covrtInstance, 4U, 0, 0,
                     !chartInstance->c11_init_flag_not_empty)) {
    c11_b_st.site = &c11_emlrtRSI;
    c11_rng(chartInstance);
    c11_array_real_T_Constructor(chartInstance, &c11_r);
    c11_b_st.site = &c11_b_emlrtRSI;
    c11_randn(chartInstance, &c11_b_st, c11_b_rnn.neuron_N, &c11_r);
    c11_array_real_T_SetSize(chartInstance, &c11_st,
      &chartInstance->c11_alpha_hat, &c11_emlrtRTEI, c11_r.size[0]);
    c11_loop_ub = c11_r.size[0] - 1;
    for (c11_i = 0; c11_i <= c11_loop_ub; c11_i++) {
      chartInstance->c11_alpha_hat.vector.data[c11_i] = c11_r.vector.data[c11_i];
    }

    c11_array_real_T_Destructor(chartInstance, &c11_r);
    c11_b_loop_ub = chartInstance->c11_alpha_hat.size[0] - 1;
    for (c11_i1 = 0; c11_i1 <= c11_b_loop_ub; c11_i1++) {
      chartInstance->c11_alpha_hat.vector.data[c11_i1] *= 0.01;
    }

    chartInstance->c11_alpha_hat_not_empty = true;
    chartInstance->c11_alpha_hat_not_empty = (chartInstance->c11_alpha_hat.size
      [0] != 0);
    c11_b_st.site = &c11_c_emlrtRSI;
    c11_varargin_1[0] = c11_b_rnn.neuron_N;
    c11_varargin_1[1] = 1.0;
    c11_c_st.site = &c11_fb_emlrtRSI;
    c11_d_st.site = &c11_gb_emlrtRSI;
    c11_e_st.site = &c11_hb_emlrtRSI;
    for (c11_i3 = 0; c11_i3 < 2; c11_i3++) {
      if (!(c11_varargin_1[c11_i3] >= 0.0)) {
        emlrtNonNegativeCheckR2012b(c11_varargin_1[c11_i3], &c11_m_emlrtDCI,
          &c11_e_st);
      }
    }

    c11_array_boolean_T_Constructor(chartInstance, &c11_varargin_3);
    c11_array_boolean_T_SetSize(chartInstance, &c11_e_st, &c11_varargin_3,
      &c11_b_emlrtRTEI, (int32_T)c11_varargin_1[0]);
    c11_c_loop_ub = (int32_T)c11_varargin_1[0] - 1;
    for (c11_i4 = 0; c11_i4 <= c11_c_loop_ub; c11_i4++) {
      c11_varargin_3.vector.data[c11_i4] = false;
    }

    c11_varargin_1[0] = (real_T)c11_varargin_3.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_e_st, &c11_ztemp,
      &c11_c_emlrtRTEI, (int32_T)c11_varargin_1[0]);
    c11_iv[0] = c11_ztemp.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_e_st, &c11_ztemp,
      &c11_d_emlrtRTEI, c11_iv[0]);
    c11_iv[0] = c11_ztemp.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_e_st, &c11_ztemp,
      &c11_e_emlrtRTEI, c11_iv[0]);
    c11_iv[0] = c11_ztemp.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_e_st, &c11_ztemp,
      &c11_f_emlrtRTEI, c11_iv[0]);
    c11_iv[0] = c11_ztemp.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_e_st, &c11_ztemp,
      &c11_g_emlrtRTEI, c11_iv[0]);
    c11_iv[0] = c11_ztemp.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_d_st, &chartInstance->c11_v_hat,
      &c11_h_emlrtRTEI, c11_iv[0]);
    c11_d6 = (real_T)chartInstance->c11_v_hat.size[0];
    c11_dv[0] = c11_d6;
    c11_dv[1] = 1.0;
    c11_array_real_T_Constructor(chartInstance, &c11_r1);
    c11_e_st.site = &c11_ib_emlrtRSI;
    c11_b_randn(chartInstance, &c11_e_st, c11_dv, &c11_r1);
    c11_array_real_T_SetSize(chartInstance, &c11_d_st, &chartInstance->c11_v_hat,
      &c11_i_emlrtRTEI, c11_r1.size[0]);
    c11_e_loop_ub = c11_r1.size[0] - 1;
    for (c11_i7 = 0; c11_i7 <= c11_e_loop_ub; c11_i7++) {
      chartInstance->c11_v_hat.vector.data[c11_i7] = c11_r1.vector.data[c11_i7];
    }

    c11_array_real_T_Destructor(chartInstance, &c11_r1);
    c11_f_loop_ub = chartInstance->c11_v_hat.size[0] - 1;
    for (c11_i8 = 0; c11_i8 <= c11_f_loop_ub; c11_i8++) {
      chartInstance->c11_v_hat.vector.data[c11_i8] *= 0.05;
    }

    chartInstance->c11_v_hat_not_empty = true;
    chartInstance->c11_v_hat_not_empty = (chartInstance->c11_v_hat.size[0] != 0);
    c11_b_st.site = &c11_d_emlrtRSI;
    c11_varargin_1[0] = c11_b_rnn.neuron_N;
    c11_varargin_1[1] = 1.0;
    c11_c_st.site = &c11_fb_emlrtRSI;
    c11_d_st.site = &c11_gb_emlrtRSI;
    c11_e_st.site = &c11_hb_emlrtRSI;
    for (c11_i10 = 0; c11_i10 < 2; c11_i10++) {
      if (!(c11_varargin_1[c11_i10] >= 0.0)) {
        emlrtNonNegativeCheckR2012b(c11_varargin_1[c11_i10], &c11_m_emlrtDCI,
          &c11_e_st);
      }
    }

    c11_array_boolean_T_SetSize(chartInstance, &c11_e_st, &c11_varargin_3,
      &c11_b_emlrtRTEI, (int32_T)c11_varargin_1[0]);
    c11_g_loop_ub = (int32_T)c11_varargin_1[0] - 1;
    for (c11_i11 = 0; c11_i11 <= c11_g_loop_ub; c11_i11++) {
      c11_varargin_3.vector.data[c11_i11] = false;
    }

    c11_varargin_1[0] = (real_T)c11_varargin_3.size[0];
    c11_array_boolean_T_Destructor(chartInstance, &c11_varargin_3);
    c11_array_real_T_SetSize(chartInstance, &c11_e_st, &c11_ztemp,
      &c11_c_emlrtRTEI, (int32_T)c11_varargin_1[0]);
    c11_iv[0] = c11_ztemp.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_e_st, &c11_ztemp,
      &c11_d_emlrtRTEI, c11_iv[0]);
    c11_iv[0] = c11_ztemp.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_e_st, &c11_ztemp,
      &c11_e_emlrtRTEI, c11_iv[0]);
    c11_iv[0] = c11_ztemp.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_e_st, &c11_ztemp,
      &c11_f_emlrtRTEI, c11_iv[0]);
    c11_iv[0] = c11_ztemp.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_e_st, &c11_ztemp,
      &c11_g_emlrtRTEI, c11_iv[0]);
    c11_iv[0] = c11_ztemp.size[0];
    c11_array_real_T_SetSize(chartInstance, &c11_d_st, &chartInstance->c11_w_hat,
      &c11_h_emlrtRTEI, c11_iv[0]);
    c11_d13 = (real_T)chartInstance->c11_w_hat.size[0];
    c11_dv1[0] = c11_d13;
    c11_dv1[1] = 1.0;
    c11_array_real_T_Constructor(chartInstance, &c11_r2);
    c11_e_st.site = &c11_ib_emlrtRSI;
    c11_b_randn(chartInstance, &c11_e_st, c11_dv1, &c11_r2);
    c11_array_real_T_SetSize(chartInstance, &c11_d_st, &chartInstance->c11_w_hat,
      &c11_i_emlrtRTEI, c11_r2.size[0]);
    c11_i_loop_ub = c11_r2.size[0] - 1;
    for (c11_i14 = 0; c11_i14 <= c11_i_loop_ub; c11_i14++) {
      chartInstance->c11_w_hat.vector.data[c11_i14] = c11_r2.vector.data[c11_i14];
    }

    c11_array_real_T_Destructor(chartInstance, &c11_r2);
    c11_j_loop_ub = chartInstance->c11_w_hat.size[0] - 1;
    for (c11_i15 = 0; c11_i15 <= c11_j_loop_ub; c11_i15++) {
      chartInstance->c11_w_hat.vector.data[c11_i15] =
        chartInstance->c11_w_hat.vector.data[c11_i15] * 0.1 + 2.0;
    }

    chartInstance->c11_w_hat_not_empty = true;
    chartInstance->c11_w_hat_not_empty = (chartInstance->c11_w_hat.size[0] != 0);
    c11_array_real_T_Constructor(chartInstance, &c11_r3);
    c11_b_st.site = &c11_e_emlrtRSI;
    c11_randn(chartInstance, &c11_b_st, c11_b_rnn.neuron_N, &c11_r3);
    c11_array_real_T_SetSize(chartInstance, &c11_st, &chartInstance->c11_r_hat,
      &c11_j_emlrtRTEI, c11_r3.size[0]);
    c11_k_loop_ub = c11_r3.size[0] - 1;
    for (c11_i17 = 0; c11_i17 <= c11_k_loop_ub; c11_i17++) {
      chartInstance->c11_r_hat.vector.data[c11_i17] = c11_r3.vector.data[c11_i17];
    }

    c11_array_real_T_Destructor(chartInstance, &c11_r3);
    c11_l_loop_ub = chartInstance->c11_r_hat.size[0] - 1;
    for (c11_i18 = 0; c11_i18 <= c11_l_loop_ub; c11_i18++) {
      chartInstance->c11_r_hat.vector.data[c11_i18] *= 0.1;
    }

    chartInstance->c11_r_hat_not_empty = true;
    chartInstance->c11_r_hat_not_empty = (chartInstance->c11_r_hat.size[0] != 0);
    if (!(c11_b_rnn.neuron_N >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c11_b_rnn.neuron_N, &c11_gb_emlrtDCI, &c11_st);
    }

    c11_d19 = c11_b_rnn.neuron_N;
    if (c11_d19 != (real_T)(int32_T)muDoubleScalarFloor(c11_d19)) {
      emlrtIntegerCheckR2012b(c11_d19, &c11_fb_emlrtDCI, &c11_st);
    }

    c11_d21 = trunc(c11_d19);
    if (muDoubleScalarIsNaN(c11_d21) || muDoubleScalarIsInf(c11_d21)) {
      c11_d22 = 0.0;
    } else {
      c11_d22 = muDoubleScalarRem(c11_d21, 4.294967296E+9);
    }

    c11_g_roundFloatVar = trunc(c11_d19);
    if (c11_d22 < 0.0) {
      c11_g_fixedVar = -(int32_T)(uint32_T)-c11_d22;
    } else {
      c11_g_fixedVar = (int32_T)(uint32_T)c11_d22;
    }

    if (c11_g_roundFloatVar < 0.0) {
      c11_d23 = muDoubleScalarCeil(c11_g_roundFloatVar);
    } else {
      c11_d23 = muDoubleScalarFloor(c11_g_roundFloatVar);
    }

    if ((real_T)c11_g_fixedVar != c11_d23) {
      sf_data_overflow_error(chartInstance->S, 1U, 1180, 34);
    }

    c11_array_real_T_SetSize(chartInstance, &c11_st,
      &chartInstance->c11_Theta_hat, &c11_k_emlrtRTEI, c11_g_fixedVar);
    if (!(c11_b_rnn.neuron_N >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c11_b_rnn.neuron_N, &c11_gb_emlrtDCI, &c11_st);
    }

    c11_d25 = c11_b_rnn.neuron_N;
    if (c11_d25 != (real_T)(int32_T)muDoubleScalarFloor(c11_d25)) {
      emlrtIntegerCheckR2012b(c11_d25, &c11_fb_emlrtDCI, &c11_st);
    }

    c11_d26 = trunc(c11_d25);
    if (muDoubleScalarIsNaN(c11_d26) || muDoubleScalarIsInf(c11_d26)) {
      c11_d27 = 0.0;
    } else {
      c11_d27 = muDoubleScalarRem(c11_d26, 4.294967296E+9);
    }

    c11_h_roundFloatVar = trunc(c11_d25);
    if (c11_d27 < 0.0) {
      c11_h_fixedVar = -(int32_T)(uint32_T)-c11_d27;
    } else {
      c11_h_fixedVar = (int32_T)(uint32_T)c11_d27;
    }

    if (c11_h_roundFloatVar < 0.0) {
      c11_d28 = muDoubleScalarCeil(c11_h_roundFloatVar);
    } else {
      c11_d28 = muDoubleScalarFloor(c11_h_roundFloatVar);
    }

    if ((real_T)c11_h_fixedVar != c11_d28) {
      sf_data_overflow_error(chartInstance->S, 1U, 1180, 34);
    }

    c11_o_loop_ub = c11_h_fixedVar - 1;
    for (c11_i25 = 0; c11_i25 <= c11_o_loop_ub; c11_i25++) {
      chartInstance->c11_Theta_hat.vector.data[c11_i25] = 0.0;
    }

    chartInstance->c11_Theta_hat_not_empty = true;
    chartInstance->c11_Theta_hat_not_empty = (chartInstance->c11_Theta_hat.size
      [0] != 0);
    chartInstance->c11_init_flag = 1.0;
    chartInstance->c11_init_flag_not_empty = true;
  }

  if (!(c11_b_rnn.neuron_N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c11_b_rnn.neuron_N, &c11_emlrtDCI, &c11_st);
  }

  if (c11_b_rnn.neuron_N != (real_T)(int32_T)muDoubleScalarFloor
      (c11_b_rnn.neuron_N)) {
    emlrtIntegerCheckR2012b(c11_b_rnn.neuron_N, &c11_b_emlrtDCI, &c11_st);
  }

  c11_d = trunc(c11_b_rnn.neuron_N);
  if (muDoubleScalarIsNaN(c11_d) || muDoubleScalarIsInf(c11_d)) {
    c11_d1 = 0.0;
  } else {
    c11_d1 = muDoubleScalarRem(c11_d, 4.294967296E+9);
  }

  c11_roundFloatVar = trunc(c11_b_rnn.neuron_N);
  if (c11_d1 < 0.0) {
    c11_fixedVar = -(int32_T)(uint32_T)-c11_d1;
  } else {
    c11_fixedVar = (int32_T)(uint32_T)c11_d1;
  }

  if (c11_roundFloatVar < 0.0) {
    c11_d2 = muDoubleScalarCeil(c11_roundFloatVar);
  } else {
    c11_d2 = muDoubleScalarFloor(c11_roundFloatVar);
  }

  if ((real_T)c11_fixedVar != c11_d2) {
    sf_data_overflow_error(chartInstance->S, 1U, 1356, 12);
  }

  c11_i2 = c11_fixedVar;
  if (!(c11_b_rnn.neuron_N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c11_b_rnn.neuron_N, &c11_c_emlrtDCI, &c11_st);
  }

  if (c11_b_rnn.neuron_N != (real_T)(int32_T)muDoubleScalarFloor
      (c11_b_rnn.neuron_N)) {
    emlrtIntegerCheckR2012b(c11_b_rnn.neuron_N, &c11_d_emlrtDCI, &c11_st);
  }

  c11_d3 = trunc(c11_b_rnn.neuron_N);
  if (muDoubleScalarIsNaN(c11_d3) || muDoubleScalarIsInf(c11_d3)) {
    c11_d4 = 0.0;
  } else {
    c11_d4 = muDoubleScalarRem(c11_d3, 4.294967296E+9);
  }

  c11_b_roundFloatVar = trunc(c11_b_rnn.neuron_N);
  if (c11_d4 < 0.0) {
    c11_b_fixedVar = -(int32_T)(uint32_T)-c11_d4;
  } else {
    c11_b_fixedVar = (int32_T)(uint32_T)c11_d4;
  }

  if (c11_b_roundFloatVar < 0.0) {
    c11_d5 = muDoubleScalarCeil(c11_b_roundFloatVar);
  } else {
    c11_d5 = muDoubleScalarFloor(c11_b_roundFloatVar);
  }

  if ((real_T)c11_b_fixedVar != c11_d5) {
    sf_data_overflow_error(chartInstance->S, 1U, 1370, 12);
  }

  c11_i5 = c11_b_fixedVar;
  c11_array_real_T_2D_Constructor(chartInstance, &c11_A);
  c11_array_real_T_2D_SetSize(chartInstance, &c11_st, &c11_A, &c11_l_emlrtRTEI,
    c11_i2, c11_i5);
  c11_d_loop_ub = c11_i2 * c11_i5 - 1;
  for (c11_i6 = 0; c11_i6 <= c11_d_loop_ub; c11_i6++) {
    c11_A.vector.data[c11_i6] = 0.0;
  }

  if (!(c11_b_rnn.neuron_N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c11_b_rnn.neuron_N, &c11_e_emlrtDCI, &c11_st);
  }

  if (c11_b_rnn.neuron_N != (real_T)(int32_T)muDoubleScalarFloor
      (c11_b_rnn.neuron_N)) {
    emlrtIntegerCheckR2012b(c11_b_rnn.neuron_N, &c11_f_emlrtDCI, &c11_st);
  }

  c11_d7 = trunc(c11_b_rnn.neuron_N);
  if (muDoubleScalarIsNaN(c11_d7) || muDoubleScalarIsInf(c11_d7)) {
    c11_d8 = 0.0;
  } else {
    c11_d8 = muDoubleScalarRem(c11_d7, 4.294967296E+9);
  }

  c11_c_roundFloatVar = trunc(c11_b_rnn.neuron_N);
  if (c11_d8 < 0.0) {
    c11_c_fixedVar = -(int32_T)(uint32_T)-c11_d8;
  } else {
    c11_c_fixedVar = (int32_T)(uint32_T)c11_d8;
  }

  if (c11_c_roundFloatVar < 0.0) {
    c11_d9 = muDoubleScalarCeil(c11_c_roundFloatVar);
  } else {
    c11_d9 = muDoubleScalarFloor(c11_c_roundFloatVar);
  }

  if ((real_T)c11_c_fixedVar != c11_d9) {
    sf_data_overflow_error(chartInstance->S, 1U, 1399, 12);
  }

  c11_i9 = c11_c_fixedVar;
  if (!(c11_b_rnn.neuron_N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c11_b_rnn.neuron_N, &c11_g_emlrtDCI, &c11_st);
  }

  if (c11_b_rnn.neuron_N != (real_T)(int32_T)muDoubleScalarFloor
      (c11_b_rnn.neuron_N)) {
    emlrtIntegerCheckR2012b(c11_b_rnn.neuron_N, &c11_h_emlrtDCI, &c11_st);
  }

  c11_d10 = trunc(c11_b_rnn.neuron_N);
  if (muDoubleScalarIsNaN(c11_d10) || muDoubleScalarIsInf(c11_d10)) {
    c11_d11 = 0.0;
  } else {
    c11_d11 = muDoubleScalarRem(c11_d10, 4.294967296E+9);
  }

  c11_d_roundFloatVar = trunc(c11_b_rnn.neuron_N);
  if (c11_d11 < 0.0) {
    c11_d_fixedVar = -(int32_T)(uint32_T)-c11_d11;
  } else {
    c11_d_fixedVar = (int32_T)(uint32_T)c11_d11;
  }

  if (c11_d_roundFloatVar < 0.0) {
    c11_d12 = muDoubleScalarCeil(c11_d_roundFloatVar);
  } else {
    c11_d12 = muDoubleScalarFloor(c11_d_roundFloatVar);
  }

  if ((real_T)c11_d_fixedVar != c11_d12) {
    sf_data_overflow_error(chartInstance->S, 1U, 1413, 12);
  }

  c11_i12 = c11_d_fixedVar;
  c11_array_real_T_2D_Constructor(chartInstance, &c11_B);
  c11_array_real_T_2D_SetSize(chartInstance, &c11_st, &c11_B, &c11_m_emlrtRTEI,
    c11_i9, c11_i12);
  c11_h_loop_ub = c11_i9 * c11_i12 - 1;
  for (c11_i13 = 0; c11_i13 <= c11_h_loop_ub; c11_i13++) {
    c11_B.vector.data[c11_i13] = 0.0;
  }

  if (!(c11_b_rnn.neuron_N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c11_b_rnn.neuron_N, &c11_i_emlrtDCI, &c11_st);
  }

  if (c11_b_rnn.neuron_N != (real_T)(int32_T)muDoubleScalarFloor
      (c11_b_rnn.neuron_N)) {
    emlrtIntegerCheckR2012b(c11_b_rnn.neuron_N, &c11_j_emlrtDCI, &c11_st);
  }

  c11_d14 = trunc(c11_b_rnn.neuron_N);
  if (muDoubleScalarIsNaN(c11_d14) || muDoubleScalarIsInf(c11_d14)) {
    c11_d15 = 0.0;
  } else {
    c11_d15 = muDoubleScalarRem(c11_d14, 4.294967296E+9);
  }

  c11_e_roundFloatVar = trunc(c11_b_rnn.neuron_N);
  if (c11_d15 < 0.0) {
    c11_e_fixedVar = -(int32_T)(uint32_T)-c11_d15;
  } else {
    c11_e_fixedVar = (int32_T)(uint32_T)c11_d15;
  }

  if (c11_e_roundFloatVar < 0.0) {
    c11_d16 = muDoubleScalarCeil(c11_e_roundFloatVar);
  } else {
    c11_d16 = muDoubleScalarFloor(c11_e_roundFloatVar);
  }

  if ((real_T)c11_e_fixedVar != c11_d16) {
    sf_data_overflow_error(chartInstance->S, 1U, 1442, 12);
  }

  c11_i16 = c11_e_fixedVar;
  if (!(c11_b_rnn.neuron_N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c11_b_rnn.neuron_N, &c11_k_emlrtDCI, &c11_st);
  }

  if (c11_b_rnn.neuron_N != (real_T)(int32_T)muDoubleScalarFloor
      (c11_b_rnn.neuron_N)) {
    emlrtIntegerCheckR2012b(c11_b_rnn.neuron_N, &c11_l_emlrtDCI, &c11_st);
  }

  c11_d17 = trunc(c11_b_rnn.neuron_N);
  if (muDoubleScalarIsNaN(c11_d17) || muDoubleScalarIsInf(c11_d17)) {
    c11_d18 = 0.0;
  } else {
    c11_d18 = muDoubleScalarRem(c11_d17, 4.294967296E+9);
  }

  c11_f_roundFloatVar = trunc(c11_b_rnn.neuron_N);
  if (c11_d18 < 0.0) {
    c11_f_fixedVar = -(int32_T)(uint32_T)-c11_d18;
  } else {
    c11_f_fixedVar = (int32_T)(uint32_T)c11_d18;
  }

  if (c11_f_roundFloatVar < 0.0) {
    c11_d20 = muDoubleScalarCeil(c11_f_roundFloatVar);
  } else {
    c11_d20 = muDoubleScalarFloor(c11_f_roundFloatVar);
  }

  if ((real_T)c11_f_fixedVar != c11_d20) {
    sf_data_overflow_error(chartInstance->S, 1U, 1456, 12);
  }

  c11_i19 = c11_f_fixedVar;
  c11_array_real_T_2D_Constructor(chartInstance, &c11_C);
  c11_array_real_T_2D_SetSize(chartInstance, &c11_st, &c11_C, &c11_n_emlrtRTEI,
    c11_i16, c11_i19);
  c11_m_loop_ub = c11_i16 * c11_i19 - 1;
  for (c11_i20 = 0; c11_i20 <= c11_m_loop_ub; c11_i20++) {
    c11_C.vector.data[c11_i20] = 0.0;
  }

  c11_array_real_T_SetSize(chartInstance, &c11_st, &c11_ztemp, &c11_o_emlrtRTEI,
    chartInstance->c11_Theta_hat.size[0]);
  c11_n_loop_ub = chartInstance->c11_Theta_hat.size[0] - 1;
  for (c11_i21 = 0; c11_i21 <= c11_n_loop_ub; c11_i21++) {
    c11_ztemp.vector.data[c11_i21] = chartInstance->
      c11_Theta_hat.vector.data[c11_i21];
  }

  c11_d24 = c11_b_rnn.neuron_N;
  c11_i22 = (int32_T)c11_d24;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c11_d24, mxDOUBLE_CLASS, c11_i22,
    &c11_hb_emlrtRTEI, &c11_st);
  for (c11_k = 0; c11_k < c11_i22; c11_k++) {
    c11_b_k = 1.0 + (real_T)c11_k;
    covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 0, 1);
    c11_b_st.site = &c11_f_emlrtRSI;
    c11_i23 = chartInstance->c11_w_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_n_emlrtDCI, &c11_b_st);
    }

    c11_i24 = (int32_T)c11_b_k;
    if ((c11_i24 < 1) || (c11_i24 > c11_i23)) {
      emlrtDynamicBoundsCheckR2012b(c11_i24, 1, c11_i23, &c11_emlrtBCI,
        &c11_b_st);
    }

    c11_a = chartInstance->c11_w_hat.vector.data[c11_i24 - 1];
    c11_c_st.site = &c11_jb_emlrtRSI;
    c11_b_a = c11_a;
    c11_d_st.site = &c11_kb_emlrtRSI;
    c11_c_a = c11_b_a;
    c11_d_a = c11_c_a;
    c11_e_a = c11_d_a;
    c11_c = c11_e_a * c11_e_a;
    c11_i26 = c11_ztemp.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_o_emlrtDCI, &c11_st);
    }

    c11_i27 = (int32_T)c11_b_k;
    if ((c11_i27 < 1) || (c11_i27 > c11_i26)) {
      emlrtDynamicBoundsCheckR2012b(c11_i27, 1, c11_i26, &c11_b_emlrtBCI,
        &c11_st);
    }

    c11_i29 = chartInstance->c11_r_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_p_emlrtDCI, &c11_st);
    }

    c11_i32 = (int32_T)c11_b_k;
    if ((c11_i32 < 1) || (c11_i32 > c11_i29)) {
      emlrtDynamicBoundsCheckR2012b(c11_i32, 1, c11_i29, &c11_c_emlrtBCI,
        &c11_st);
    }

    c11_i34 = chartInstance->c11_v_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_q_emlrtDCI, &c11_st);
    }

    c11_i35 = (int32_T)c11_b_k;
    if ((c11_i35 < 1) || (c11_i35 > c11_i34)) {
      emlrtDynamicBoundsCheckR2012b(c11_i35, 1, c11_i34, &c11_d_emlrtBCI,
        &c11_st);
    }

    c11_dnetk_dv = -2.0 * c11_c * ((c11_b_s + c11_ztemp.vector.data[c11_i27 - 1]
      * chartInstance->c11_r_hat.vector.data[c11_i32 - 1]) -
      chartInstance->c11_v_hat.vector.data[c11_i35 - 1]);
    c11_b_st.site = &c11_g_emlrtRSI;
    c11_i37 = c11_ztemp.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_r_emlrtDCI, &c11_b_st);
    }

    c11_i38 = (int32_T)c11_b_k;
    if ((c11_i38 < 1) || (c11_i38 > c11_i37)) {
      emlrtDynamicBoundsCheckR2012b(c11_i38, 1, c11_i37, &c11_e_emlrtBCI,
        &c11_b_st);
    }

    c11_i40 = chartInstance->c11_r_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_s_emlrtDCI, &c11_b_st);
    }

    c11_i41 = (int32_T)c11_b_k;
    if ((c11_i41 < 1) || (c11_i41 > c11_i40)) {
      emlrtDynamicBoundsCheckR2012b(c11_i41, 1, c11_i40, &c11_f_emlrtBCI,
        &c11_b_st);
    }

    c11_i42 = chartInstance->c11_v_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_t_emlrtDCI, &c11_b_st);
    }

    c11_i45 = (int32_T)c11_b_k;
    if ((c11_i45 < 1) || (c11_i45 > c11_i42)) {
      emlrtDynamicBoundsCheckR2012b(c11_i45, 1, c11_i42, &c11_g_emlrtBCI,
        &c11_b_st);
    }

    c11_i_a = (c11_b_s + c11_ztemp.vector.data[c11_i38 - 1] *
               chartInstance->c11_r_hat.vector.data[c11_i41 - 1]) -
      chartInstance->c11_v_hat.vector.data[c11_i45 - 1];
    c11_c_st.site = &c11_jb_emlrtRSI;
    c11_j_a = c11_i_a;
    c11_d_st.site = &c11_kb_emlrtRSI;
    c11_k_a = c11_j_a;
    c11_l_a = c11_k_a;
    c11_m_a = c11_l_a;
    c11_b_c = c11_m_a * c11_m_a;
    c11_i48 = chartInstance->c11_w_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_u_emlrtDCI, &c11_st);
    }

    c11_i49 = (int32_T)c11_b_k;
    if ((c11_i49 < 1) || (c11_i49 > c11_i48)) {
      emlrtDynamicBoundsCheckR2012b(c11_i49, 1, c11_i48, &c11_h_emlrtBCI,
        &c11_st);
    }

    c11_dnetk_dw = 2.0 * chartInstance->c11_w_hat.vector.data[c11_i49 - 1] *
      c11_b_c;
    c11_b_st.site = &c11_h_emlrtRSI;
    c11_i51 = chartInstance->c11_w_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_v_emlrtDCI, &c11_b_st);
    }

    c11_i52 = (int32_T)c11_b_k;
    if ((c11_i52 < 1) || (c11_i52 > c11_i51)) {
      emlrtDynamicBoundsCheckR2012b(c11_i52, 1, c11_i51, &c11_i_emlrtBCI,
        &c11_b_st);
    }

    c11_o_a = chartInstance->c11_w_hat.vector.data[c11_i52 - 1];
    c11_c_st.site = &c11_jb_emlrtRSI;
    c11_p_a = c11_o_a;
    c11_d_st.site = &c11_kb_emlrtRSI;
    c11_q_a = c11_p_a;
    c11_r_a = c11_q_a;
    c11_s_a = c11_r_a;
    c11_c_c = c11_s_a * c11_s_a;
    c11_i56 = c11_ztemp.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_w_emlrtDCI, &c11_st);
    }

    c11_i57 = (int32_T)c11_b_k;
    if ((c11_i57 < 1) || (c11_i57 > c11_i56)) {
      emlrtDynamicBoundsCheckR2012b(c11_i57, 1, c11_i56, &c11_j_emlrtBCI,
        &c11_st);
    }

    c11_i59 = c11_ztemp.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_x_emlrtDCI, &c11_st);
    }

    c11_i60 = (int32_T)c11_b_k;
    if ((c11_i60 < 1) || (c11_i60 > c11_i59)) {
      emlrtDynamicBoundsCheckR2012b(c11_i60, 1, c11_i59, &c11_k_emlrtBCI,
        &c11_st);
    }

    c11_i62 = chartInstance->c11_r_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_y_emlrtDCI, &c11_st);
    }

    c11_i63 = (int32_T)c11_b_k;
    if ((c11_i63 < 1) || (c11_i63 > c11_i62)) {
      emlrtDynamicBoundsCheckR2012b(c11_i63, 1, c11_i62, &c11_l_emlrtBCI,
        &c11_st);
    }

    c11_i64 = chartInstance->c11_v_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_ab_emlrtDCI, &c11_st);
    }

    c11_i66 = (int32_T)c11_b_k;
    if ((c11_i66 < 1) || (c11_i66 > c11_i64)) {
      emlrtDynamicBoundsCheckR2012b(c11_i66, 1, c11_i64, &c11_m_emlrtBCI,
        &c11_st);
    }

    c11_dnetk_dr = 2.0 * c11_ztemp.vector.data[c11_i57 - 1] * c11_c_c *
      ((c11_b_s + c11_ztemp.vector.data[c11_i60 - 1] *
        chartInstance->c11_r_hat.vector.data[c11_i63 - 1]) -
       chartInstance->c11_v_hat.vector.data[c11_i66 - 1]);
    c11_b_st.site = &c11_i_emlrtRSI;
    c11_i69 = chartInstance->c11_w_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_bb_emlrtDCI, &c11_b_st);
    }

    c11_i71 = (int32_T)c11_b_k;
    if ((c11_i71 < 1) || (c11_i71 > c11_i69)) {
      emlrtDynamicBoundsCheckR2012b(c11_i71, 1, c11_i69, &c11_n_emlrtBCI,
        &c11_b_st);
    }

    c11_t_a = chartInstance->c11_w_hat.vector.data[c11_i71 - 1];
    c11_c_st.site = &c11_jb_emlrtRSI;
    c11_u_a = c11_t_a;
    c11_d_st.site = &c11_kb_emlrtRSI;
    c11_v_a = c11_u_a;
    c11_w_a = c11_v_a;
    c11_x_a = c11_w_a;
    c11_d_c = c11_x_a * c11_x_a;
    c11_b_st.site = &c11_i_emlrtRSI;
    c11_i75 = chartInstance->c11_Theta_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_cb_emlrtDCI, &c11_b_st);
    }

    c11_i77 = (int32_T)c11_b_k;
    if ((c11_i77 < 1) || (c11_i77 > c11_i75)) {
      emlrtDynamicBoundsCheckR2012b(c11_i77, 1, c11_i75, &c11_o_emlrtBCI,
        &c11_b_st);
    }

    c11_i79 = chartInstance->c11_r_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_db_emlrtDCI, &c11_b_st);
    }

    c11_i82 = (int32_T)c11_b_k;
    if ((c11_i82 < 1) || (c11_i82 > c11_i79)) {
      emlrtDynamicBoundsCheckR2012b(c11_i82, 1, c11_i79, &c11_p_emlrtBCI,
        &c11_b_st);
    }

    c11_i83 = chartInstance->c11_v_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_eb_emlrtDCI, &c11_b_st);
    }

    c11_i85 = (int32_T)c11_b_k;
    if ((c11_i85 < 1) || (c11_i85 > c11_i83)) {
      emlrtDynamicBoundsCheckR2012b(c11_i85, 1, c11_i83, &c11_q_emlrtBCI,
        &c11_b_st);
    }

    c11_y_a = (c11_b_s + chartInstance->c11_Theta_hat.vector.data[c11_i77 - 1] *
               chartInstance->c11_r_hat.vector.data[c11_i82 - 1]) -
      chartInstance->c11_v_hat.vector.data[c11_i85 - 1];
    c11_c_st.site = &c11_jb_emlrtRSI;
    c11_ab_a = c11_y_a;
    c11_d_st.site = &c11_kb_emlrtRSI;
    c11_bb_a = c11_ab_a;
    c11_cb_a = c11_bb_a;
    c11_db_a = c11_cb_a;
    c11_e_c = c11_db_a * c11_db_a;
    c11_net_k = c11_d_c * c11_e_c;
    c11_x = -c11_net_k;
    c11_b_x = c11_x;
    c11_b_x = muDoubleScalarExp(c11_b_x);
    c11_i90 = chartInstance->c11_Theta_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_hb_emlrtDCI, &c11_st);
    }

    c11_i91 = (int32_T)c11_b_k;
    if ((c11_i91 < 1) || (c11_i91 > c11_i90)) {
      emlrtDynamicBoundsCheckR2012b(c11_i91, 1, c11_i90, &c11_r_emlrtBCI,
        &c11_st);
    }

    chartInstance->c11_Theta_hat.vector.data[c11_i91 - 1] = c11_b_x;
    c11_i92 = chartInstance->c11_Theta_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_ib_emlrtDCI, &c11_st);
    }

    c11_i93 = (int32_T)c11_b_k;
    if ((c11_i93 < 1) || (c11_i93 > c11_i92)) {
      emlrtDynamicBoundsCheckR2012b(c11_i93, 1, c11_i92, &c11_s_emlrtBCI,
        &c11_st);
    }

    c11_i94 = c11_A.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_jb_emlrtDCI, &c11_st);
    }

    c11_i95 = (int32_T)c11_b_k;
    if ((c11_i95 < 1) || (c11_i95 > c11_i94)) {
      emlrtDynamicBoundsCheckR2012b(c11_i95, 1, c11_i94, &c11_t_emlrtBCI,
        &c11_st);
    }

    c11_i96 = c11_A.size[1];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_kb_emlrtDCI, &c11_st);
    }

    c11_i97 = (int32_T)c11_b_k;
    if ((c11_i97 < 1) || (c11_i97 > c11_i96)) {
      emlrtDynamicBoundsCheckR2012b(c11_i97, 1, c11_i96, &c11_u_emlrtBCI,
        &c11_st);
    }

    c11_A.vector.data[(c11_i95 + c11_A.size[0] * (c11_i97 - 1)) - 1] =
      -chartInstance->c11_Theta_hat.vector.data[c11_i93 - 1] * c11_dnetk_dv;
    c11_i98 = chartInstance->c11_Theta_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_lb_emlrtDCI, &c11_st);
    }

    c11_i99 = (int32_T)c11_b_k;
    if ((c11_i99 < 1) || (c11_i99 > c11_i98)) {
      emlrtDynamicBoundsCheckR2012b(c11_i99, 1, c11_i98, &c11_v_emlrtBCI,
        &c11_st);
    }

    c11_i100 = c11_B.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_mb_emlrtDCI, &c11_st);
    }

    c11_i101 = (int32_T)c11_b_k;
    if ((c11_i101 < 1) || (c11_i101 > c11_i100)) {
      emlrtDynamicBoundsCheckR2012b(c11_i101, 1, c11_i100, &c11_w_emlrtBCI,
        &c11_st);
    }

    c11_i102 = c11_B.size[1];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_nb_emlrtDCI, &c11_st);
    }

    c11_i103 = (int32_T)c11_b_k;
    if ((c11_i103 < 1) || (c11_i103 > c11_i102)) {
      emlrtDynamicBoundsCheckR2012b(c11_i103, 1, c11_i102, &c11_x_emlrtBCI,
        &c11_st);
    }

    c11_B.vector.data[(c11_i101 + c11_B.size[0] * (c11_i103 - 1)) - 1] =
      -chartInstance->c11_Theta_hat.vector.data[c11_i99 - 1] * c11_dnetk_dw;
    c11_i104 = chartInstance->c11_Theta_hat.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_ob_emlrtDCI, &c11_st);
    }

    c11_i105 = (int32_T)c11_b_k;
    if ((c11_i105 < 1) || (c11_i105 > c11_i104)) {
      emlrtDynamicBoundsCheckR2012b(c11_i105, 1, c11_i104, &c11_y_emlrtBCI,
        &c11_st);
    }

    c11_i106 = c11_C.size[0];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_pb_emlrtDCI, &c11_st);
    }

    c11_i107 = (int32_T)c11_b_k;
    if ((c11_i107 < 1) || (c11_i107 > c11_i106)) {
      emlrtDynamicBoundsCheckR2012b(c11_i107, 1, c11_i106, &c11_ab_emlrtBCI,
        &c11_st);
    }

    c11_i108 = c11_C.size[1];
    if (c11_b_k != (real_T)(int32_T)muDoubleScalarFloor(c11_b_k)) {
      emlrtIntegerCheckR2012b(c11_b_k, &c11_qb_emlrtDCI, &c11_st);
    }

    c11_i109 = (int32_T)c11_b_k;
    if ((c11_i109 < 1) || (c11_i109 > c11_i108)) {
      emlrtDynamicBoundsCheckR2012b(c11_i109, 1, c11_i108, &c11_bb_emlrtBCI,
        &c11_st);
    }

    c11_C.vector.data[(c11_i107 + c11_C.size[0] * (c11_i109 - 1)) - 1] =
      -chartInstance->c11_Theta_hat.vector.data[c11_i105 - 1] * c11_dnetk_dr;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 0, 0);
  c11_b_st.site = &c11_j_emlrtRSI;
  c11_innerDimA = chartInstance->c11_alpha_hat.size[0];
  c11_innerDimB = chartInstance->c11_Theta_hat.size[0];
  c11_c_st.site = &c11_lb_emlrtRSI;
  c11_b_innerDimA = c11_innerDimA;
  c11_b_innerDimB = c11_innerDimB;
  c11_innerDimOk = (c11_b_innerDimA == c11_b_innerDimB);
  if (!c11_innerDimOk) {
    if ((chartInstance->c11_alpha_hat.size[0] == 1) ||
        (chartInstance->c11_Theta_hat.size[0] == 1)) {
      c11_b_y = NULL;
      sf_mex_assign(&c11_b_y, sf_mex_create("y", c11_cv, 10, 0U, 1, 0U, 2, 1, 45),
                    false);
      c11_d_y = NULL;
      sf_mex_assign(&c11_d_y, sf_mex_create("y", c11_cv, 10, 0U, 1, 0U, 2, 1, 45),
                    false);
      sf_mex_call(&c11_c_st, &c11_c_emlrtMCI, "error", 0U, 2U, 14, c11_b_y, 14,
                  sf_mex_call(&c11_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c11_c_st, NULL, "message", 1U, 1U, 14, c11_d_y)));
    } else {
      c11_y = NULL;
      sf_mex_assign(&c11_y, sf_mex_create("y", c11_cv1, 10, 0U, 1, 0U, 2, 1, 15),
                    false);
      c11_c_y = NULL;
      sf_mex_assign(&c11_c_y, sf_mex_create("y", c11_cv1, 10, 0U, 1, 0U, 2, 1,
        15), false);
      sf_mex_call(&c11_c_st, &c11_d_emlrtMCI, "error", 0U, 2U, 14, c11_y, 14,
                  sf_mex_call(&c11_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c11_c_st, NULL, "message", 1U, 1U, 14, c11_c_y)));
    }
  }

  c11_mA = chartInstance->c11_alpha_hat.size[0];
  c11_b_mA = c11_mA;
  c11_c_k = c11_b_mA;
  c11_n = c11_c_k;
  c11_b_n = c11_n;
  if (c11_b_n < 1) {
    c11_b_d_hat = 0.0;
  } else {
    c11_c_n = c11_b_n;
    c11_d_n = c11_c_n;
    c11_var = c11_d_n;
    c11_n_t = (ptrdiff_t)c11_var;
    c11_incx_t = (ptrdiff_t)1;
    c11_incy_t = (ptrdiff_t)1;
    c11_b_d_hat = ddot(&c11_n_t, &chartInstance->c11_alpha_hat.vector.data[0],
                       &c11_incx_t, &chartInstance->c11_Theta_hat.vector.data[0],
                       &c11_incy_t);
  }

  c11_f_a = c11_b_rnn.eta1 * c11_b_s;
  c11_array_real_T_SetSize(chartInstance, &c11_st, &c11_ztemp, &c11_p_emlrtRTEI,
    chartInstance->c11_Theta_hat.size[0]);
  c11_p_loop_ub = chartInstance->c11_Theta_hat.size[0] - 1;
  for (c11_i28 = 0; c11_i28 <= c11_p_loop_ub; c11_i28++) {
    c11_ztemp.vector.data[c11_i28] = c11_f_a *
      chartInstance->c11_Theta_hat.vector.data[c11_i28];
  }

  c11_g_a = c11_b_rnn.eta2 * c11_b_s;
  c11_i30 = c11_A.size[0] * c11_A.size[1];
  c11_i31 = c11_i30;
  c11_q_loop_ub = c11_i31 - 1;
  for (c11_i33 = 0; c11_i33 <= c11_q_loop_ub; c11_i33++) {
    c11_A.vector.data[c11_i33] *= c11_g_a;
  }

  c11_b_st.site = &c11_k_emlrtRSI;
  c11_c_innerDimA = c11_A.size[1];
  c11_c_innerDimB = chartInstance->c11_alpha_hat.size[0];
  c11_array_real_T_Constructor(chartInstance, &c11_r4);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st, &c11_r4, &c11_q_emlrtRTEI,
    chartInstance->c11_alpha_hat.size[0]);
  c11_r_loop_ub = chartInstance->c11_alpha_hat.size[0] - 1;
  for (c11_i36 = 0; c11_i36 <= c11_r_loop_ub; c11_i36++) {
    c11_r4.vector.data[c11_i36] = chartInstance->
      c11_alpha_hat.vector.data[c11_i36];
  }

  c11_c_st.site = &c11_lb_emlrtRSI;
  c11_dynamic_size_checks(chartInstance, &c11_c_st, &c11_A, &c11_r4,
    c11_c_innerDimA, c11_c_innerDimB);
  c11_array_real_T_Destructor(chartInstance, &c11_r4);
  c11_array_real_T_Constructor(chartInstance, &c11_r5);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st, &c11_r5, &c11_r_emlrtRTEI,
    chartInstance->c11_alpha_hat.size[0]);
  c11_s_loop_ub = chartInstance->c11_alpha_hat.size[0] - 1;
  for (c11_i39 = 0; c11_i39 <= c11_s_loop_ub; c11_i39++) {
    c11_r5.vector.data[c11_i39] = chartInstance->
      c11_alpha_hat.vector.data[c11_i39];
  }

  c11_array_real_T_Constructor(chartInstance, &c11_v_hat_dot);
  c11_c_st.site = &c11_pb_emlrtRSI;
  c11_mtimes(chartInstance, &c11_c_st, &c11_A, &c11_r5, &c11_v_hat_dot);
  c11_array_real_T_Destructor(chartInstance, &c11_r5);
  c11_array_real_T_2D_Destructor(chartInstance, &c11_A);
  c11_h_a = c11_b_rnn.eta3 * c11_b_s;
  c11_i43 = c11_B.size[0] * c11_B.size[1];
  c11_i44 = c11_i43;
  c11_t_loop_ub = c11_i44 - 1;
  for (c11_i46 = 0; c11_i46 <= c11_t_loop_ub; c11_i46++) {
    c11_B.vector.data[c11_i46] *= c11_h_a;
  }

  c11_b_st.site = &c11_l_emlrtRSI;
  c11_d_innerDimA = c11_B.size[1];
  c11_d_innerDimB = chartInstance->c11_alpha_hat.size[0];
  c11_array_real_T_Constructor(chartInstance, &c11_r6);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st, &c11_r6, &c11_q_emlrtRTEI,
    chartInstance->c11_alpha_hat.size[0]);
  c11_u_loop_ub = chartInstance->c11_alpha_hat.size[0] - 1;
  for (c11_i47 = 0; c11_i47 <= c11_u_loop_ub; c11_i47++) {
    c11_r6.vector.data[c11_i47] = chartInstance->
      c11_alpha_hat.vector.data[c11_i47];
  }

  c11_c_st.site = &c11_lb_emlrtRSI;
  c11_dynamic_size_checks(chartInstance, &c11_c_st, &c11_B, &c11_r6,
    c11_d_innerDimA, c11_d_innerDimB);
  c11_array_real_T_Destructor(chartInstance, &c11_r6);
  c11_array_real_T_Constructor(chartInstance, &c11_r7);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st, &c11_r7, &c11_r_emlrtRTEI,
    chartInstance->c11_alpha_hat.size[0]);
  c11_v_loop_ub = chartInstance->c11_alpha_hat.size[0] - 1;
  for (c11_i50 = 0; c11_i50 <= c11_v_loop_ub; c11_i50++) {
    c11_r7.vector.data[c11_i50] = chartInstance->
      c11_alpha_hat.vector.data[c11_i50];
  }

  c11_array_real_T_Constructor(chartInstance, &c11_w_hat_dot);
  c11_c_st.site = &c11_pb_emlrtRSI;
  c11_mtimes(chartInstance, &c11_c_st, &c11_B, &c11_r7, &c11_w_hat_dot);
  c11_array_real_T_Destructor(chartInstance, &c11_r7);
  c11_array_real_T_2D_Destructor(chartInstance, &c11_B);
  c11_n_a = c11_b_rnn.eta4 * c11_b_s;
  c11_i53 = c11_C.size[0] * c11_C.size[1];
  c11_i54 = c11_i53;
  c11_w_loop_ub = c11_i54 - 1;
  for (c11_i55 = 0; c11_i55 <= c11_w_loop_ub; c11_i55++) {
    c11_C.vector.data[c11_i55] *= c11_n_a;
  }

  c11_b_st.site = &c11_m_emlrtRSI;
  c11_e_innerDimA = c11_C.size[1];
  c11_e_innerDimB = chartInstance->c11_alpha_hat.size[0];
  c11_array_real_T_Constructor(chartInstance, &c11_r8);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st, &c11_r8, &c11_q_emlrtRTEI,
    chartInstance->c11_alpha_hat.size[0]);
  c11_x_loop_ub = chartInstance->c11_alpha_hat.size[0] - 1;
  for (c11_i58 = 0; c11_i58 <= c11_x_loop_ub; c11_i58++) {
    c11_r8.vector.data[c11_i58] = chartInstance->
      c11_alpha_hat.vector.data[c11_i58];
  }

  c11_c_st.site = &c11_lb_emlrtRSI;
  c11_dynamic_size_checks(chartInstance, &c11_c_st, &c11_C, &c11_r8,
    c11_e_innerDimA, c11_e_innerDimB);
  c11_array_real_T_Destructor(chartInstance, &c11_r8);
  c11_array_real_T_Constructor(chartInstance, &c11_r9);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st, &c11_r9, &c11_r_emlrtRTEI,
    chartInstance->c11_alpha_hat.size[0]);
  c11_y_loop_ub = chartInstance->c11_alpha_hat.size[0] - 1;
  for (c11_i61 = 0; c11_i61 <= c11_y_loop_ub; c11_i61++) {
    c11_r9.vector.data[c11_i61] = chartInstance->
      c11_alpha_hat.vector.data[c11_i61];
  }

  c11_array_real_T_Constructor(chartInstance, &c11_r_hat_dot);
  c11_c_st.site = &c11_pb_emlrtRSI;
  c11_mtimes(chartInstance, &c11_c_st, &c11_C, &c11_r9, &c11_r_hat_dot);
  c11_array_real_T_Destructor(chartInstance, &c11_r9);
  c11_array_real_T_2D_Destructor(chartInstance, &c11_C);
  c11_b = c11_b_dt;
  c11_ab_loop_ub = c11_ztemp.size[0] - 1;
  for (c11_i65 = 0; c11_i65 <= c11_ab_loop_ub; c11_i65++) {
    c11_ztemp.vector.data[c11_i65] *= c11_b;
  }

  c11_i67 = chartInstance->c11_alpha_hat.size[0];
  c11_i68 = c11_ztemp.size[0];
  if ((c11_i67 != c11_i68) && ((c11_i67 != 1) && (c11_i68 != 1))) {
    emlrtDimSizeImpxCheckR2021b(c11_i67, c11_i68, &c11_emlrtECI, &c11_st);
  }

  if (chartInstance->c11_alpha_hat.size[0] == c11_ztemp.size[0]) {
    c11_bb_loop_ub = chartInstance->c11_alpha_hat.size[0] - 1;
    for (c11_i70 = 0; c11_i70 <= c11_bb_loop_ub; c11_i70++) {
      chartInstance->c11_alpha_hat.vector.data[c11_i70] +=
        c11_ztemp.vector.data[c11_i70];
    }
  } else {
    c11_plus(chartInstance, &c11_st, &chartInstance->c11_alpha_hat, &c11_ztemp);
  }

  c11_array_real_T_Destructor(chartInstance, &c11_ztemp);
  chartInstance->c11_alpha_hat_not_empty = (chartInstance->c11_alpha_hat.size[0]
    != 0);
  c11_b_b = c11_b_dt;
  c11_cb_loop_ub = c11_v_hat_dot.size[0] - 1;
  for (c11_i72 = 0; c11_i72 <= c11_cb_loop_ub; c11_i72++) {
    c11_v_hat_dot.vector.data[c11_i72] *= c11_b_b;
  }

  c11_i73 = chartInstance->c11_v_hat.size[0];
  c11_i74 = c11_v_hat_dot.size[0];
  if ((c11_i73 != c11_i74) && ((c11_i73 != 1) && (c11_i74 != 1))) {
    emlrtDimSizeImpxCheckR2021b(c11_i73, c11_i74, &c11_b_emlrtECI, &c11_st);
  }

  if (chartInstance->c11_v_hat.size[0] == c11_v_hat_dot.size[0]) {
    c11_db_loop_ub = chartInstance->c11_v_hat.size[0] - 1;
    for (c11_i76 = 0; c11_i76 <= c11_db_loop_ub; c11_i76++) {
      chartInstance->c11_v_hat.vector.data[c11_i76] +=
        c11_v_hat_dot.vector.data[c11_i76];
    }
  } else {
    c11_plus(chartInstance, &c11_st, &chartInstance->c11_v_hat, &c11_v_hat_dot);
  }

  c11_array_real_T_Destructor(chartInstance, &c11_v_hat_dot);
  chartInstance->c11_v_hat_not_empty = (chartInstance->c11_v_hat.size[0] != 0);
  c11_c_b = c11_b_dt;
  c11_eb_loop_ub = c11_w_hat_dot.size[0] - 1;
  for (c11_i78 = 0; c11_i78 <= c11_eb_loop_ub; c11_i78++) {
    c11_w_hat_dot.vector.data[c11_i78] *= c11_c_b;
  }

  c11_i80 = chartInstance->c11_w_hat.size[0];
  c11_i81 = c11_w_hat_dot.size[0];
  if ((c11_i80 != c11_i81) && ((c11_i80 != 1) && (c11_i81 != 1))) {
    emlrtDimSizeImpxCheckR2021b(c11_i80, c11_i81, &c11_c_emlrtECI, &c11_st);
  }

  if (chartInstance->c11_w_hat.size[0] == c11_w_hat_dot.size[0]) {
    c11_fb_loop_ub = chartInstance->c11_w_hat.size[0] - 1;
    for (c11_i84 = 0; c11_i84 <= c11_fb_loop_ub; c11_i84++) {
      chartInstance->c11_w_hat.vector.data[c11_i84] +=
        c11_w_hat_dot.vector.data[c11_i84];
    }
  } else {
    c11_plus(chartInstance, &c11_st, &chartInstance->c11_w_hat, &c11_w_hat_dot);
  }

  c11_array_real_T_Destructor(chartInstance, &c11_w_hat_dot);
  chartInstance->c11_w_hat_not_empty = (chartInstance->c11_w_hat.size[0] != 0);
  c11_d_b = c11_b_dt;
  c11_gb_loop_ub = c11_r_hat_dot.size[0] - 1;
  for (c11_i86 = 0; c11_i86 <= c11_gb_loop_ub; c11_i86++) {
    c11_r_hat_dot.vector.data[c11_i86] *= c11_d_b;
  }

  c11_i87 = chartInstance->c11_r_hat.size[0];
  c11_i88 = c11_r_hat_dot.size[0];
  if ((c11_i87 != c11_i88) && ((c11_i87 != 1) && (c11_i88 != 1))) {
    emlrtDimSizeImpxCheckR2021b(c11_i87, c11_i88, &c11_d_emlrtECI, &c11_st);
  }

  if (chartInstance->c11_r_hat.size[0] == c11_r_hat_dot.size[0]) {
    c11_hb_loop_ub = chartInstance->c11_r_hat.size[0] - 1;
    for (c11_i89 = 0; c11_i89 <= c11_hb_loop_ub; c11_i89++) {
      chartInstance->c11_r_hat.vector.data[c11_i89] +=
        c11_r_hat_dot.vector.data[c11_i89];
    }
  } else {
    c11_plus(chartInstance, &c11_st, &chartInstance->c11_r_hat, &c11_r_hat_dot);
  }

  c11_array_real_T_Destructor(chartInstance, &c11_r_hat_dot);
  chartInstance->c11_r_hat_not_empty = (chartInstance->c11_r_hat.size[0] != 0);
  *chartInstance->c11_d_hat = c11_b_d_hat;
  covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 1U,
                    *chartInstance->c11_d_hat);
}

static void ext_mode_exec_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_update_jit_animation_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_do_animation_call_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  const mxArray *c11_b_y = NULL;
  const mxArray *c11_c_y = NULL;
  const mxArray *c11_d_y = NULL;
  const mxArray *c11_e_y = NULL;
  const mxArray *c11_f_y = NULL;
  const mxArray *c11_g_y = NULL;
  const mxArray *c11_h_y = NULL;
  const mxArray *c11_i_y = NULL;
  const mxArray *c11_j_y = NULL;
  const mxArray *c11_k_y = NULL;
  const mxArray *c11_l_y = NULL;
  const mxArray *c11_m_y = NULL;
  const mxArray *c11_n_y = NULL;
  const mxArray *c11_o_y = NULL;
  const mxArray *c11_st;
  const mxArray *c11_y = NULL;
  c11_st = NULL;
  c11_st = NULL;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_createcellmatrix(14, 1), false);
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", chartInstance->c11_d_hat, 0, 0U, 0,
    0U, 0), false);
  sf_mex_setcell(c11_y, 0, c11_b_y);
  c11_c_y = NULL;
  if (!chartInstance->c11_Theta_hat_not_empty) {
    sf_mex_assign(&c11_c_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_c_y, sf_mex_create("y",
      chartInstance->c11_Theta_hat.vector.data, 0, 0U, 1, 0U, 1,
      chartInstance->c11_Theta_hat.size[0]), false);
  }

  sf_mex_setcell(c11_y, 1, c11_c_y);
  c11_d_y = NULL;
  if (!chartInstance->c11_Theta_hat_not_empty) {
    sf_mex_assign(&c11_d_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_d_y, sf_mex_create("y",
      chartInstance->c11_alpha_hat.vector.data, 0, 0U, 1, 0U, 1,
      chartInstance->c11_alpha_hat.size[0]), false);
  }

  sf_mex_setcell(c11_y, 2, c11_d_y);
  c11_e_y = NULL;
  if (!chartInstance->c11_init_flag_not_empty) {
    sf_mex_assign(&c11_e_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_e_y, sf_mex_create("y", &chartInstance->c11_init_flag, 0,
      0U, 0, 0U, 0), false);
  }

  sf_mex_setcell(c11_y, 3, c11_e_y);
  c11_f_y = NULL;
  if (!chartInstance->c11_method_not_empty) {
    sf_mex_assign(&c11_f_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_f_y, sf_mex_create("y", &chartInstance->c11_method, 7, 0U,
      0, 0U, 0), false);
  }

  sf_mex_setcell(c11_y, 4, c11_f_y);
  c11_g_y = NULL;
  if (!chartInstance->c11_method_not_empty) {
    sf_mex_assign(&c11_g_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_g_y, sf_mex_create("y", &chartInstance->c11_b_method, 7,
      0U, 0, 0U, 0), false);
  }

  sf_mex_setcell(c11_y, 5, c11_g_y);
  c11_h_y = NULL;
  if (!chartInstance->c11_Theta_hat_not_empty) {
    sf_mex_assign(&c11_h_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_h_y, sf_mex_create("y",
      chartInstance->c11_r_hat.vector.data, 0, 0U, 1, 0U, 1,
      chartInstance->c11_r_hat.size[0]), false);
  }

  sf_mex_setcell(c11_y, 6, c11_h_y);
  c11_i_y = NULL;
  if (!chartInstance->c11_method_not_empty) {
    sf_mex_assign(&c11_i_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_i_y, sf_mex_create("y", &chartInstance->c11_seed, 7, 0U,
      0, 0U, 0), false);
  }

  sf_mex_setcell(c11_y, 7, c11_i_y);
  c11_j_y = NULL;
  if (!chartInstance->c11_method_not_empty) {
    sf_mex_assign(&c11_j_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_j_y, sf_mex_create("y", &chartInstance->c11_c_state, 7,
      0U, 0, 0U, 0), false);
  }

  sf_mex_setcell(c11_y, 8, c11_j_y);
  c11_k_y = NULL;
  if (!chartInstance->c11_state_not_empty) {
    sf_mex_assign(&c11_k_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_k_y, sf_mex_create("y", chartInstance->c11_state, 7, 0U,
      1, 0U, 1, 625), false);
  }

  sf_mex_setcell(c11_y, 9, c11_k_y);
  c11_l_y = NULL;
  if (!chartInstance->c11_b_state_not_empty) {
    sf_mex_assign(&c11_l_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_l_y, sf_mex_create("y", chartInstance->c11_b_state, 7, 0U,
      1, 0U, 1, 2), false);
  }

  sf_mex_setcell(c11_y, 10, c11_l_y);
  c11_m_y = NULL;
  if (!chartInstance->c11_b_state_not_empty) {
    sf_mex_assign(&c11_m_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_m_y, sf_mex_create("y", chartInstance->c11_d_state, 7, 0U,
      1, 0U, 1, 2), false);
  }

  sf_mex_setcell(c11_y, 11, c11_m_y);
  c11_n_y = NULL;
  if (!chartInstance->c11_Theta_hat_not_empty) {
    sf_mex_assign(&c11_n_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_n_y, sf_mex_create("y",
      chartInstance->c11_v_hat.vector.data, 0, 0U, 1, 0U, 1,
      chartInstance->c11_v_hat.size[0]), false);
  }

  sf_mex_setcell(c11_y, 12, c11_n_y);
  c11_o_y = NULL;
  if (!chartInstance->c11_Theta_hat_not_empty) {
    sf_mex_assign(&c11_o_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c11_o_y, sf_mex_create("y",
      chartInstance->c11_w_hat.vector.data, 0, 0U, 1, 0U, 1,
      chartInstance->c11_w_hat.size[0]), false);
  }

  sf_mex_setcell(c11_y, 13, c11_o_y);
  sf_mex_assign(&c11_st, c11_y, false);
  return c11_st;
}

static void set_sim_state_c11_ABS_contDyn_model_SMC_FZL_NN
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_st)
{
  c11_coder_array_real_T c11_r;
  c11_coder_array_real_T c11_r1;
  c11_coder_array_real_T c11_r2;
  c11_coder_array_real_T c11_r3;
  c11_coder_array_real_T c11_r4;
  emlrtStack c11_b_st = { NULL,        /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c11_u;
  int32_T c11_b_loop_ub;
  int32_T c11_c_loop_ub;
  int32_T c11_d_loop_ub;
  int32_T c11_e_loop_ub;
  int32_T c11_i;
  int32_T c11_i1;
  int32_T c11_i2;
  int32_T c11_i3;
  int32_T c11_i4;
  int32_T c11_i5;
  int32_T c11_i6;
  int32_T c11_i7;
  int32_T c11_loop_ub;
  uint32_T c11_b_uv[625];
  uint32_T c11_uv1[2];
  uint32_T c11_uv2[2];
  c11_b_st.tls = chartInstance->c11_fEmlrtCtx;
  chartInstance->c11_doneDoubleBufferReInit = true;
  c11_u = sf_mex_dup(c11_st);
  *chartInstance->c11_d_hat = c11_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 0)), "d_hat");
  c11_array_real_T_Constructor(chartInstance, &c11_r);
  c11_c_emlrt_marshallIn(chartInstance, &c11_b_st, sf_mex_dup(sf_mex_getcell
    (c11_u, 1)), "Theta_hat", &chartInstance->c11_Theta_hat_not_empty, &c11_r);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st,
    &chartInstance->c11_Theta_hat, (emlrtRTEInfo *)NULL, c11_r.size[0]);
  c11_loop_ub = c11_r.size[0] - 1;
  for (c11_i = 0; c11_i <= c11_loop_ub; c11_i++) {
    chartInstance->c11_Theta_hat.vector.data[c11_i] = c11_r.vector.data[c11_i];
  }

  c11_array_real_T_Destructor(chartInstance, &c11_r);
  c11_array_real_T_Constructor(chartInstance, &c11_r1);
  c11_c_emlrt_marshallIn(chartInstance, &c11_b_st, sf_mex_dup(sf_mex_getcell
    (c11_u, 2)), "alpha_hat", &chartInstance->c11_alpha_hat_not_empty, &c11_r1);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st,
    &chartInstance->c11_alpha_hat, (emlrtRTEInfo *)NULL, c11_r1.size[0]);
  c11_b_loop_ub = c11_r1.size[0] - 1;
  for (c11_i1 = 0; c11_i1 <= c11_b_loop_ub; c11_i1++) {
    chartInstance->c11_alpha_hat.vector.data[c11_i1] = c11_r1.vector.data[c11_i1];
  }

  c11_array_real_T_Destructor(chartInstance, &c11_r1);
  chartInstance->c11_init_flag = c11_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c11_u, 3)), "init_flag",
    &chartInstance->c11_init_flag_not_empty);
  chartInstance->c11_method = c11_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 4)), "method", &chartInstance->c11_method_not_empty);
  chartInstance->c11_b_method = c11_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 5)), "method", &chartInstance->c11_b_method_not_empty);
  c11_array_real_T_Constructor(chartInstance, &c11_r2);
  c11_c_emlrt_marshallIn(chartInstance, &c11_b_st, sf_mex_dup(sf_mex_getcell
    (c11_u, 6)), "r_hat", &chartInstance->c11_r_hat_not_empty, &c11_r2);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st, &chartInstance->c11_r_hat,
    (emlrtRTEInfo *)NULL, c11_r2.size[0]);
  c11_c_loop_ub = c11_r2.size[0] - 1;
  for (c11_i2 = 0; c11_i2 <= c11_c_loop_ub; c11_i2++) {
    chartInstance->c11_r_hat.vector.data[c11_i2] = c11_r2.vector.data[c11_i2];
  }

  c11_array_real_T_Destructor(chartInstance, &c11_r2);
  chartInstance->c11_seed = c11_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 7)), "seed", &chartInstance->c11_seed_not_empty);
  chartInstance->c11_c_state = c11_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 8)), "state", &chartInstance->c11_c_state_not_empty);
  c11_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 9)),
    "state", &chartInstance->c11_state_not_empty, c11_b_uv);
  for (c11_i3 = 0; c11_i3 < 625; c11_i3++) {
    chartInstance->c11_state[c11_i3] = c11_b_uv[c11_i3];
  }

  c11_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 10)),
    "state", &chartInstance->c11_b_state_not_empty, c11_uv1);
  for (c11_i4 = 0; c11_i4 < 2; c11_i4++) {
    chartInstance->c11_b_state[c11_i4] = c11_uv1[c11_i4];
  }

  c11_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 11)),
    "state", &chartInstance->c11_d_state_not_empty, c11_uv2);
  for (c11_i5 = 0; c11_i5 < 2; c11_i5++) {
    chartInstance->c11_d_state[c11_i5] = c11_uv2[c11_i5];
  }

  c11_array_real_T_Constructor(chartInstance, &c11_r3);
  c11_c_emlrt_marshallIn(chartInstance, &c11_b_st, sf_mex_dup(sf_mex_getcell
    (c11_u, 12)), "v_hat", &chartInstance->c11_v_hat_not_empty, &c11_r3);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st, &chartInstance->c11_v_hat,
    (emlrtRTEInfo *)NULL, c11_r3.size[0]);
  c11_d_loop_ub = c11_r3.size[0] - 1;
  for (c11_i6 = 0; c11_i6 <= c11_d_loop_ub; c11_i6++) {
    chartInstance->c11_v_hat.vector.data[c11_i6] = c11_r3.vector.data[c11_i6];
  }

  c11_array_real_T_Destructor(chartInstance, &c11_r3);
  c11_array_real_T_Constructor(chartInstance, &c11_r4);
  c11_c_emlrt_marshallIn(chartInstance, &c11_b_st, sf_mex_dup(sf_mex_getcell
    (c11_u, 13)), "w_hat", &chartInstance->c11_w_hat_not_empty, &c11_r4);
  c11_array_real_T_SetSize(chartInstance, &c11_b_st, &chartInstance->c11_w_hat,
    (emlrtRTEInfo *)NULL, c11_r4.size[0]);
  c11_e_loop_ub = c11_r4.size[0] - 1;
  for (c11_i7 = 0; c11_i7 <= c11_e_loop_ub; c11_i7++) {
    chartInstance->c11_w_hat.vector.data[c11_i7] = c11_r4.vector.data[c11_i7];
  }

  c11_array_real_T_Destructor(chartInstance, &c11_r4);
  sf_mex_destroy(&c11_u);
  sf_mex_destroy(&c11_st);
}

static void c11_rng(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
                    *chartInstance)
{
  time_t c11_b_eTime;
  time_t c11_eTime;
  real_T c11_a;
  real_T c11_b_a;
  real_T c11_b_mti;
  real_T c11_b_s;
  real_T c11_b_x;
  real_T c11_b_y;
  real_T c11_c_x;
  real_T c11_d;
  real_T c11_d1;
  real_T c11_d_x;
  real_T c11_e_x;
  real_T c11_f_x;
  real_T c11_g_x;
  real_T c11_h_x;
  real_T c11_i_x;
  real_T c11_j_x;
  real_T c11_s0;
  real_T c11_x;
  real_T c11_y;
  int32_T c11_exitg1;
  int32_T c11_i;
  int32_T c11_mti;
  int32_T c11_prevEpochTime;
  int32_T c11_t;
  uint32_T c11_arg3;
  uint32_T c11_b_seed;
  uint32_T c11_r;
  uint32_T c11_u;
  uint32_T c11_u1;
  uint32_T c11_varargin_1;
  boolean_T c11_b_rEQ0;
  boolean_T c11_rEQ0;
  if (!chartInstance->c11_seed_not_empty) {
    chartInstance->c11_seed = 0U;
    chartInstance->c11_seed_not_empty = true;
  }

  if (!chartInstance->c11_method_not_empty) {
    chartInstance->c11_method = 7U;
    chartInstance->c11_method_not_empty = true;
  }

  c11_x = c11_now(chartInstance) * 8.64E+6;
  c11_b_x = c11_x;
  c11_y = c11_b_x;
  c11_y = muDoubleScalarFloor(c11_y);
  c11_c_x = c11_y;
  c11_a = c11_c_x;
  c11_d_x = c11_a;
  c11_e_x = c11_d_x;
  if (c11_e_x == 0.0) {
    c11_b_s = 0.0;
  } else {
    c11_b_s = muDoubleScalarRem(c11_e_x, 2.147483647E+9);
    c11_rEQ0 = (c11_b_s == 0.0);
    if (c11_rEQ0) {
      c11_b_s = 0.0;
    } else if (c11_b_s < 0.0) {
      c11_b_s += 2.147483647E+9;
    }
  }

  c11_eTime = time(NULL);
  c11_prevEpochTime = (int32_T)c11_eTime + 1;
  do {
    c11_exitg1 = 0;
    c11_b_eTime = time(NULL);
    c11_t = (int32_T)c11_b_eTime;
    if (c11_t <= c11_prevEpochTime) {
      c11_f_x = c11_now(chartInstance) * 8.64E+6;
      c11_g_x = c11_f_x;
      c11_b_y = c11_g_x;
      c11_b_y = muDoubleScalarFloor(c11_b_y);
      c11_h_x = c11_b_y;
      c11_b_a = c11_h_x;
      c11_i_x = c11_b_a;
      c11_j_x = c11_i_x;
      if (c11_j_x == 0.0) {
        c11_s0 = 0.0;
      } else {
        c11_s0 = muDoubleScalarRem(c11_j_x, 2.147483647E+9);
        c11_b_rEQ0 = (c11_s0 == 0.0);
        if (c11_b_rEQ0) {
          c11_s0 = 0.0;
        } else if (c11_s0 < 0.0) {
          c11_s0 += 2.147483647E+9;
        }
      }

      if (c11_b_s != c11_s0) {
        c11_exitg1 = 1;
      }
    } else {
      c11_exitg1 = 1;
    }
  } while (c11_exitg1 == 0);

  c11_d = muDoubleScalarRound(c11_b_s);
  if (c11_d < 4.294967296E+9) {
    if (c11_d >= 0.0) {
      c11_u = (uint32_T)c11_d;
    } else {
      c11_u = 0U;
    }
  } else if (c11_d >= 4.294967296E+9) {
    c11_u = MAX_uint32_T;
  } else {
    c11_u = 0U;
  }

  chartInstance->c11_seed = c11_u;
  if (!chartInstance->c11_method_not_empty) {
    chartInstance->c11_method = 7U;
    chartInstance->c11_method_not_empty = true;
  }

  c11_varargin_1 = chartInstance->c11_seed;
  if (!chartInstance->c11_state_not_empty) {
    for (c11_i = 0; c11_i < 625; c11_i++) {
      chartInstance->c11_state[c11_i] = c11_uv[c11_i];
    }

    chartInstance->c11_state_not_empty = true;
  }

  c11_arg3 = c11_varargin_1;
  c11_b_seed = c11_arg3;
  c11_r = c11_b_seed;
  chartInstance->c11_state[0] = c11_b_seed;
  for (c11_mti = 0; c11_mti < 623; c11_mti++) {
    c11_b_mti = (real_T)c11_mti + 2.0;
    c11_d1 = muDoubleScalarRound(c11_b_mti - 1.0);
    if (c11_d1 < 4.294967296E+9) {
      if (c11_d1 >= 0.0) {
        c11_u1 = (uint32_T)c11_d1;
      } else {
        c11_u1 = 0U;
      }
    } else if (c11_d1 >= 4.294967296E+9) {
      c11_u1 = MAX_uint32_T;
    } else {
      c11_u1 = 0U;
    }

    c11_r = (c11_r ^ c11_r >> 30U) * 1812433253U + c11_u1;
    chartInstance->c11_state[(int32_T)c11_b_mti - 1] = c11_r;
  }

  chartInstance->c11_state[624] = 624U;
}

static real_T c11_now(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
                      *chartInstance)
{
  time_t c11_rawtime;
  c11_sxaDueAh1f53T9ESYg9Uc4E c11_timeinfoDouble;
  struct tm c11_timeinfo;
  real_T c11_cDaysMonthWise[12];
  real_T c11_a;
  real_T c11_b_a;
  real_T c11_b_r;
  real_T c11_b_x;
  real_T c11_b_y;
  real_T c11_c_a;
  real_T c11_c_r;
  real_T c11_c_x;
  real_T c11_c_y;
  real_T c11_dDateNum;
  real_T c11_d_x;
  real_T c11_d_y;
  real_T c11_e_x;
  real_T c11_f_x;
  real_T c11_g_x;
  real_T c11_h_x;
  real_T c11_i_x;
  real_T c11_j_x;
  real_T c11_k_x;
  real_T c11_l_x;
  real_T c11_m_x;
  real_T c11_n_x;
  real_T c11_o_x;
  real_T c11_r;
  real_T c11_x;
  boolean_T c11_b_rEQ0;
  boolean_T c11_c_rEQ0;
  boolean_T c11_guard1;
  boolean_T c11_rEQ0;
  (void)chartInstance;
  c11_cDaysMonthWise[0] = 0.0;
  c11_cDaysMonthWise[1] = 31.0;
  c11_cDaysMonthWise[2] = 59.0;
  c11_cDaysMonthWise[3] = 90.0;
  c11_cDaysMonthWise[4] = 120.0;
  c11_cDaysMonthWise[5] = 151.0;
  c11_cDaysMonthWise[6] = 181.0;
  c11_cDaysMonthWise[7] = 212.0;
  c11_cDaysMonthWise[8] = 243.0;
  c11_cDaysMonthWise[9] = 273.0;
  c11_cDaysMonthWise[10] = 304.0;
  c11_cDaysMonthWise[11] = 334.0;
  time(&c11_rawtime);
  c11_timeinfo = *localtime(&c11_rawtime);
  c11_timeinfo.tm_year += 1900;
  c11_timeinfo.tm_mon++;
  c11_timeinfoDouble.tm_min = (real_T)c11_timeinfo.tm_min;
  c11_timeinfoDouble.tm_sec = (real_T)c11_timeinfo.tm_sec;
  c11_timeinfoDouble.tm_hour = (real_T)c11_timeinfo.tm_hour;
  c11_timeinfoDouble.tm_mday = (real_T)c11_timeinfo.tm_mday;
  c11_timeinfoDouble.tm_mon = (real_T)c11_timeinfo.tm_mon;
  c11_timeinfoDouble.tm_year = (real_T)c11_timeinfo.tm_year;
  c11_x = c11_timeinfoDouble.tm_year / 4.0;
  c11_b_x = c11_x;
  c11_b_y = c11_b_x;
  c11_b_y = muDoubleScalarCeil(c11_b_y);
  c11_c_x = c11_timeinfoDouble.tm_year / 100.0;
  c11_d_x = c11_c_x;
  c11_c_y = c11_d_x;
  c11_c_y = muDoubleScalarCeil(c11_c_y);
  c11_e_x = c11_timeinfoDouble.tm_year / 400.0;
  c11_f_x = c11_e_x;
  c11_d_y = c11_f_x;
  c11_d_y = muDoubleScalarCeil(c11_d_y);
  c11_dDateNum = ((((365.0 * c11_timeinfoDouble.tm_year + c11_b_y) - c11_c_y) +
                   c11_d_y) + c11_cDaysMonthWise[(int32_T)
                  c11_timeinfoDouble.tm_mon - 1]) + c11_timeinfoDouble.tm_mday;
  if (c11_timeinfoDouble.tm_mon > 2.0) {
    c11_g_x = c11_timeinfoDouble.tm_year;
    c11_a = c11_g_x;
    c11_h_x = c11_a;
    c11_i_x = c11_h_x;
    if (c11_i_x == 0.0) {
      c11_r = 0.0;
    } else {
      c11_r = muDoubleScalarRem(c11_i_x, 4.0);
      c11_rEQ0 = (c11_r == 0.0);
      if (c11_rEQ0) {
        c11_r = 0.0;
      } else if (c11_r < 0.0) {
        c11_r += 4.0;
      }
    }

    c11_guard1 = false;
    if (c11_r == 0.0) {
      c11_j_x = c11_timeinfoDouble.tm_year;
      c11_b_a = c11_j_x;
      c11_k_x = c11_b_a;
      c11_m_x = c11_k_x;
      if (c11_m_x == 0.0) {
        c11_b_r = 0.0;
      } else {
        c11_b_r = muDoubleScalarRem(c11_m_x, 100.0);
        c11_b_rEQ0 = (c11_b_r == 0.0);
        if (c11_b_rEQ0) {
          c11_b_r = 0.0;
        } else if (c11_b_r < 0.0) {
          c11_b_r += 100.0;
        }
      }

      if (c11_b_r != 0.0) {
        c11_dDateNum++;
      } else {
        c11_guard1 = true;
      }
    } else {
      c11_guard1 = true;
    }

    if (c11_guard1) {
      c11_l_x = c11_timeinfoDouble.tm_year;
      c11_c_a = c11_l_x;
      c11_n_x = c11_c_a;
      c11_o_x = c11_n_x;
      if (c11_o_x == 0.0) {
        c11_c_r = 0.0;
      } else {
        c11_c_r = muDoubleScalarRem(c11_o_x, 400.0);
        c11_c_rEQ0 = (c11_c_r == 0.0);
        if (c11_c_rEQ0) {
          c11_c_r = 0.0;
        } else if (c11_c_r < 0.0) {
          c11_c_r += 400.0;
        }
      }

      if (c11_c_r == 0.0) {
        c11_dDateNum++;
      }
    }
  }

  c11_dDateNum += ((c11_timeinfoDouble.tm_hour * 3600.0 +
                    c11_timeinfoDouble.tm_min * 60.0) +
                   c11_timeinfoDouble.tm_sec) / 86400.0;
  return c11_dDateNum;
}

static void c11_randn(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
                      *chartInstance, const emlrtStack *c11_sp, real_T
                      c11_varargin_1, c11_coder_array_real_T *c11_r)
{
  emlrtStack c11_b_st;
  emlrtStack c11_c_st;
  emlrtStack c11_d_st;
  emlrtStack c11_st;
  real_T c11_b_k;
  real_T c11_b_varargin_1;
  real_T c11_c_varargin_1;
  real_T c11_d;
  real_T c11_d1;
  real_T c11_d_varargin_1;
  int32_T c11_i;
  int32_T c11_i1;
  int32_T c11_i2;
  int32_T c11_k;
  c11_st.prev = c11_sp;
  c11_st.tls = c11_sp->tls;
  c11_st.site = &c11_v_emlrtRSI;
  c11_b_st.prev = &c11_st;
  c11_b_st.tls = c11_st.tls;
  c11_c_st.prev = &c11_b_st;
  c11_c_st.tls = c11_b_st.tls;
  c11_d_st.prev = &c11_c_st;
  c11_d_st.tls = c11_c_st.tls;
  c11_b_varargin_1 = c11_varargin_1;
  if (!chartInstance->c11_b_method_not_empty) {
    chartInstance->c11_b_method = 0U;
    chartInstance->c11_b_method_not_empty = true;
    for (c11_i = 0; c11_i < 2; c11_i++) {
      chartInstance->c11_d_state[c11_i] = 362436069U + 158852560U * (uint32_T)
        c11_i;
    }

    chartInstance->c11_d_state_not_empty = true;
  }

  c11_b_st.site = &c11_w_emlrtRSI;
  c11_c_varargin_1 = c11_b_varargin_1;
  if (!chartInstance->c11_method_not_empty) {
    chartInstance->c11_method = 7U;
    chartInstance->c11_method_not_empty = true;
  }

  c11_c_st.site = &c11_x_emlrtRSI;
  c11_d_varargin_1 = c11_c_varargin_1;
  if (!chartInstance->c11_state_not_empty) {
    for (c11_i1 = 0; c11_i1 < 625; c11_i1++) {
      chartInstance->c11_state[c11_i1] = c11_uv[c11_i1];
    }

    chartInstance->c11_state_not_empty = true;
  }

  if (!(c11_d_varargin_1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c11_d_varargin_1, &c11_rb_emlrtDCI, &c11_c_st);
  }

  c11_array_real_T_SetSize(chartInstance, &c11_c_st, c11_r, &c11_s_emlrtRTEI,
    (int32_T)c11_d_varargin_1);
  c11_d = (real_T)c11_r->size[0];
  c11_i2 = (int32_T)c11_d;
  for (c11_k = 0; c11_k < c11_i2; c11_k++) {
    c11_b_k = (real_T)c11_k + 1.0;
    c11_d_st.site = &c11_ab_emlrtRSI;
    c11_d1 = c11_b_eml_rand_mt19937ar(chartInstance, &c11_d_st,
      chartInstance->c11_state);
    c11_r->vector.data[(int32_T)c11_b_k - 1] = c11_d1;
  }
}

static void c11_eml_rand_mt19937ar
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, uint32_T c11_e_state[625], uint32_T c11_f_state[625],
   real_T *c11_r)
{
  int32_T c11_i;
  for (c11_i = 0; c11_i < 625; c11_i++) {
    c11_f_state[c11_i] = c11_e_state[c11_i];
  }

  *c11_r = c11_b_eml_rand_mt19937ar(chartInstance, c11_sp, c11_f_state);
}

static void c11_genrand_uint32_vector
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, uint32_T
   c11_mt[625], uint32_T c11_b_mt[625], uint32_T c11_u[2])
{
  int32_T c11_i;
  for (c11_i = 0; c11_i < 625; c11_i++) {
    c11_b_mt[c11_i] = c11_mt[c11_i];
  }

  c11_b_genrand_uint32_vector(chartInstance, c11_b_mt, c11_u);
}

static void c11_genrandu(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
  *chartInstance, const emlrtStack *c11_sp, uint32_T c11_mt[625], uint32_T
  c11_b_mt[625], real_T *c11_r)
{
  int32_T c11_i;
  for (c11_i = 0; c11_i < 625; c11_i++) {
    c11_b_mt[c11_i] = c11_mt[c11_i];
  }

  *c11_r = c11_b_genrandu(chartInstance, c11_sp, c11_b_mt);
}

static void c11_b_randn(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
  *chartInstance, const emlrtStack *c11_sp, real_T c11_varargin_1[2],
  c11_coder_array_real_T *c11_r)
{
  emlrtStack c11_b_st;
  emlrtStack c11_c_st;
  emlrtStack c11_d_st;
  emlrtStack c11_st;
  real_T c11_b_k;
  real_T c11_d;
  real_T c11_d1;
  int32_T c11_i;
  int32_T c11_i1;
  int32_T c11_i2;
  int32_T c11_k;
  c11_st.prev = c11_sp;
  c11_st.tls = c11_sp->tls;
  c11_st.site = &c11_v_emlrtRSI;
  c11_b_st.prev = &c11_st;
  c11_b_st.tls = c11_st.tls;
  c11_c_st.prev = &c11_b_st;
  c11_c_st.tls = c11_b_st.tls;
  c11_d_st.prev = &c11_c_st;
  c11_d_st.tls = c11_c_st.tls;
  if (!chartInstance->c11_b_method_not_empty) {
    chartInstance->c11_b_method = 0U;
    chartInstance->c11_b_method_not_empty = true;
    for (c11_i = 0; c11_i < 2; c11_i++) {
      chartInstance->c11_d_state[c11_i] = 362436069U + 158852560U * (uint32_T)
        c11_i;
    }

    chartInstance->c11_d_state_not_empty = true;
  }

  c11_b_st.site = &c11_w_emlrtRSI;
  if (!chartInstance->c11_method_not_empty) {
    chartInstance->c11_method = 7U;
    chartInstance->c11_method_not_empty = true;
  }

  c11_c_st.site = &c11_x_emlrtRSI;
  if (!chartInstance->c11_state_not_empty) {
    for (c11_i1 = 0; c11_i1 < 625; c11_i1++) {
      chartInstance->c11_state[c11_i1] = c11_uv[c11_i1];
    }

    chartInstance->c11_state_not_empty = true;
  }

  c11_array_real_T_SetSize(chartInstance, &c11_c_st, c11_r, &c11_s_emlrtRTEI,
    (int32_T)c11_varargin_1[0]);
  c11_d = (real_T)c11_r->size[0];
  c11_i2 = (int32_T)c11_d;
  for (c11_k = 0; c11_k < c11_i2; c11_k++) {
    c11_b_k = (real_T)c11_k + 1.0;
    c11_d_st.site = &c11_ab_emlrtRSI;
    c11_d1 = c11_b_eml_rand_mt19937ar(chartInstance, &c11_d_st,
      chartInstance->c11_state);
    c11_r->vector.data[(int32_T)c11_b_k - 1] = c11_d1;
  }
}

static void c11_dynamic_size_checks
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, c11_coder_array_real_T_2D *c11_a, c11_coder_array_real_T *
   c11_b, int32_T c11_innerDimA, int32_T c11_innerDimB)
{
  const mxArray *c11_b_y = NULL;
  const mxArray *c11_c_y = NULL;
  const mxArray *c11_d_y = NULL;
  const mxArray *c11_y = NULL;
  boolean_T c11_b1;
  boolean_T c11_b_b;
  boolean_T c11_innerDimOk;
  (void)chartInstance;
  c11_innerDimOk = (c11_innerDimA == c11_innerDimB);
  if (!c11_innerDimOk) {
    c11_b_b = (c11_a->size[0] == 1);
    c11_b1 = (c11_a->size[1] == 1);
    if ((c11_b_b && c11_b1) || (c11_b->size[0] == 1)) {
      c11_b_y = NULL;
      sf_mex_assign(&c11_b_y, sf_mex_create("y", c11_cv, 10, 0U, 1, 0U, 2, 1, 45),
                    false);
      c11_d_y = NULL;
      sf_mex_assign(&c11_d_y, sf_mex_create("y", c11_cv, 10, 0U, 1, 0U, 2, 1, 45),
                    false);
      sf_mex_call(c11_sp, &c11_c_emlrtMCI, "error", 0U, 2U, 14, c11_b_y, 14,
                  sf_mex_call(c11_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c11_sp, NULL, "message", 1U, 1U, 14, c11_d_y)));
    } else {
      c11_y = NULL;
      sf_mex_assign(&c11_y, sf_mex_create("y", c11_cv1, 10, 0U, 1, 0U, 2, 1, 15),
                    false);
      c11_c_y = NULL;
      sf_mex_assign(&c11_c_y, sf_mex_create("y", c11_cv1, 10, 0U, 1, 0U, 2, 1,
        15), false);
      sf_mex_call(c11_sp, &c11_d_emlrtMCI, "error", 0U, 2U, 14, c11_y, 14,
                  sf_mex_call(c11_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c11_sp, NULL, "message", 1U, 1U, 14, c11_c_y)));
    }
  }
}

static void c11_mtimes(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
  *chartInstance, const emlrtStack *c11_sp, c11_coder_array_real_T_2D *c11_A,
  c11_coder_array_real_T *c11_B, c11_coder_array_real_T *c11_C)
{
  ptrdiff_t c11_k_t;
  ptrdiff_t c11_lda_t;
  ptrdiff_t c11_ldb_t;
  ptrdiff_t c11_ldc_t;
  ptrdiff_t c11_m_t;
  ptrdiff_t c11_n_t;
  emlrtStack c11_b_st;
  emlrtStack c11_st;
  real_T c11_alpha1;
  real_T c11_beta1;
  int32_T c11_K;
  int32_T c11_LD1;
  int32_T c11_LD2;
  int32_T c11_LDC;
  int32_T c11_M;
  int32_T c11_b_k;
  int32_T c11_b_m;
  int32_T c11_b_mA;
  int32_T c11_b_nA;
  int32_T c11_b_var;
  int32_T c11_c_var;
  int32_T c11_d_var;
  int32_T c11_e_var;
  int32_T c11_i;
  int32_T c11_k;
  int32_T c11_lda;
  int32_T c11_ldb;
  int32_T c11_ldc;
  int32_T c11_loop_ub;
  int32_T c11_m;
  int32_T c11_mA;
  int32_T c11_mB;
  int32_T c11_mC;
  int32_T c11_mc;
  int32_T c11_nA;
  int32_T c11_var;
  char_T c11_TRANSA1;
  char_T c11_TRANSB1;
  c11_st.prev = c11_sp;
  c11_st.tls = c11_sp->tls;
  c11_b_st.prev = &c11_st;
  c11_b_st.tls = c11_st.tls;
  c11_mA = c11_A->size[0];
  c11_nA = c11_A->size[1];
  c11_mB = c11_B->size[0];
  c11_b_mA = c11_mA;
  c11_b_nA = c11_nA;
  c11_m = c11_b_mA;
  c11_k = c11_b_nA;
  if ((c11_mA == 0) || (c11_nA == 0) || (c11_mB == 0)) {
    c11_st.site = &c11_vb_emlrtRSI;
    c11_array_real_T_SetSize(chartInstance, &c11_st, c11_C, &c11_u_emlrtRTEI,
      c11_mA);
    c11_loop_ub = c11_mA - 1;
    for (c11_i = 0; c11_i <= c11_loop_ub; c11_i++) {
      c11_C->vector.data[c11_i] = 0.0;
    }
  } else {
    c11_st.site = &c11_qb_emlrtRSI;
    c11_M = c11_m;
    c11_K = c11_k;
    c11_LD1 = c11_mA;
    c11_LD2 = c11_mB;
    c11_mC = c11_mA;
    c11_LDC = c11_m;
    c11_b_st.site = &c11_ub_emlrtRSI;
    c11_b_m = c11_M;
    c11_b_k = c11_K;
    c11_lda = c11_LD1;
    c11_ldb = c11_LD2;
    c11_mc = c11_mC;
    c11_ldc = c11_LDC;
    c11_TRANSB1 = 'N';
    c11_TRANSA1 = 'N';
    c11_alpha1 = 1.0;
    c11_beta1 = 0.0;
    c11_var = c11_b_m;
    c11_m_t = (ptrdiff_t)c11_var;
    c11_n_t = (ptrdiff_t)1;
    c11_b_var = c11_b_k;
    c11_k_t = (ptrdiff_t)c11_b_var;
    c11_c_var = c11_lda;
    c11_lda_t = (ptrdiff_t)c11_c_var;
    c11_d_var = c11_ldb;
    c11_ldb_t = (ptrdiff_t)c11_d_var;
    c11_e_var = c11_ldc;
    c11_ldc_t = (ptrdiff_t)c11_e_var;
    c11_array_real_T_SetSize(chartInstance, &c11_b_st, c11_C, &c11_t_emlrtRTEI,
      c11_mc);
    dgemm(&c11_TRANSA1, &c11_TRANSB1, &c11_m_t, &c11_n_t, &c11_k_t, &c11_alpha1,
          &c11_A->vector.data[0], &c11_lda_t, &c11_B->vector.data[0], &c11_ldb_t,
          &c11_beta1, &c11_C->vector.data[0], &c11_ldc_t);
  }
}

const mxArray
  *sf_c11_ABS_contDyn_model_SMC_FZL_NN_get_eml_resolved_functions_info(void)
{
  const mxArray *c11_nameCaptureInfo = NULL;
  c11_nameCaptureInfo = NULL;
  sf_mex_assign(&c11_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c11_nameCaptureInfo;
}

static real_T c11_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_nullptr, const char_T *c11_identifier)
{
  emlrtMsgIdentifier c11_thisId;
  real_T c11_y;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_y = c11_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr),
    &c11_thisId);
  sf_mex_destroy(&c11_nullptr);
  return c11_y;
}

static real_T c11_b_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  real_T c11_d;
  real_T c11_y;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_d, 1, 0, 0U, 0, 0U, 0);
  c11_y = c11_d;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_c_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, const mxArray *c11_nullptr, const char_T *c11_identifier,
   boolean_T *c11_svPtr, c11_coder_array_real_T *c11_y)
{
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_d_emlrt_marshallIn(chartInstance, c11_sp, sf_mex_dup(c11_nullptr),
    &c11_thisId, c11_svPtr, c11_y);
  sf_mex_destroy(&c11_nullptr);
}

static void c11_d_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, const mxArray *c11_u, const emlrtMsgIdentifier
   *c11_parentId, boolean_T *c11_svPtr, c11_coder_array_real_T *c11_y)
{
  c11_coder_array_real_T c11_r;
  int32_T c11_iv[1];
  int32_T c11_i;
  int32_T c11_loop_ub;
  boolean_T c11_bv[1];
  c11_array_real_T_Constructor(chartInstance, &c11_r);
  c11_iv[0] = -1;
  if (mxIsEmpty(c11_u)) {
    *c11_svPtr = false;
  } else {
    *c11_svPtr = true;
    c11_array_real_T_SetSize(chartInstance, c11_sp, &c11_r, (emlrtRTEInfo *)NULL,
      sf_mex_get_dimension(c11_u, 0));
    c11_bv[0] = true;
    sf_mex_import_vs(c11_parentId, sf_mex_dup(c11_u), c11_r.vector.data, 1, 0,
                     0U, 1, 0U, 1, c11_bv, c11_iv, c11_r.size);
    c11_array_real_T_SetSize(chartInstance, c11_sp, c11_y, (emlrtRTEInfo *)NULL,
      c11_r.size[0]);
    c11_loop_ub = c11_r.size[0] - 1;
    for (c11_i = 0; c11_i <= c11_loop_ub; c11_i++) {
      c11_y->vector.data[c11_i] = c11_r.vector.data[c11_i];
    }
  }

  sf_mex_destroy(&c11_u);
  c11_array_real_T_Destructor(chartInstance, &c11_r);
}

static real_T c11_e_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_nullptr, const char_T *c11_identifier, boolean_T *c11_svPtr)
{
  emlrtMsgIdentifier c11_thisId;
  real_T c11_y;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_y = c11_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr),
    &c11_thisId, c11_svPtr);
  sf_mex_destroy(&c11_nullptr);
  return c11_y;
}

static real_T c11_f_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId, boolean_T *c11_svPtr)
{
  real_T c11_d;
  real_T c11_y;
  (void)chartInstance;
  if (mxIsEmpty(c11_u)) {
    *c11_svPtr = false;
  } else {
    *c11_svPtr = true;
    sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_d, 1, 0, 0U, 0, 0U, 0);
    c11_y = c11_d;
  }

  sf_mex_destroy(&c11_u);
  return c11_y;
}

static uint32_T c11_g_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_nullptr, const char_T *c11_identifier, boolean_T *c11_svPtr)
{
  emlrtMsgIdentifier c11_thisId;
  uint32_T c11_y;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_y = c11_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr),
    &c11_thisId, c11_svPtr);
  sf_mex_destroy(&c11_nullptr);
  return c11_y;
}

static uint32_T c11_h_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId, boolean_T *c11_svPtr)
{
  uint32_T c11_b_u;
  uint32_T c11_y;
  (void)chartInstance;
  if (mxIsEmpty(c11_u)) {
    *c11_svPtr = false;
  } else {
    *c11_svPtr = true;
    sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_b_u, 1, 7, 0U, 0, 0U, 0);
    c11_y = c11_b_u;
  }

  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_i_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_nullptr, const char_T *c11_identifier, boolean_T *c11_svPtr,
   uint32_T c11_y[625])
{
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr), &c11_thisId,
    c11_svPtr, c11_y);
  sf_mex_destroy(&c11_nullptr);
}

static void c11_j_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId, boolean_T *c11_svPtr,
   uint32_T c11_y[625])
{
  int32_T c11_i;
  uint32_T c11_b_uv[625];
  (void)chartInstance;
  if (mxIsEmpty(c11_u)) {
    *c11_svPtr = false;
  } else {
    *c11_svPtr = true;
    sf_mex_import(c11_parentId, sf_mex_dup(c11_u), c11_b_uv, 1, 7, 0U, 1, 0U, 1,
                  625);
    for (c11_i = 0; c11_i < 625; c11_i++) {
      c11_y[c11_i] = c11_b_uv[c11_i];
    }
  }

  sf_mex_destroy(&c11_u);
}

static void c11_k_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_nullptr, const char_T *c11_identifier, boolean_T *c11_svPtr,
   uint32_T c11_y[2])
{
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr), &c11_thisId,
    c11_svPtr, c11_y);
  sf_mex_destroy(&c11_nullptr);
}

static void c11_l_emlrt_marshallIn
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId, boolean_T *c11_svPtr,
   uint32_T c11_y[2])
{
  int32_T c11_i;
  uint32_T c11_b_uv[2];
  (void)chartInstance;
  if (mxIsEmpty(c11_u)) {
    *c11_svPtr = false;
  } else {
    *c11_svPtr = true;
    sf_mex_import(c11_parentId, sf_mex_dup(c11_u), c11_b_uv, 1, 7, 0U, 1, 0U, 1,
                  2);
    for (c11_i = 0; c11_i < 2; c11_i++) {
      c11_y[c11_i] = c11_b_uv[c11_i];
    }
  }

  sf_mex_destroy(&c11_u);
}

static real_T c11_b_eml_rand_mt19937ar
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, uint32_T c11_e_state[625])
{
  static real_T c11_dv[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  static real_T c11_dv1[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  emlrtStack c11_b_st;
  emlrtStack c11_st;
  real_T c11_b_r;
  real_T c11_b_u;
  real_T c11_b_x;
  real_T c11_c_u;
  real_T c11_c_x;
  real_T c11_d_u;
  real_T c11_d_x;
  real_T c11_e_x;
  real_T c11_f_x;
  real_T c11_u;
  real_T c11_x;
  real_T c11_y;
  int32_T c11_exitg1;
  uint32_T c11_u32[2];
  uint32_T c11_i;
  uint32_T c11_ip1;
  c11_st.prev = c11_sp;
  c11_st.tls = c11_sp->tls;
  c11_st.site = &c11_bb_emlrtRSI;
  c11_b_st.prev = &c11_st;
  c11_b_st.tls = c11_st.tls;
  do {
    c11_exitg1 = 0;
    c11_b_genrand_uint32_vector(chartInstance, c11_e_state, c11_u32);
    c11_i = (c11_u32[1] >> 24U) + 1U;
    c11_ip1 = c11_i + 1U;
    c11_u = ((real_T)(c11_u32[0] >> 3U) * 1.6777216E+7 + (real_T)(c11_u32[1] &
              16777215U)) * 2.2204460492503131E-16 - 1.0;
    c11_b_r = c11_u * c11_dv[(int32_T)c11_ip1 - 1];
    c11_x = c11_b_r;
    c11_b_x = c11_x;
    c11_c_x = c11_b_x;
    c11_y = muDoubleScalarAbs(c11_c_x);
    if (c11_y <= c11_dv[(int32_T)c11_i - 1]) {
      c11_exitg1 = 1;
    } else if (c11_i < 256U) {
      c11_b_st.site = &c11_cb_emlrtRSI;
      c11_b_u = c11_b_genrandu(chartInstance, &c11_b_st, c11_e_state);
      c11_d_x = -0.5 * c11_b_r * c11_b_r;
      c11_f_x = c11_d_x;
      c11_f_x = muDoubleScalarExp(c11_f_x);
      if (c11_dv1[(int32_T)c11_ip1 - 1] + c11_b_u * (c11_dv1[(int32_T)c11_i - 1]
           - c11_dv1[(int32_T)c11_ip1 - 1]) < c11_f_x) {
        c11_exitg1 = 1;
      }
    } else {
      do {
        c11_b_st.site = &c11_db_emlrtRSI;
        c11_c_u = c11_b_genrandu(chartInstance, &c11_b_st, c11_e_state);
        c11_e_x = muDoubleScalarLog(c11_c_u) * 0.273661237329758;
        c11_b_st.site = &c11_eb_emlrtRSI;
        c11_d_u = c11_b_genrandu(chartInstance, &c11_b_st, c11_e_state);
      } while (!(-2.0 * muDoubleScalarLog(c11_d_u) > c11_e_x * c11_e_x));

      if (c11_b_r < 0.0) {
        c11_b_r = c11_e_x - 3.65415288536101;
      } else {
        c11_b_r = 3.65415288536101 - c11_e_x;
      }

      c11_exitg1 = 1;
    }
  } while (c11_exitg1 == 0);

  return c11_b_r;
}

static void c11_b_genrand_uint32_vector
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, uint32_T
   c11_mt[625], uint32_T c11_u[2])
{
  real_T c11_b_j;
  real_T c11_c_kk;
  int32_T c11_b_kk;
  int32_T c11_j;
  int32_T c11_kk;
  uint32_T c11_b_y;
  uint32_T c11_c_y;
  uint32_T c11_d_y;
  uint32_T c11_e_y;
  uint32_T c11_f_y;
  uint32_T c11_g_y;
  uint32_T c11_mti;
  uint32_T c11_y;
  (void)chartInstance;
  for (c11_j = 0; c11_j < 2; c11_j++) {
    c11_b_j = (real_T)c11_j + 1.0;
    c11_mti = c11_mt[624] + 1U;
    if (c11_mti >= 625U) {
      for (c11_kk = 0; c11_kk < 227; c11_kk++) {
        c11_c_kk = (real_T)c11_kk + 1.0;
        c11_y = (c11_mt[(int32_T)c11_c_kk - 1] & 2147483648U) | (c11_mt[(int32_T)
          (c11_c_kk + 1.0) - 1] & 2147483647U);
        c11_b_y = c11_y;
        c11_d_y = c11_b_y;
        if ((c11_d_y & 1U) == 0U) {
          c11_d_y >>= 1U;
        } else {
          c11_d_y = c11_d_y >> 1U ^ 2567483615U;
        }

        c11_mt[(int32_T)c11_c_kk - 1] = c11_mt[(int32_T)(c11_c_kk + 397.0) - 1] ^
          c11_d_y;
      }

      for (c11_b_kk = 0; c11_b_kk < 396; c11_b_kk++) {
        c11_c_kk = (real_T)c11_b_kk + 228.0;
        c11_y = (c11_mt[(int32_T)c11_c_kk - 1] & 2147483648U) | (c11_mt[(int32_T)
          (c11_c_kk + 1.0) - 1] & 2147483647U);
        c11_f_y = c11_y;
        c11_g_y = c11_f_y;
        if ((c11_g_y & 1U) == 0U) {
          c11_g_y >>= 1U;
        } else {
          c11_g_y = c11_g_y >> 1U ^ 2567483615U;
        }

        c11_mt[(int32_T)c11_c_kk - 1] = c11_mt[(int32_T)((c11_c_kk + 1.0) -
          228.0) - 1] ^ c11_g_y;
      }

      c11_y = (c11_mt[623] & 2147483648U) | (c11_mt[0] & 2147483647U);
      c11_c_y = c11_y;
      c11_e_y = c11_c_y;
      if ((c11_e_y & 1U) == 0U) {
        c11_e_y >>= 1U;
      } else {
        c11_e_y = c11_e_y >> 1U ^ 2567483615U;
      }

      c11_mt[623] = c11_mt[396] ^ c11_e_y;
      c11_mti = 1U;
    }

    c11_y = c11_mt[(int32_T)c11_mti - 1];
    c11_mt[624] = c11_mti;
    c11_y ^= c11_y >> 11U;
    c11_y ^= c11_y << 7U & 2636928640U;
    c11_y ^= c11_y << 15U & 4022730752U;
    c11_y ^= c11_y >> 18U;
    c11_u[(int32_T)c11_b_j - 1] = c11_y;
  }
}

static real_T c11_b_genrandu(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
  *chartInstance, const emlrtStack *c11_sp, uint32_T c11_mt[625])
{
  static char_T c11_b_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i',
    'd', 'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  const mxArray *c11_b_y = NULL;
  const mxArray *c11_y = NULL;
  int32_T c11_a;
  int32_T c11_exitg1;
  int32_T c11_i;
  int32_T c11_k;
  uint32_T c11_b_mt[625];
  uint32_T c11_u[2];
  boolean_T c11_b_isvalid;
  boolean_T c11_exitg2;
  boolean_T c11_isvalid;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on: */
  /*  */
  /*  A C-program for MT19937, with initialization improved 2002/1/26. */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
  /*  */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
  /*  All rights reserved. */
  /*  */
  /*  Redistribution and use in source and binary forms, with or without */
  /*  modification, are permitted provided that the following conditions */
  /*  are met: */
  /*  */
  /*    1. Redistributions of source code must retain the above copyright */
  /*       notice, this list of conditions and the following disclaimer. */
  /*  */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer */
  /*       in the documentation and/or other materials provided with the */
  /*       distribution. */
  /*  */
  /*    3. The names of its contributors may not be used to endorse or */
  /*       promote products derived from this software without specific */
  /*       prior written permission. */
  /*  */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
  /*  */
  /* =============================   END   ================================= */
  do {
    c11_exitg1 = 0;
    c11_b_genrand_uint32_vector(chartInstance, c11_mt, c11_u);
    c11_u[0] >>= 5U;
    c11_u[1] >>= 6U;
    if ((c11_u[0] == 0U) && (c11_u[1] == 0U)) {
      for (c11_i = 0; c11_i < 625; c11_i++) {
        c11_b_mt[c11_i] = c11_mt[c11_i];
      }

      if ((c11_b_mt[624] >= 1U) && (c11_b_mt[624] < 625U)) {
        c11_isvalid = true;
      } else {
        c11_isvalid = false;
      }

      c11_b_isvalid = c11_isvalid;
      if (c11_isvalid) {
        c11_b_isvalid = false;
        c11_k = 0;
        c11_exitg2 = false;
        while ((!c11_exitg2) && (c11_k + 1 < 625)) {
          if (c11_b_mt[c11_k] == 0U) {
            c11_a = c11_k + 1;
            c11_k = c11_a;
          } else {
            c11_b_isvalid = true;
            c11_exitg2 = true;
          }
        }
      }

      if (!c11_b_isvalid) {
        c11_y = NULL;
        sf_mex_assign(&c11_y, sf_mex_create("y", c11_b_cv, 10, 0U, 1, 0U, 2, 1,
          37), false);
        c11_b_y = NULL;
        sf_mex_assign(&c11_b_y, sf_mex_create("y", c11_b_cv, 10, 0U, 1, 0U, 2, 1,
          37), false);
        sf_mex_call(c11_sp, &c11_emlrtMCI, "error", 0U, 2U, 14, c11_y, 14,
                    sf_mex_call(c11_sp, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(c11_sp, NULL, "message", 1U, 1U, 14, c11_b_y)));
      }
    } else {
      c11_exitg1 = 1;
    }
  } while (c11_exitg1 == 0);

  return 1.1102230246251565E-16 * ((real_T)c11_u[0] * 6.7108864E+7 + (real_T)
    c11_u[1]);
}

static void c11_plus(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct
                     *chartInstance, const emlrtStack *c11_sp,
                     c11_coder_array_real_T *c11_in1, c11_coder_array_real_T
                     *c11_in2)
{
  c11_coder_array_real_T c11_b_in1;
  int32_T c11_aux_0_0;
  int32_T c11_aux_1_0;
  int32_T c11_b_loop_ub;
  int32_T c11_i;
  int32_T c11_i1;
  int32_T c11_i2;
  int32_T c11_i3;
  int32_T c11_loop_ub;
  int32_T c11_stride_0_0;
  int32_T c11_stride_1_0;
  c11_array_real_T_Constructor(chartInstance, &c11_b_in1);
  if (c11_in2->size[0] == 1) {
    c11_i = c11_in1->size[0];
  } else {
    c11_i = c11_in2->size[0];
  }

  c11_array_real_T_SetSize(chartInstance, c11_sp, &c11_b_in1, &c11_v_emlrtRTEI,
    c11_i);
  c11_stride_0_0 = (c11_in1->size[0] != 1);
  c11_stride_1_0 = (c11_in2->size[0] != 1);
  c11_aux_0_0 = 0;
  c11_aux_1_0 = 0;
  if (c11_in2->size[0] == 1) {
    c11_i1 = c11_in1->size[0];
  } else {
    c11_i1 = c11_in2->size[0];
  }

  c11_loop_ub = c11_i1 - 1;
  for (c11_i2 = 0; c11_i2 <= c11_loop_ub; c11_i2++) {
    c11_b_in1.vector.data[c11_i2] = c11_in1->vector.data[c11_aux_0_0] +
      c11_in2->vector.data[c11_aux_1_0];
    c11_aux_1_0 += c11_stride_1_0;
    c11_aux_0_0 += c11_stride_0_0;
  }

  c11_array_real_T_SetSize(chartInstance, c11_sp, c11_in1, &c11_w_emlrtRTEI,
    c11_b_in1.size[0]);
  c11_b_loop_ub = c11_b_in1.size[0] - 1;
  for (c11_i3 = 0; c11_i3 <= c11_b_loop_ub; c11_i3++) {
    c11_in1->vector.data[c11_i3] = c11_b_in1.vector.data[c11_i3];
  }

  c11_array_real_T_Destructor(chartInstance, &c11_b_in1);
}

static void c11_array_real_T_SetSize
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, c11_coder_array_real_T *c11_coderArray, const
   emlrtRTEInfo *c11_srcLocation, int32_T c11_size0)
{
  real_T *c11_newData;
  int32_T c11_newCapacity;
  int32_T c11_newNumel;
  (void)chartInstance;
  c11_coderArray->size[0] = c11_size0;
  c11_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c11_coderArray->size[0], c11_srcLocation, (void *)c11_sp);
  if (c11_newNumel > c11_coderArray->vector.allocated) {
    c11_newCapacity = c11_coderArray->vector.allocated;
    if (c11_newCapacity < 16) {
      c11_newCapacity = 16;
    }

    while (c11_newCapacity < c11_newNumel) {
      if (c11_newCapacity > 1073741823) {
        c11_newCapacity = MAX_int32_T;
      } else {
        c11_newCapacity <<= 1;
      }
    }

    c11_newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)
      c11_newCapacity);
    if ((void *)c11_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c11_srcLocation, (void *)c11_sp);
    }

    if ((void *)c11_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c11_srcLocation, (void *)c11_sp);
    }

    if (c11_coderArray->vector.data != NULL) {
      memcpy(c11_newData, c11_coderArray->vector.data, sizeof(real_T)
             * (uint32_T)c11_coderArray->vector.numel);
      if (c11_coderArray->vector.owner) {
        emlrtFreeMex(c11_coderArray->vector.data);
      }
    }

    c11_coderArray->vector.data = c11_newData;
    c11_coderArray->vector.allocated = c11_newCapacity;
    c11_coderArray->vector.owner = true;
  }

  c11_coderArray->vector.numel = c11_newNumel;
}

static void c11_array_boolean_T_SetSize
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, c11_coder_array_boolean_T *c11_coderArray, const
   emlrtRTEInfo *c11_srcLocation, int32_T c11_size0)
{
  int32_T c11_newCapacity;
  int32_T c11_newNumel;
  boolean_T *c11_newData;
  (void)chartInstance;
  c11_coderArray->size[0] = c11_size0;
  c11_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c11_coderArray->size[0], c11_srcLocation, (void *)c11_sp);
  if (c11_newNumel > c11_coderArray->vector.allocated) {
    c11_newCapacity = c11_coderArray->vector.allocated;
    if (c11_newCapacity < 16) {
      c11_newCapacity = 16;
    }

    while (c11_newCapacity < c11_newNumel) {
      if (c11_newCapacity > 1073741823) {
        c11_newCapacity = MAX_int32_T;
      } else {
        c11_newCapacity <<= 1;
      }
    }

    c11_newData = (boolean_T *)emlrtMallocMex(sizeof(boolean_T) * (uint32_T)
      c11_newCapacity);
    if ((void *)c11_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c11_srcLocation, (void *)c11_sp);
    }

    if ((void *)c11_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c11_srcLocation, (void *)c11_sp);
    }

    if (c11_coderArray->vector.data != NULL) {
      memcpy(c11_newData, c11_coderArray->vector.data, sizeof(boolean_T)
             * (uint32_T)c11_coderArray->vector.numel);
      if (c11_coderArray->vector.owner) {
        emlrtFreeMex(c11_coderArray->vector.data);
      }
    }

    c11_coderArray->vector.data = c11_newData;
    c11_coderArray->vector.allocated = c11_newCapacity;
    c11_coderArray->vector.owner = true;
  }

  c11_coderArray->vector.numel = c11_newNumel;
}

static void c11_array_real_T_2D_SetSize
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance, const
   emlrtStack *c11_sp, c11_coder_array_real_T_2D *c11_coderArray, const
   emlrtRTEInfo *c11_srcLocation, int32_T c11_size0, int32_T c11_size1)
{
  real_T *c11_newData;
  int32_T c11_newCapacity;
  int32_T c11_newNumel;
  (void)chartInstance;
  c11_coderArray->size[0] = c11_size0;
  c11_coderArray->size[1] = c11_size1;
  c11_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c11_coderArray->size[0],
                       c11_srcLocation, (void *)c11_sp), (size_t)(uint32_T)
    c11_coderArray->size[1], c11_srcLocation, (void *)c11_sp);
  if (c11_newNumel > c11_coderArray->vector.allocated) {
    c11_newCapacity = c11_coderArray->vector.allocated;
    if (c11_newCapacity < 16) {
      c11_newCapacity = 16;
    }

    while (c11_newCapacity < c11_newNumel) {
      if (c11_newCapacity > 1073741823) {
        c11_newCapacity = MAX_int32_T;
      } else {
        c11_newCapacity <<= 1;
      }
    }

    c11_newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)
      c11_newCapacity);
    if ((void *)c11_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c11_srcLocation, (void *)c11_sp);
    }

    if ((void *)c11_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c11_srcLocation, (void *)c11_sp);
    }

    if (c11_coderArray->vector.data != NULL) {
      memcpy(c11_newData, c11_coderArray->vector.data, sizeof(real_T)
             * (uint32_T)c11_coderArray->vector.numel);
      if (c11_coderArray->vector.owner) {
        emlrtFreeMex(c11_coderArray->vector.data);
      }
    }

    c11_coderArray->vector.data = c11_newData;
    c11_coderArray->vector.allocated = c11_newCapacity;
    c11_coderArray->vector.owner = true;
  }

  c11_coderArray->vector.numel = c11_newNumel;
}

static void c11_array_real_T_Constructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_real_T *c11_coderArray)
{
  (void)chartInstance;
  c11_coderArray->vector.data = (real_T *)NULL;
  c11_coderArray->vector.numel = 0;
  c11_coderArray->vector.allocated = 0;
  c11_coderArray->vector.owner = true;
  c11_coderArray->size[0] = 0;
}

static void c11_array_real_T_Destructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_real_T *c11_coderArray)
{
  (void)chartInstance;
  if (c11_coderArray->vector.owner && (c11_coderArray->vector.data != (real_T *)
       NULL)) {
    emlrtFreeMex(c11_coderArray->vector.data);
  }
}

static void c11_array_real_T_2D_Constructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_real_T_2D *c11_coderArray)
{
  (void)chartInstance;
  c11_coderArray->vector.data = (real_T *)NULL;
  c11_coderArray->vector.numel = 0;
  c11_coderArray->vector.allocated = 0;
  c11_coderArray->vector.owner = true;
  c11_coderArray->size[0] = 0;
  c11_coderArray->size[1] = 0;
}

static void c11_array_boolean_T_Constructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_boolean_T *c11_coderArray)
{
  (void)chartInstance;
  c11_coderArray->vector.data = (boolean_T *)NULL;
  c11_coderArray->vector.numel = 0;
  c11_coderArray->vector.allocated = 0;
  c11_coderArray->vector.owner = true;
  c11_coderArray->size[0] = 0;
}

static void c11_array_real_T_2D_Destructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_real_T_2D *c11_coderArray)
{
  (void)chartInstance;
  if (c11_coderArray->vector.owner && (c11_coderArray->vector.data != (real_T *)
       NULL)) {
    emlrtFreeMex(c11_coderArray->vector.data);
  }
}

static void c11_array_boolean_T_Destructor
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance,
   c11_coder_array_boolean_T *c11_coderArray)
{
  (void)chartInstance;
  if (c11_coderArray->vector.owner && (c11_coderArray->vector.data != (boolean_T
        *)NULL)) {
    emlrtFreeMex(c11_coderArray->vector.data);
  }
}

static void init_dsm_address_info
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance)
{
  chartInstance->c11_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c11_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c11_s = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c11_d_hat = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c11_ABS_contDyn_model_SMC_FZL_NN_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3452252744U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1150786665U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(942943969U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(968758580U);
}

mxArray *sf_c11_ABS_contDyn_model_SMC_FZL_NN_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString("coder.internal.blas.BLASApi"));
  return(mxcell3p);
}

mxArray *sf_c11_ABS_contDyn_model_SMC_FZL_NN_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_vars");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("rawtime");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c11_ABS_contDyn_model_SMC_FZL_NN_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c11_ABS_contDyn_model_SMC_FZL_NN
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrtWL1OwzAQdqpSwYI6sLD1CUgLiJ+JFDFQCSSoGBASCm6SNgbHiRIXytYFiZGRoQOPwdhH4BF"
    "4BB6BpHahWBGRqCFpqSXLukvOzd333dVnoNQOQTgWw9lfBqAQrvPhzAE25ris8HeUD33+Q18KJ7"
    "31rEgf+EbNDFcCnYEM250aaboD2y3wuX8hZn9lZP8FrmfjbWc8+yVNtM/H2M+N2Be5bOo2pNz3Y"
    "Zx+/h1FbTx79vtagh8Lgh+RfGJbFHJfhvu8gO/xVgS8c1yObDBAwIv5njh/coI/xaEzT1faYO1j"
    "KXGZZHwg9uzM4VOyGT4a+vf4IIKo3sSwlSV8+mcMH3A+Vfgk1emCgE8kOxa1XZPZnyop43LaZbj"
    "cdzUZ/3v3CfE4FuIRyWrV8zAyIEUuCdTD6slBdVevr5ZX1xsr0PNU6rq44XZUy8EqRg3VgRTDhu"
    "pDYjbbRPV8dA2pFT3WI92KM+OHRH7ccX7c/Qk/6kI86vL5QYYEmQR+xJ3z/JFzXup1/fWS8aN7N"
    "VV1vZyAS/4LLnkQWJYZ2e2nna9aj+Fx1JOSr52EOOwJ/NwbP1990mIZOqn5GdCw3HB7O20+dE3G"
    "h5IlhQ+PCfEwhHgY8uu37hitysZWeVMfBLrZxrygz/gi45zO+XLxN3wxhXiYv8EXWtneXtuEvkC"
    "YGV9k3ItwvmjTU18C218zXNKaxvqSej/xwPuJ51k/kRV+XGepn7hA/J7o8l/dE8XhcpMlXEq8z+"
    "vLw+Ud0Sd8cg=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c11_ABS_contDyn_model_SMC_FZL_NN_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "stZ0MrJn7UX9HYlvVndU5EE";
}

static void sf_opaque_initialize_c11_ABS_contDyn_model_SMC_FZL_NN(void
  *chartInstanceVar)
{
  initialize_params_c11_ABS_contDyn_model_SMC_FZL_NN
    ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*) chartInstanceVar);
  initialize_c11_ABS_contDyn_model_SMC_FZL_NN
    ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c11_ABS_contDyn_model_SMC_FZL_NN(void
  *chartInstanceVar)
{
  enable_c11_ABS_contDyn_model_SMC_FZL_NN
    ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c11_ABS_contDyn_model_SMC_FZL_NN(void
  *chartInstanceVar)
{
  disable_c11_ABS_contDyn_model_SMC_FZL_NN
    ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c11_ABS_contDyn_model_SMC_FZL_NN(void
  *chartInstanceVar)
{
  sf_gateway_c11_ABS_contDyn_model_SMC_FZL_NN
    ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c11_ABS_contDyn_model_SMC_FZL_NN
  (SimStruct* S)
{
  return get_sim_state_c11_ABS_contDyn_model_SMC_FZL_NN
    ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c11_ABS_contDyn_model_SMC_FZL_NN(SimStruct*
  S, const mxArray *st)
{
  set_sim_state_c11_ABS_contDyn_model_SMC_FZL_NN
    ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c11_ABS_contDyn_model_SMC_FZL_NN
  (void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ABS_contDyn_model_SMC_FZL_NN_optimization_info();
    }

    mdl_cleanup_runtime_resources_c11_ABS_contDyn_model_SMC_FZL_NN
      ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c11_ABS_contDyn_model_SMC_FZL_NN(void
  *chartInstanceVar)
{
  mdl_start_c11_ABS_contDyn_model_SMC_FZL_NN
    ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo
      (((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*)chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c11_ABS_contDyn_model_SMC_FZL_NN(void
  *chartInstanceVar)
{
  mdl_terminate_c11_ABS_contDyn_model_SMC_FZL_NN
    ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c11_ABS_contDyn_model_SMC_FZL_NN(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c11_ABS_contDyn_model_SMC_FZL_NN
      ((SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c11_ABS_contDyn_model_SMC_FZL_NN_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [28] = {
    "eNrtWs9v40QUdqpuRRFUBSEtICR65MKmP5ZtK60gaX6wWTVtaNJSKq2yE/slnu147J0ZpwmnXla",
    "sBAeOHPbAgT+CY/8Ejhz5Azhw4LDcmLGdNLjZxk5Cm3ZrKU3Hyec373vfe/PGsZYoFDV5zMnXy6",
    "Smzcj3N+RrSvOPW8E40fPyz09r94Nx6U1N003ERIHWbS3+odsGNICW3Xodt2JiqWuVEEMWH8IuR",
    "RbsALeJK7BN400e0zowoLq8gGMzEcsux5ZLMD3Mu1RXlvnXJtbNsmm7xNiQF0TGNiXtV9l1XFGS",
    "FrOYgS7yAIYwme02zDxBjfNZYOIoY4J+yF0rNlccRNl1lKu86BKBHQK5FugFygWSLPAB/pYFEpA",
    "RrdgKwbzcQduWQzCi0bk2ES+DI9UhYNcx5N9tV0j2ItqV9mqYImEzjEjOIhml8IjYEpHzLEpZk9",
    "g8C0tkoeY2Gpg2FLvMtYBK/6VOInBVz9hNYKgB2zRmDirvci0vwF1dRs/BgpLlUDnoWn5U+FBYz",
    "26uKRniQ9rN6zSDCOHxsBXb2YQmEM9+Fgk0BNa3HwPMOTYq9h5iKgtiZpJL8VMXAmzGpgaOHuFm",
    "COUV3C1ZPCPAsaUkBYakuTv17oUGadLlwrYyMo2ym5sR7Z3FFqgAVkc6RK59DGEOcsKermLaNTB",
    "HNaLQkiXheRn5CkCHhmq87tLskc0OJcdxi+wpVyoT4qHBaEAWBHgFIyfVvYeIG3HOFpcVTsljl8",
    "uKFc+uxKr8GQqsI90EQ60nmEARuLoAj1yf5TqSlt42sWhngesMO1EzyeVgyIVEsVRpO7BLD6l9R",
    "PPMtspBR3COrgBk1UCMymVhQy5LrJ2Xk482awZPK0pZw7RnFhIE1ZQ2vgQqVxblq1oJkS6zKkdl",
    "6yYnNAq2jL+VSzvlmAvZTrVzXg4YXj/6fiJeP/pOMF7p5lKBV5iMFJLLMJWdUrrmNXtQwRZ4J8p",
    "I9hT+MDiU3UXt1O7s1Pl2p+R/iSFx2oi4Ug9uug8/Cz24+WCsLy1V0xvlqm5TkW3TqqWalGq5mK",
    "nmDzarW1vh+bwVgfepPn6EcdoZ3CnfnfdPevCJPna1nvdR4pTqwb0dsjMdws0E3D384dE/975bv",
    "vv9n84vf7fuvzuKfefDeLqeC8Yfdfq07krWPFPs1XcfDNDF7ZAubnt17WCxyB7S1d399QffkOYe",
    "NXY/y+W86518cP5850Lz7dWfkIXOq5tMLxjBnkuNkevvBRR2rWe+MwP4mO3Rk6b99cVo+PdSYXw",
    "/vm6F+FJjo2oiEdLv8POYT42GP6vrfn7MhvxQ44oJAgW+dK7zmxZPn1PBWGGIhjWnz3z6+TMV8m",
    "e+48zPhynv/YSMhZerHB9EHHPi4rNg+vFJ4dc+PphiUa0T1Jik+Jwc+PHRHl2r+Ayq0zOh+KixB",
    "cK0DR+/n7jkuOwf+3F5fpwax7r3fAAfX4X4UONk2nEI1r1enCeL6cpmeqO6s7y4fLd2BzlOUtg2",
    "qdmtJFgkSXAt6ffwSYaoIXeYSUe203IDpD6uqnN3rBt9jFEfzwJ9PLsQfeyE+NgZvz5oRyBXQR/",
    "9+jzW0+ddel3/44mvj+PDa1XXFwfEZfo/cZnWuNy5e/ucy87X1As/HqUXY8nX1gAesiF9ZkfPV0",
    "YbfoZe1fz07scFePOy9XBs+HpYgLHo4acBfOghPvTx1++qpTeW7q0trlY9ousuCQr6jV7G0acHe",
    "nl8MXoxQnwY/4dexNL6+soqYiHB3OhlHPdFAr2krk994SZb0W3auI715dL3Ez8G+4lfb/YTk6KP",
    "5iTtJx7j4D7Rk9fqPlG/uBxNUlwWgn3eyXjjclV+15x03Dh5ifL7auKCcdoF40b1L+7vxlf9++f",
    "dL9FC35+fYD/Oq09xnh+YNL9+j7l+fByMP+8+45cxMTH6PGUUfLwJqN7v02ui75cx+es8z5BT/A",
    "UPKR+spCkibY79R6Q6p0tMPR/b/YgB4v2f3bqMdWiU/mW3kv90bYT17F/GFnAe",
    ""
  };

  static char newstr [2013] = "";
  newstr[0] = '\0';
  for (i = 0; i < 28; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c11_ABS_contDyn_model_SMC_FZL_NN(SimStruct *S)
{
  const char* newstr = sf_c11_ABS_contDyn_model_SMC_FZL_NN_get_post_codegen_info
    ();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(4183657546U));
  ssSetChecksum1(S,(875726646U));
  ssSetChecksum2(S,(2758864011U));
  ssSetChecksum3(S,(305953012U));
}

static void mdlRTW_c11_ABS_contDyn_model_SMC_FZL_NN(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c11_ABS_contDyn_model_SMC_FZL_NN(SimStruct *
  S)
{
  SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *chartInstance;
  chartInstance = (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct *)utMalloc
    (sizeof(SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc11_ABS_contDyn_model_SMC_FZL_NNInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S)> 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c11_ABS_contDyn_model_SMC_FZL_NN;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c11_ABS_contDyn_model_SMC_FZL_NN(chartInstance);
}

void c11_ABS_contDyn_model_SMC_FZL_NN_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c11_ABS_contDyn_model_SMC_FZL_NN(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c11_ABS_contDyn_model_SMC_FZL_NN(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c11_ABS_contDyn_model_SMC_FZL_NN(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c11_ABS_contDyn_model_SMC_FZL_NN_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
