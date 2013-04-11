#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 121 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 264
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;






static __inline int16_t __nesc_ntoh_int16(const void * source)  ;
#line 288
static __inline int16_t __nesc_hton_int16(void * target, int16_t value)  ;
#line 385
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 112 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x40284978, const void *arg_0x40284b10, size_t arg_0x40284ca8);



extern void *memset(void *arg_0x40286c70, int arg_0x40286dc8, size_t arg_0x4028b010);
# 71 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x402985a0, const void *arg_0x40298738);
# 23 "/opt/tinyos-2.1.0/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 40 "/opt/tinyos-2.1.0/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 57 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 52
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 210 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.1.0/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/tinyos-2.1.0/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
# 34 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4260 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4261 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4262 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4263 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4264 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4265 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4266 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4269 {

  uint8_t flat;
  struct __nesc_unnamed4270 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4277 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4280 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.1.0/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4289 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4290 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4291 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4292 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 8
};
# 55 "/opt/tinyos-2.1.0/tos/platforms/mica2/hardware.h"
enum __nesc_unnamed4295 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7
};

enum __nesc_unnamed4296 {
  PLATFORM_BAUDRATE = 57600L
};
# 43 "/usr/bin/../lib/gcc/avr/4.1.2/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 105
typedef __gnuc_va_list va_list;
# 245 "/opt/tinyos-2.1.0/tos/lib/printf/avr_stdio.h"
struct __file {
  char *buf;
  unsigned char unget;
  uint8_t flags;
#line 264
  int size;
  int len;
  int (*put)(char arg_0x40360e08, struct __file *arg_0x4035f010);
  int (*get)(struct __file *arg_0x4035f400);
  void *udata;
};
#line 408
extern struct __file *( __iob)[];
#line 420
struct __file;
#line 639
extern int printf(const char * __fmt, ...);
# 6 "/opt/tinyos-2.1.0/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4297 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4298 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Msg.h"
#line 6
typedef nx_struct CC1KHeader {
  nx_am_addr_t dest;
  nx_am_addr_t source;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) cc1000_header_t;



#line 14
typedef nx_struct CC1KFooter {
  nxle_uint16_t crc;
} __attribute__((packed)) cc1000_footer_t;










#line 18
typedef enum __nesc_unnamed4299 {
  CC1000_ACK_BIT = 0x1, 
  CC1000_WHITE_BIT = 0x2, 





  CC1000_WHITE_BIT_THRESH = 60
} CC1KMetadataBits;







#line 29
typedef nx_struct CC1KMetadata {
  nx_int16_t strength_or_preamble;
  nx_uint8_t metadataBits;
  nx_uint16_t time;
  nx_uint8_t sendSecurityMode;
  nx_uint8_t receiveSecurityMode;
} __attribute__((packed)) cc1000_metadata_t;
# 72 "/opt/tinyos-2.1.0/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4300 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4301 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4302 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 49 "/opt/tinyos-2.1.0/tos/platforms/mica2/platform_message.h"
#line 46
typedef union message_header {
  cc1000_header_t cc1k;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc1000_footer_t cc1k;
} message_footer_t;




#line 55
typedef union message_metadata {
  cc1000_metadata_t cc1k;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/opt/tinyos-2.1.0/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 52 "/opt/tinyos-2.1.0/tos/lib/printf/printf.h"
int printfflush();




#line 55
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4303 {
  AM_PRINTF_MSG = 100
};
# 14 "proj1.h"
enum __nesc_unnamed4304 {
  N_NODES = 5, 
  MAX_X = 10, 
  M = 10, 
  DUTY_CYCLE_RANGE = 3000, 
  MIN_PERIOD = 3000, 
  DUTY_CYCLE_INT = 4, 

  DUTY_CYCLE = 3, 


  PKT_RATE_RANGE = 100, 
  MIN_PKT_RATE = 10, 
  QUERY_INT = 100, 

  Q_THRESHOLD = 10, 


  PKT_GEN_INT = 10, 



  L_MSG_BUFFSIZE = 1, 
  Q_LEN = 100, 
  AM_PROJ_1 = 0x10, 





  QUERY_Q_CMD = 0x10, 

  QUERY_Q_RSP = 0x7F, 

  PACKET_MSG = 0x20
};
#line 78
#line 54
typedef nx_struct __nesc_unnamed4305 {
  nx_uint16_t period;
  nx_uint16_t query_period;
  nx_uint8_t pkt_rate;

  nx_am_addr_t id;
  nx_am_group_t group;
  nx_uint8_t not_duty_cycle;

  nx_uint16_t period_count;
  nx_uint16_t x_cnt;
  nx_uint16_t tTimer_cnt;
  nx_uint16_t qTimer_cnt;
  nx_uint16_t pktTimer_cnt;
  nx_uint16_t send_cnt;
  nx_uint16_t q_cmd_rcv_cnt;
  nx_uint16_t q_rsp_rcv_cnt;
  nx_uint16_t pkt_rcv_cnt;
  nx_uint16_t dflt_rcv_cnt;
  nx_uint16_t rcv_cnt;
  nx_uint16_t send_busy_err;
  nx_uint16_t send_fail_err;
  nx_uint16_t q_full_err;
  nx_uint8_t send_busy;
} __attribute__((packed)) state_t;








#line 81
typedef nx_struct __nesc_unnamed4306 {
  nx_uint8_t type;
  nx_am_addr_t src_addr;
  nx_am_addr_t dst_addr;
  nx_uint16_t ts;
  nx_uint8_t buff[L_MSG_BUFFSIZE];
} __attribute__((packed)) lmsg_t;
#line 99
#line 92
typedef nx_struct __nesc_unnamed4307 {
  nx_uint8_t full;
  nx_uint8_t len;
  nx_uint8_t size;
  nx_uint16_t load_ts[Q_LEN];

  lmsg_t buff[Q_LEN];
} __attribute__((packed)) msg_q_t;
# 32 "/opt/tinyos-2.1.0/tos/types/Leds.h"
enum __nesc_unnamed4308 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 54 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Const.h"
enum __nesc_unnamed4309 {
  CC1K_MAIN = 0x00, 
  CC1K_FREQ_2A = 0x01, 
  CC1K_FREQ_1A = 0x02, 
  CC1K_FREQ_0A = 0x03, 
  CC1K_FREQ_2B = 0x04, 
  CC1K_FREQ_1B = 0x05, 
  CC1K_FREQ_0B = 0x06, 
  CC1K_FSEP1 = 0x07, 
  CC1K_FSEP0 = 0x08, 
  CC1K_CURRENT = 0x09, 
  CC1K_FRONT_END = 0x0A, 
  CC1K_PA_POW = 0x0B, 
  CC1K_PLL = 0x0C, 
  CC1K_LOCK = 0x0D, 
  CC1K_CAL = 0x0E, 
  CC1K_MODEM2 = 0x0F, 
  CC1K_MODEM1 = 0x10, 
  CC1K_MODEM0 = 0x11, 
  CC1K_MATCH = 0x12, 
  CC1K_FSCTRL = 0x13, 
  CC1K_FSHAPE7 = 0x14, 
  CC1K_FSHAPE6 = 0x15, 
  CC1K_FSHAPE5 = 0x16, 
  CC1K_FSHAPE4 = 0x17, 
  CC1K_FSHAPE3 = 0x18, 
  CC1K_FSHAPE2 = 0x19, 
  CC1K_FSHAPE1 = 0x1A, 
  CC1K_FSDELAY = 0x1B, 
  CC1K_PRESCALER = 0x1C, 
  CC1K_TEST6 = 0x40, 
  CC1K_TEST5 = 0x41, 
  CC1K_TEST4 = 0x42, 
  CC1K_TEST3 = 0x43, 
  CC1K_TEST2 = 0x44, 
  CC1K_TEST1 = 0x45, 
  CC1K_TEST0 = 0x46, 


  CC1K_RXTX = 7, 
  CC1K_F_REG = 6, 
  CC1K_RX_PD = 5, 
  CC1K_TX_PD = 4, 
  CC1K_FS_PD = 3, 
  CC1K_CORE_PD = 2, 
  CC1K_BIAS_PD = 1, 
  CC1K_RESET_N = 0, 


  CC1K_VCO_CURRENT = 4, 
  CC1K_LO_DRIVE = 2, 
  CC1K_PA_DRIVE = 0, 


  CC1K_BUF_CURRENT = 5, 
  CC1K_LNA_CURRENT = 3, 
  CC1K_IF_RSSI = 1, 
  CC1K_XOSC_BYPASS = 0, 


  CC1K_PA_HIGHPOWER = 4, 
  CC1K_PA_LOWPOWER = 0, 


  CC1K_EXT_FILTER = 7, 
  CC1K_REFDIV = 3, 
  CC1K_ALARM_DISABLE = 2, 
  CC1K_ALARM_H = 1, 
  CC1K_ALARM_L = 0, 


  CC1K_LOCK_SELECT = 4, 
  CC1K_PLL_LOCK_ACCURACY = 3, 
  CC1K_PLL_LOCK_LENGTH = 2, 
  CC1K_LOCK_INSTANT = 1, 
  CC1K_LOCK_CONTINUOUS = 0, 


  CC1K_CAL_START = 7, 
  CC1K_CAL_DUAL = 6, 
  CC1K_CAL_WAIT = 5, 
  CC1K_CAL_CURRENT = 4, 
  CC1K_CAL_COMPLETE = 3, 
  CC1K_CAL_ITERATE = 0, 


  CC1K_PEAKDETECT = 7, 
  CC1K_PEAK_LEVEL_OFFSET = 0, 


  CC1K_MLIMIT = 5, 
  CC1K_LOCK_AVG_IN = 4, 
  CC1K_LOCK_AVG_MODE = 3, 
  CC1K_SETTLING = 1, 
  CC1K_MODEM_RESET_N = 0, 


  CC1K_BAUDRATE = 4, 
  CC1K_DATA_FORMAT = 2, 
  CC1K_XOSC_FREQ = 0, 


  CC1K_RX_MATCH = 4, 
  CC1K_TX_MATCH = 0, 


  CC1K_DITHER1 = 3, 
  CC1K_DITHER0 = 2, 
  CC1K_SHAPE = 1, 
  CC1K_FS_RESET_N = 0, 


  CC1K_PRE_SWING = 6, 
  CC1K_PRE_CURRENT = 4, 
  CC1K_IF_INPUT = 3, 
  CC1K_IF_FRONT = 2, 


  CC1K_LOOPFILTER_TP1 = 7, 
  CC1K_LOOPFILTER_TP2 = 6, 
  CC1K_CHP_OVERRIDE = 5, 
  CC1K_CHP_CO = 0, 


  CC1K_CHP_DISABLE = 5, 
  CC1K_VCO_OVERRIDE = 4, 
  CC1K_VCO_AO = 0, 


  CC1K_BREAK_LOOP = 4, 
  CC1K_CAL_DAC_OPEN = 0, 
#line 202
  CC1K_433_002_MHZ = 0x00, 
  CC1K_915_998_MHZ = 0x01, 
  CC1K_434_845_MHZ = 0x02, 
  CC1K_914_077_MHZ = 0x03, 
  CC1K_315_178_MHZ = 0x04, 


  CC1K_SquelchInit = 0x120, 
  CC1K_SquelchTableSize = 9, 
  CC1K_MaxRSSISamples = 5, 
  CC1K_Settling = 1, 
  CC1K_ValidPrecursor = 2, 
  CC1K_SquelchIntervalFast = 128, 
  CC1K_SquelchIntervalSlow = 2560, 
  CC1K_SquelchCount = 30, 
  CC1K_SquelchBuffer = 12, 

  CC1K_LPL_STATES = 9, 

  CC1K_LPL_PACKET_TIME = 16, 

  CC1K_LPL_CHECK_TIME = 16, 



  CC1K_LPL_MIN_INTERVAL = 5, 

  CC1K_LPL_MAX_INTERVAL = 10000
};
#line 248
static const_uint8_t CC1K_Params[6][20] = { 

{ 
0x31, 

0x58, 0x00, 0x00, 

0x57, 0xf6, 0x85, 

0X03, 0x55, (

4 << CC1K_VCO_CURRENT) | (1 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

12 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

0 << CC1K_PEAKDETECT) | (28 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x7c, 0x00, 0x00, 

0x7b, 0xf9, 0xae, 

0x02, 0x38, (

8 << CC1K_VCO_CURRENT) | (3 << CC1K_LO_DRIVE), ((


1 << CC1K_BUF_CURRENT) | (2 << CC1K_LNA_CURRENT)) | (1 << CC1K_IF_RSSI), (


0x8 << CC1K_PA_HIGHPOWER) | (0x0 << CC1K_PA_LOWPOWER), 


8 << CC1K_REFDIV, 


0x1 << CC1K_LOCK_SELECT, (


1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (


1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((


3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((


5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (


0x1 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

15 << CC1K_VCO_CURRENT) | (3 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x51, 0x00, 0x00, 

0x50, 0xf7, 0x4F, 

0X03, 0x0E, (

4 << CC1K_VCO_CURRENT) | (1 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

11 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 




{ 
0x31, 

0x5c, 0xe0, 0x00, 

0x5c, 0xdb, 0x42, 

0x01, 0xAA, (

8 << CC1K_VCO_CURRENT) | (3 << CC1K_LO_DRIVE), ((


1 << CC1K_BUF_CURRENT) | (2 << CC1K_LNA_CURRENT)) | (1 << CC1K_IF_RSSI), (


0x8 << CC1K_PA_HIGHPOWER) | (0x0 << CC1K_PA_LOWPOWER), 


6 << CC1K_REFDIV, 


0x1 << CC1K_LOCK_SELECT, (


1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (


1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((


3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((


5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (


0x1 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

15 << CC1K_VCO_CURRENT) | (3 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x45, 0x60, 0x00, 

0x45, 0x55, 0xBB, 

0X03, 0x9C, (

8 << CC1K_VCO_CURRENT) | (0 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

13 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (0 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x58, 0x00, 0x00, 

0x57, 0xf6, 0x85, 

0X03, 0x55, (

8 << CC1K_VCO_CURRENT) | (4 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

12 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((
5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) } };
# 39 "/opt/tinyos-2.1.0/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 32 "/opt/tinyos-2.1.0/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4310 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 66
#line 54
typedef union __nesc_unnamed4311 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4312 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4313 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4314 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;
# 78 "/opt/tinyos-2.1.0/tos/lib/printf/PrintfP.nc"
static int uart_putchar(char c, struct __file *stream);
static struct __file atm128_stdout = 
{ .put = (int (*)(char c, struct __file *stream))uart_putchar, .get = (void *)0, .flags = 0x0002, .udata = 0 };
# 33 "/opt/tinyos-2.1.0/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
typedef TMilli proj1C$LclTime$precision_tag;
typedef uint16_t proj1C$Read$val_t;
typedef TMilli proj1C$PeriodTimer$precision_tag;
typedef uint16_t proj1C$Seed$parameter;
typedef TMilli proj1C$QTimer$precision_tag;
typedef TMilli proj1C$PktTimer$precision_tag;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$size_type;
typedef uint16_t HplAtm128Timer3P$CompareA$size_type;
typedef uint16_t HplAtm128Timer3P$Capture$size_type;
typedef uint16_t HplAtm128Timer3P$CompareB$size_type;
typedef uint16_t HplAtm128Timer3P$CompareC$size_type;
typedef uint16_t HplAtm128Timer3P$Timer$timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC$0$timer_size /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC$0$frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC$0$timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$0$frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$0$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$0$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$size_type;
enum SerialAMQueueP$__nesc_unnamed4315 {
  SerialAMQueueP$NUM_CLIENTS = 1U
};
typedef uint8_t /*PrintfC.QueueC*/QueueC$0$queue_t;
typedef /*PrintfC.QueueC*/QueueC$0$queue_t /*PrintfC.QueueC*/QueueC$0$Queue$t;
typedef uint8_t PrintfP$Queue$t;
typedef TMicro CC1000CsmaP$BusyWait$precision_tag;
typedef uint16_t CC1000CsmaP$BusyWait$size_type;
typedef uint16_t CC1000CsmaP$RssiNoiseFloor$val_t;
typedef uint16_t CC1000CsmaP$RssiCheckChannel$val_t;
typedef TMilli CC1000CsmaP$WakeupTimer$precision_tag;
typedef uint16_t CC1000CsmaP$RssiPulseCheck$val_t;
typedef uint16_t CC1000SendReceiveP$RssiRx$val_t;
typedef uint16_t CC1000RssiP$ActualRssi$val_t;
typedef uint16_t CC1000RssiP$Rssi$val_t;
typedef TMicro CC1000ControlP$BusyWait$precision_tag;
typedef uint16_t CC1000ControlP$BusyWait$size_type;
typedef uint16_t AdcP$Read$val_t;
typedef uint16_t AdcP$ReadNow$val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t;
enum /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$__nesc_unnamed4316 {
  AdcReadNowClientC$0$ID = 0U, AdcReadNowClientC$0$HAL_ID = 0U
};
typedef uint16_t RandomMlcgC$SeedInit$parameter;
enum HilTimerMilliC$__nesc_unnamed4317 {
  HilTimerMilliC$TIMER_COUNT = 5U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef uint8_t HplAtm128Timer0AsyncP$Timer$timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef TMicro BusyWaitMicroC$BusyWait$precision_tag;
typedef uint16_t BusyWaitMicroC$BusyWait$size_type;
enum /*proj1AppC.Sensor.Sensor.AdcReadClientC*/AdcReadClientC$0$__nesc_unnamed4318 {
  AdcReadClientC$0$ID = 1U, AdcReadClientC$0$HAL_ID = 1U
};
enum AMQueueP$__nesc_unnamed4319 {
  AMQueueP$NUM_CLIENTS = 1U
};
# 49 "/opt/tinyos-2.1.0/tos/interfaces/Boot.nc"
static void proj1C$Boot$booted(void );
# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void proj1C$LclTime$fired(void );
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void proj1C$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static void proj1C$RadioControl$startDone(error_t error);
#line 117
static void proj1C$RadioControl$stopDone(error_t error);
# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
static void proj1C$Read$readDone(error_t result, proj1C$Read$val_t val);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



proj1C$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void proj1C$PeriodTimer$fired(void );
#line 72
static void proj1C$QTimer$fired(void );
#line 72
static void proj1C$PktTimer$fired(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 51
static error_t MotePlatformP$PlatformInit$init(void );
# 32 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t HplCC1000P$RssiConfig$getRefVoltage(void );
#line 25
static uint8_t HplCC1000P$RssiConfig$getChannel(void );
#line 39
static uint8_t HplCC1000P$RssiConfig$getPrescaler(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t HplCC1000P$PlatformInit$init(void );
# 52 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000.nc"
static void HplCC1000P$HplCC1000$init(void );
#line 66
static uint8_t HplCC1000P$HplCC1000$read(uint8_t addr);
#line 59
static void HplCC1000P$HplCC1000$write(uint8_t addr, uint8_t data);
# 74 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
static void HplCC1000SpiP$HplCC1000Spi$initSlave(void );
#line 69
static void HplCC1000SpiP$HplCC1000Spi$disableIntr(void );
#line 45
static void HplCC1000SpiP$HplCC1000Spi$writeByte(uint8_t data);
#line 64
static void HplCC1000SpiP$HplCC1000Spi$enableIntr(void );
#line 79
static void HplCC1000SpiP$HplCC1000Spi$txMode(void );




static void HplCC1000SpiP$HplCC1000Spi$rxMode(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t HplCC1000SpiP$PlatformInit$init(void );
# 31 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput(void );

static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$get(void );


static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 60 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
#line 53
static uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4033ce28);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4033ce28);
# 46 "/opt/tinyos-2.1.0/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP$Scheduler$init(void );
#line 61
static void SchedulerBasicP$Scheduler$taskLoop(void );
#line 54
static bool SchedulerBasicP$Scheduler$runNextTask(void );
# 59 "/opt/tinyos-2.1.0/tos/interfaces/McuSleep.nc"
static void McuSleepC$McuSleep$sleep(void );
# 44 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerState.nc"
static void McuSleepC$McuPowerState$update(void );
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(
# 36 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40597620, 
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void );
#line 83
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(
# 37 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x405a3010, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(
#line 63
message_t * amsg);
#line 92
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 83 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static error_t SerialP$SplitControl$start(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void SerialP$stopDoneTask$runTask(void );
#line 64
static void SerialP$RunTx$runTask(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t SerialP$Init$init(void );
# 43 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFlush.nc"
static void SerialP$SerialFlush$flushDone(void );
#line 38
static void SerialP$SerialFlush$default$flush(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void SerialP$startDoneTask$runTask(void );
# 83 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFrameComm.nc"
static void SerialP$SerialFrameComm$dataReceived(uint8_t data);





static void SerialP$SerialFrameComm$putDone(void );
#line 74
static void SerialP$SerialFrameComm$delimiterReceived(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void SerialP$defaultSerialFlushTask$runTask(void );
# 60 "/opt/tinyos-2.1.0/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP$SendBytePacket$completeSend(void );
#line 51
static error_t SerialP$SendBytePacket$startSend(uint8_t first_byte);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(
# 40 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4066c560, 
# 56 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(
# 40 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4066c560, 
# 85 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void );
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(
# 39 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4065be50, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(
# 43 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4066a088, 
# 31 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(
# 43 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4066a088);
# 23 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(
# 43 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4066a088, 
# 23 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 70 "/opt/tinyos-2.1.0/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);
# 51 "/opt/tinyos-2.1.0/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
# 79 "/opt/tinyos-2.1.0/tos/interfaces/UartStream.nc"
static void HdlcTranslateC$UartStream$receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC$UartStream$receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC$UartStream$sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 45 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void );
#line 68
static void HdlcTranslateC$SerialFrameComm$resetReceive(void );
#line 54
static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void );
# 48 "/opt/tinyos-2.1.0/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(
#line 44
uint8_t * buf, 



uint16_t len);
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void );
# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t HplAtm128UartP$Uart0Init$init(void );
# 42 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP$HplUart0$enableRxIntr(void );
#line 40
static error_t HplAtm128UartP$HplUart0$enableTxIntr(void );
static error_t HplAtm128UartP$HplUart0$disableTxIntr(void );

static error_t HplAtm128UartP$HplUart0$disableRxIntr(void );


static void HplAtm128UartP$HplUart0$tx(uint8_t data);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t HplAtm128UartP$Uart1Init$init(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data);
#line 47
static void HplAtm128UartP$HplUart1$default$txDone(void );
# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP$Uart0RxControl$start(void );









static error_t HplAtm128UartP$Uart0RxControl$stop(void );
#line 74
static error_t HplAtm128UartP$Uart0TxControl$start(void );









static error_t HplAtm128UartP$Uart0TxControl$stop(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareA$default$fired(void );
# 51 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P$Capture$default$captured(HplAtm128Timer3P$Capture$size_type t);
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareB$default$fired(void );
#line 49
static void HplAtm128Timer3P$CompareC$default$fired(void );
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer3P$Timer$timer_size HplAtm128Timer3P$Timer$get(void );
#line 95
static void HplAtm128Timer3P$Timer$setScale(uint8_t scale);
#line 58
static void HplAtm128Timer3P$Timer$set(HplAtm128Timer3P$Timer$timer_size t);










static void HplAtm128Timer3P$Timer$start(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow(void );
#line 61
static void /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow(void );
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void );
# 31 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP$Info$offset(void );







static uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40804490, 
# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
uint8_t arg_0x408059d8, 
# 56 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
uint8_t arg_0x408059d8, 
# 85 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 64
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 73 "/opt/tinyos-2.1.0/tos/interfaces/Queue.nc"
static 
#line 71
/*PrintfC.QueueC*/QueueC$0$Queue$t  

/*PrintfC.QueueC*/QueueC$0$Queue$head(void );
#line 90
static error_t /*PrintfC.QueueC*/QueueC$0$Queue$enqueue(
#line 86
/*PrintfC.QueueC*/QueueC$0$Queue$t  newVal);
#line 65
static uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$maxSize(void );
#line 81
static 
#line 79
/*PrintfC.QueueC*/QueueC$0$Queue$t  

/*PrintfC.QueueC*/QueueC$0$Queue$dequeue(void );
#line 50
static bool /*PrintfC.QueueC*/QueueC$0$Queue$empty(void );







static uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$size(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static void PrintfP$SerialControl$startDone(error_t error);
#line 117
static void PrintfP$SerialControl$stopDone(error_t error);
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void PrintfP$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void PrintfP$retrySend$runTask(void );
# 49 "/opt/tinyos-2.1.0/tos/interfaces/Boot.nc"
static void PrintfP$MainBoot$booted(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Toggle(void );
#line 72
static void LedsP$Leds$led1Toggle(void );
#line 89
static void LedsP$Leds$led2Toggle(void );
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void CC1000ActiveMessageP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC1000ActiveMessageP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t CC1000ActiveMessageP$AMSend$send(
# 40 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x40894068, 
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

CC1000ActiveMessageP$AMSend$getPayload(
# 40 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x40894068, 
# 121 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC1000ActiveMessageP$Snoop$default$receive(
# 42 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x40893108, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



CC1000ActiveMessageP$Receive$default$receive(
# 41 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x40894a28, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
static am_addr_t CC1000ActiveMessageP$AMPacket$address(void );









static am_addr_t CC1000ActiveMessageP$AMPacket$destination(
#line 63
message_t * amsg);
#line 92
static void CC1000ActiveMessageP$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t CC1000ActiveMessageP$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void CC1000ActiveMessageP$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool CC1000ActiveMessageP$AMPacket$isForMe(
#line 122
message_t * amsg);
# 83 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static error_t CC1000CsmaP$SplitControl$start(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP$setWakeupTask$runTask(void );
#line 64
static void CC1000CsmaP$startStopDone$runTask(void );
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP$RssiNoiseFloor$readDone(error_t result, CC1000CsmaP$RssiNoiseFloor$val_t val);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t CC1000CsmaP$Init$init(void );
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP$RssiCheckChannel$readDone(error_t result, CC1000CsmaP$RssiCheckChannel$val_t val);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP$sleepCheck$runTask(void );
# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void CC1000CsmaP$WakeupTimer$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP$adjustSquelch$runTask(void );
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP$RssiPulseCheck$readDone(error_t result, CC1000CsmaP$RssiPulseCheck$val_t val);
# 45 "/opt/tinyos-2.1.0/tos/interfaces/CsmaBackoff.nc"
static uint16_t CC1000CsmaP$CsmaBackoff$default$congestion(
#line 42
message_t * m);
#line 37
static uint16_t CC1000CsmaP$CsmaBackoff$default$initial(
#line 34
message_t * m);
# 25 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
static void CC1000CsmaP$ByteRadio$rts(message_t * msg);
#line 95
static void CC1000CsmaP$ByteRadio$rxDone(void );
#line 74
static void CC1000CsmaP$ByteRadio$idleByte(bool preamble);
#line 44
static void CC1000CsmaP$ByteRadio$sendDone(void );
#line 90
static void CC1000CsmaP$ByteRadio$rx(void );
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
static uint8_t CC1000SendReceiveP$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


CC1000SendReceiveP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 83
static void CC1000SendReceiveP$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 92 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
static void CC1000SendReceiveP$HplCC1000Spi$dataReady(uint8_t data);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t CC1000SendReceiveP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t CC1000SendReceiveP$Init$init(void );
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static void CC1000SendReceiveP$RssiRx$readDone(error_t result, CC1000SendReceiveP$RssiRx$val_t val);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void CC1000SendReceiveP$signalPacketSent$runTask(void );
#line 64
static void CC1000SendReceiveP$signalPacketReceived$runTask(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
static void CC1000SendReceiveP$ByteRadio$listen(void );
#line 85
static bool CC1000SendReceiveP$ByteRadio$syncing(void );
#line 32
static void CC1000SendReceiveP$ByteRadio$cts(void );
#line 50
static void CC1000SendReceiveP$ByteRadio$setPreambleLength(uint16_t bytes);
#line 66
static void CC1000SendReceiveP$ByteRadio$off(void );
#line 39
static message_t *CC1000SendReceiveP$ByteRadio$getTxMessage(void );
# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
static error_t CC1000SendReceiveP$StdControl$start(void );
# 40 "/opt/tinyos-2.1.0/tos/interfaces/RadioTimeStamping.nc"
static void CC1000SendReceiveP$RadioTimeStamping$default$transmittedSFD(uint16_t time, 
#line 38
message_t * p_msg);
#line 51
static void CC1000SendReceiveP$RadioTimeStamping$default$receivedSFD(uint16_t time);
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static void CC1000RssiP$ActualRssi$readDone(error_t result, CC1000RssiP$ActualRssi$val_t val);
# 48 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
static void CC1000RssiP$cancel(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void CC1000RssiP$Resource$granted(void );
# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static error_t CC1000RssiP$Rssi$read(
# 47 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x409c3278);
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static void CC1000RssiP$Rssi$default$readDone(
# 47 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x409c3278, 
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
error_t result, CC1000RssiP$Rssi$val_t val);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t CC1000SquelchP$Init$init(void );
# 46 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000SquelchP$CC1000Squelch$get(void );






static bool CC1000SquelchP$CC1000Squelch$settled(void );
#line 40
static void CC1000SquelchP$CC1000Squelch$adjust(uint16_t data);
# 49 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
static void CC1000ControlP$CC1000Control$tunePreset(uint8_t freq);
#line 93
static void CC1000ControlP$CC1000Control$biasOn(void );
#line 39
static void CC1000ControlP$CC1000Control$init(void );
#line 85
static void CC1000ControlP$CC1000Control$coreOn(void );
#line 73
static void CC1000ControlP$CC1000Control$txMode(void );
#line 136
static bool CC1000ControlP$CC1000Control$getLOStatus(void );
#line 78
static void CC1000ControlP$CC1000Control$rxMode(void );
#line 68
static void CC1000ControlP$CC1000Control$off(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t Atm128AdcP$Init$init(void );
# 110 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 147 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
# 74 "/opt/tinyos-2.1.0/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP$AsyncStdControl$start(void );









static error_t Atm128AdcP$AsyncStdControl$stop(void );
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void );
#line 73
static void HplAtm128AdcP$HplAtm128Adc$enableAdc(void );
#line 49
static void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t admux);
#line 141
static bool HplAtm128AdcP$HplAtm128Adc$cancel(void );
#line 77
static void HplAtm128AdcP$HplAtm128Adc$disableAdc(void );








static void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void );
#line 60
static void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t adcsra);
#line 55
static Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void );










static uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void );
# 69 "/opt/tinyos-2.1.0/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void );
# 43 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a8a230);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(
# 55 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a8a230);
# 55 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a885e0);
# 49 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a885e0);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a8b7d8);
# 87 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$immediateRequest(
# 54 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a8b7d8);
# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a8b7d8);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a8b7d8);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
# 52 "/opt/tinyos-2.1.0/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 73 "/opt/tinyos-2.1.0/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void );
#line 81
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested(void );
# 55 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
static error_t AdcP$Read$read(
# 48 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae40c8);
# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static error_t AdcP$ReadNow$read(
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae3088);
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static void AdcP$ReadNow$default$readDone(
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae3088, 
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
error_t result, AdcP$ReadNow$val_t val);
# 32 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(
# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae25c0);
# 25 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getChannel(
# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae25c0);
# 39 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(
# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae25c0);
# 72 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void AdcP$acquiredData$runTask(void );
# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(
# 24 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40af20c8, 
# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(
# 26 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40af00e8, 
# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t val);
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(
# 27 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40aef010);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(
# 27 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40aef010);
# 41 "/opt/tinyos-2.1.0/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 35
static uint32_t RandomMlcgC$Random$rand32(void );
# 53 "/opt/tinyos-2.1.0/tos/interfaces/ParameterInit.nc"
static error_t RandomMlcgC$SeedInit$init(RandomMlcgC$SeedInit$parameter param);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 98 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t control);
# 54 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void );
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP$Timer$timer_size HplAtm128Timer0AsyncP$Timer$get(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 125 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 125
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(
# 37 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40bcd9f0);
# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40bcd9f0);
# 81 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(
# 37 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40bcd9f0);
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40bcd9f0, 
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40bcd9f0, 
# 62 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40bcd9f0);
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 44 "/opt/tinyos-2.1.0/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/opt/tinyos-2.1.0/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );




static am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
# 55 "/opt/tinyos-2.1.0/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC$BusyWait$wait(BusyWaitMicroC$BusyWait$size_type dt);
# 32 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t VoltageP$Atm128AdcConfig$getRefVoltage(void );
#line 25
static uint8_t VoltageP$Atm128AdcConfig$getChannel(void );
#line 39
static uint8_t VoltageP$Atm128AdcConfig$getPrescaler(void );
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(
# 40 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40804490, 
# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(
# 38 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
uint8_t arg_0x408059d8, 
# 56 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(
# 38 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
uint8_t arg_0x408059d8, 
# 111 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 89
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(
# 38 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
uint8_t arg_0x408059d8, 
# 85 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void );
# 125 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static uint32_t proj1C$LclTime$getNow(void );
#line 53
static void proj1C$LclTime$startPeriodic(uint32_t dt);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t proj1C$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

proj1C$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 83 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static error_t proj1C$RadioControl$start(void );
# 41 "/opt/tinyos-2.1.0/tos/interfaces/Random.nc"
static uint16_t proj1C$Random$rand16(void );
# 50 "/opt/tinyos-2.1.0/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t proj1C$ActiveMessageAddress$amAddress(void );




static am_group_t proj1C$ActiveMessageAddress$amGroup(void );
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void proj1C$PeriodTimer$startPeriodic(uint32_t dt);
# 53 "/opt/tinyos-2.1.0/tos/interfaces/ParameterInit.nc"
static error_t proj1C$Seed$init(proj1C$Seed$parameter param);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/Leds.nc"
static void proj1C$Leds$led0Toggle(void );
#line 72
static void proj1C$Leds$led1Toggle(void );
#line 89
static void proj1C$Leds$led2Toggle(void );
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void proj1C$QTimer$startPeriodic(uint32_t dt);
#line 67
static void proj1C$QTimer$stop(void );
#line 53
static void proj1C$PktTimer$startPeriodic(uint32_t dt);
#line 67
static void proj1C$PktTimer$stop(void );
# 76 "proj1C.nc"
state_t proj1C$gState;
message_t proj1C$gSndMsg;


msg_q_t proj1C$gQ;
#line 93
static inline void proj1C$sendWait(void );
#line 115
static inline void proj1C$initQ(msg_q_t *q);
#line 141
static bool proj1C$loadQ(msg_q_t *q, lmsg_t *m);
#line 195
static bool proj1C$getQ(msg_q_t *q, lmsg_t *m, am_addr_t trgt_addr);
#line 240
static inline void proj1C$processQuery_cmd(msg_q_t *q, lmsg_t *m);
#line 274
static inline void proj1C$processQuery_response(msg_q_t *q, lmsg_t *m);
#line 338
static inline void proj1C$processPacket(msg_q_t *q, lmsg_t *m);
#line 356
static inline void proj1C$report_problem(void );
static inline void proj1C$report_sent(void );
static inline void proj1C$report_received(void );








static inline void proj1C$Boot$booted(void );
#line 415
static inline void proj1C$RadioControl$startDone(error_t error);
#line 428
static inline void proj1C$RadioControl$stopDone(error_t error);










static inline message_t *proj1C$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 486
static inline void proj1C$PeriodTimer$fired(void );
#line 525
static inline void proj1C$QTimer$fired(void );
#line 560
static inline void proj1C$PktTimer$fired(void );
#line 602
static inline void proj1C$LclTime$fired(void );
#line 616
static inline void proj1C$AMSend$sendDone(message_t *msg, error_t error);
#line 635
static inline void proj1C$Read$readDone(error_t result, uint16_t data);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 51
static error_t PlatformP$MeasureClock$init(void );
# 42 "/opt/tinyos-2.1.0/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void );






static inline error_t PlatformP$Init$init(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 30
static void MotePlatformP$SerialIdPin$clr(void );
# 23 "/opt/tinyos-2.1.0/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void HplCC1000P$PCLK$makeOutput(void );
#line 29
static void HplCC1000P$PCLK$set(void );
static void HplCC1000P$PCLK$clr(void );


static void HplCC1000P$CHP_OUT$makeInput(void );

static void HplCC1000P$PALE$makeOutput(void );
#line 29
static void HplCC1000P$PALE$set(void );
static void HplCC1000P$PALE$clr(void );


static void HplCC1000P$PDATA$makeInput(void );
#line 32
static bool HplCC1000P$PDATA$get(void );


static void HplCC1000P$PDATA$makeOutput(void );
#line 29
static void HplCC1000P$PDATA$set(void );
static void HplCC1000P$PDATA$clr(void );
# 57 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline error_t HplCC1000P$PlatformInit$init(void );
#line 78
static inline void HplCC1000P$HplCC1000$init(void );
#line 94
static void HplCC1000P$HplCC1000$write(uint8_t addr, uint8_t data);
#line 146
static inline uint8_t HplCC1000P$HplCC1000$read(uint8_t addr);
#line 195
static inline uint8_t HplCC1000P$RssiConfig$getChannel(void );



static inline uint8_t HplCC1000P$RssiConfig$getRefVoltage(void );



static inline uint8_t HplCC1000P$RssiConfig$getPrescaler(void );
# 92 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
static void HplCC1000SpiP$HplCC1000Spi$dataReady(uint8_t data);
# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void HplCC1000SpiP$SpiSck$makeInput(void );
#line 33
static void HplCC1000SpiP$SpiMiso$makeInput(void );

static void HplCC1000SpiP$SpiMiso$makeOutput(void );
#line 33
static void HplCC1000SpiP$SpiMosi$makeInput(void );

static void HplCC1000SpiP$SpiMosi$makeOutput(void );
#line 33
static void HplCC1000SpiP$OC1C$makeInput(void );
# 53 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
uint8_t HplCC1000SpiP$outgoingByte;

static inline error_t HplCC1000SpiP$PlatformInit$init(void );






void __vector_17(void ) __attribute((signal))   ;







static inline void HplCC1000SpiP$HplCC1000Spi$writeByte(uint8_t data);
#line 82
static inline void HplCC1000SpiP$HplCC1000Spi$enableIntr(void );






static inline void HplCC1000SpiP$HplCC1000Spi$disableIntr(void );






static inline void HplCC1000SpiP$HplCC1000Spi$initSlave(void );








static inline void HplCC1000SpiP$HplCC1000Spi$txMode(void );




static inline void HplCC1000SpiP$HplCC1000Spi$rxMode(void );
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput(void );
# 33 "/opt/tinyos-2.1.0/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4320 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline error_t MeasureClockC$Init$init(void );
#line 103
static inline uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void );
#line 120
static inline uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t RealMainP$SoftwareInit$init(void );
# 49 "/opt/tinyos-2.1.0/tos/interfaces/Boot.nc"
static void RealMainP$Boot$booted(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t RealMainP$PlatformInit$init(void );
# 46 "/opt/tinyos-2.1.0/tos/interfaces/Scheduler.nc"
static void RealMainP$Scheduler$init(void );
#line 61
static void RealMainP$Scheduler$taskLoop(void );
#line 54
static bool RealMainP$Scheduler$runNextTask(void );
# 52 "/opt/tinyos-2.1.0/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4033ce28);
# 59 "/opt/tinyos-2.1.0/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 50 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4321 {

  SchedulerBasicP$NUM_TASKS = 21U, 
  SchedulerBasicP$NO_TASK = 255
};

uint8_t SchedulerBasicP$m_head;
uint8_t SchedulerBasicP$m_tail;
uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void );
#line 86
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP$Scheduler$init(void );









static bool SchedulerBasicP$Scheduler$runNextTask(void );
#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void );
#line 159
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void );
# 58 "/opt/tinyos-2.1.0/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC$getPowerState(void );
#line 97
static inline void McuSleepC$McuSleep$sleep(void );
#line 110
static inline void McuSleepC$McuPowerState$update(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(
# 36 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40597620, 
# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(
# 37 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x405a3010, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 85
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t len);
#line 132
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 156
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(message_t *amsg, am_id_t type);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static void SerialP$SplitControl$startDone(error_t error);
#line 117
static void SerialP$SplitControl$stopDone(error_t error);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t SerialP$stopDoneTask$postTask(void );
# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
static error_t SerialP$SerialControl$start(void );









static error_t SerialP$SerialControl$stop(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t SerialP$RunTx$postTask(void );
# 38 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFlush.nc"
static void SerialP$SerialFlush$flush(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t SerialP$startDoneTask$postTask(void );
# 45 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP$SerialFrameComm$putDelimiter(void );
#line 68
static void SerialP$SerialFrameComm$resetReceive(void );
#line 54
static error_t SerialP$SerialFrameComm$putData(uint8_t data);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t SerialP$defaultSerialFlushTask$postTask(void );
# 70 "/opt/tinyos-2.1.0/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP$SendBytePacket$nextByte(void );









static void SerialP$SendBytePacket$sendCompleted(error_t error);
# 51 "/opt/tinyos-2.1.0/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP$ReceiveBytePacket$startPacket(void );






static void SerialP$ReceiveBytePacket$byteReceived(uint8_t data);










static void SerialP$ReceiveBytePacket$endPacket(error_t result);
# 189 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
enum SerialP$__nesc_unnamed4322 {
#line 189
  SerialP$RunTx = 0U
};
#line 189
typedef int SerialP$__nesc_sillytask_RunTx[SerialP$RunTx];
#line 320
enum SerialP$__nesc_unnamed4323 {
#line 320
  SerialP$startDoneTask = 1U
};
#line 320
typedef int SerialP$__nesc_sillytask_startDoneTask[SerialP$startDoneTask];





enum SerialP$__nesc_unnamed4324 {
#line 326
  SerialP$stopDoneTask = 2U
};
#line 326
typedef int SerialP$__nesc_sillytask_stopDoneTask[SerialP$stopDoneTask];








enum SerialP$__nesc_unnamed4325 {
#line 335
  SerialP$defaultSerialFlushTask = 3U
};
#line 335
typedef int SerialP$__nesc_sillytask_defaultSerialFlushTask[SerialP$defaultSerialFlushTask];
#line 79
enum SerialP$__nesc_unnamed4326 {
  SerialP$RX_DATA_BUFFER_SIZE = 2, 
  SerialP$TX_DATA_BUFFER_SIZE = 4, 
  SerialP$SERIAL_MTU = 255, 
  SerialP$SERIAL_VERSION = 1, 
  SerialP$ACK_QUEUE_SIZE = 5
};

enum SerialP$__nesc_unnamed4327 {
  SerialP$RXSTATE_NOSYNC, 
  SerialP$RXSTATE_PROTO, 
  SerialP$RXSTATE_TOKEN, 
  SerialP$RXSTATE_INFO, 
  SerialP$RXSTATE_INACTIVE
};

enum SerialP$__nesc_unnamed4328 {
  SerialP$TXSTATE_IDLE, 
  SerialP$TXSTATE_PROTO, 
  SerialP$TXSTATE_SEQNO, 
  SerialP$TXSTATE_INFO, 
  SerialP$TXSTATE_FCS1, 
  SerialP$TXSTATE_FCS2, 
  SerialP$TXSTATE_ENDFLAG, 
  SerialP$TXSTATE_ENDWAIT, 
  SerialP$TXSTATE_FINISH, 
  SerialP$TXSTATE_ERROR, 
  SerialP$TXSTATE_INACTIVE
};





#line 109
typedef enum SerialP$__nesc_unnamed4329 {
  SerialP$BUFFER_AVAILABLE, 
  SerialP$BUFFER_FILLING, 
  SerialP$BUFFER_COMPLETE
} SerialP$tx_data_buffer_states_t;

enum SerialP$__nesc_unnamed4330 {
  SerialP$TX_ACK_INDEX = 0, 
  SerialP$TX_DATA_INDEX = 1, 
  SerialP$TX_BUFFER_COUNT = 2
};






#line 122
typedef struct SerialP$__nesc_unnamed4331 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$RX_DATA_BUFFER_SIZE + 1];
} SerialP$rx_buf_t;




#line 128
typedef struct SerialP$__nesc_unnamed4332 {
  uint8_t state;
  uint8_t buf;
} SerialP$tx_buf_t;





#line 133
typedef struct SerialP$__nesc_unnamed4333 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$ACK_QUEUE_SIZE + 1];
} SerialP$ack_queue_t;



SerialP$rx_buf_t SerialP$rxBuf;
SerialP$tx_buf_t SerialP$txBuf[SerialP$TX_BUFFER_COUNT];



uint8_t SerialP$rxState;
uint8_t SerialP$rxByteCnt;
uint8_t SerialP$rxProto;
uint8_t SerialP$rxSeqno;
uint16_t SerialP$rxCRC;



uint8_t SerialP$txState;
uint8_t SerialP$txByteCnt;
uint8_t SerialP$txProto;
uint8_t SerialP$txSeqno;
uint16_t SerialP$txCRC;
uint8_t SerialP$txPending;
uint8_t SerialP$txIndex;


SerialP$ack_queue_t SerialP$ackQ;

bool SerialP$offPending = FALSE;



static __inline void SerialP$txInit(void );
static __inline void SerialP$rxInit(void );
static __inline void SerialP$ackInit(void );

static __inline bool SerialP$ack_queue_is_full(void );
static __inline bool SerialP$ack_queue_is_empty(void );
static __inline void SerialP$ack_queue_push(uint8_t token);
static __inline uint8_t SerialP$ack_queue_top(void );
static inline uint8_t SerialP$ack_queue_pop(void );




static __inline void SerialP$rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP$rx_buffer_top(void );
static __inline uint8_t SerialP$rx_buffer_pop(void );
static __inline uint16_t SerialP$rx_current_crc(void );

static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP$MaybeScheduleTx(void );




static __inline void SerialP$txInit(void );
#line 205
static __inline void SerialP$rxInit(void );








static __inline void SerialP$ackInit(void );



static inline error_t SerialP$Init$init(void );
#line 232
static __inline bool SerialP$ack_queue_is_full(void );









static __inline bool SerialP$ack_queue_is_empty(void );





static __inline void SerialP$ack_queue_push(uint8_t token);









static __inline uint8_t SerialP$ack_queue_top(void );









static inline uint8_t SerialP$ack_queue_pop(void );
#line 295
static __inline void SerialP$rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP$rx_buffer_top(void );



static __inline uint8_t SerialP$rx_buffer_pop(void );





static __inline uint16_t SerialP$rx_current_crc(void );










static inline void SerialP$startDoneTask$runTask(void );





static inline void SerialP$stopDoneTask$runTask(void );



static inline void SerialP$SerialFlush$flushDone(void );




static inline void SerialP$defaultSerialFlushTask$runTask(void );


static inline void SerialP$SerialFlush$default$flush(void );



static inline error_t SerialP$SplitControl$start(void );




static void SerialP$testOff(void );
#line 384
static inline void SerialP$SerialFrameComm$delimiterReceived(void );


static inline void SerialP$SerialFrameComm$dataReceived(uint8_t data);



static inline bool SerialP$valid_rx_proto(uint8_t proto);










static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
#line 502
static void SerialP$MaybeScheduleTx(void );










static inline error_t SerialP$SendBytePacket$completeSend(void );








static inline error_t SerialP$SendBytePacket$startSend(uint8_t b);
#line 539
static inline void SerialP$RunTx$runTask(void );
#line 642
static inline void SerialP$SerialFrameComm$putDone(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void );
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(
# 40 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4066c560, 
# 85 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void );
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(
# 39 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4065be50, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(
# 43 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4066a088, 
# 31 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(
# 43 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4066a088);
# 23 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(
# 43 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4066a088, 
# 23 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 60 "/opt/tinyos-2.1.0/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void );
#line 51
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t first_byte);
# 147 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4334 {
#line 147
  SerialDispatcherP$0$signalSendDone = 4U
};
#line 147
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone];
#line 264
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4335 {
#line 264
  SerialDispatcherP$0$receiveTask = 5U
};
#line 264
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4336 {
  SerialDispatcherP$0$SEND_STATE_IDLE = 0, 
  SerialDispatcherP$0$SEND_STATE_BEGIN = 1, 
  SerialDispatcherP$0$SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4337 {
  SerialDispatcherP$0$RECV_STATE_IDLE = 0, 
  SerialDispatcherP$0$RECV_STATE_BEGIN = 1, 
  SerialDispatcherP$0$RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4338 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len);
#line 147
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void );
#line 167
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void );
#line 183
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void );
#line 233
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b);
#line 264
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void );
#line 285
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
#line 344
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.1.0/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC$UartStream$send(
#line 44
uint8_t * buf, 



uint16_t len);
# 83 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t data);





static void HdlcTranslateC$SerialFrameComm$putDone(void );
#line 74
static void HdlcTranslateC$SerialFrameComm$delimiterReceived(void );
# 47 "/opt/tinyos-2.1.0/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC$__nesc_unnamed4339 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC$HdlcState;


HdlcTranslateC$HdlcState HdlcTranslateC$state = { 0, 0 };
uint8_t HdlcTranslateC$txTemp;
uint8_t HdlcTranslateC$m_data;


static inline void HdlcTranslateC$SerialFrameComm$resetReceive(void );





static inline void HdlcTranslateC$UartStream$receivedByte(uint8_t data);
#line 86
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void );





static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
#line 104
static inline void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void );
# 79 "/opt/tinyos-2.1.0/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t data);
# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void );
# 62 "/opt/tinyos-2.1.0/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP$HplUart0$rxDone(uint8_t data);
#line 47
static void HplAtm128UartP$HplUart0$txDone(void );

static void HplAtm128UartP$HplUart1$rxDone(uint8_t data);
#line 47
static void HplAtm128UartP$HplUart1$txDone(void );
# 60 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
# 44 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP$McuPowerState$update(void );
# 87 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0Init$init(void );
#line 107
static inline error_t HplAtm128UartP$Uart0TxControl$start(void );





static inline error_t HplAtm128UartP$Uart0TxControl$stop(void );





static inline error_t HplAtm128UartP$Uart0RxControl$start(void );





static inline error_t HplAtm128UartP$Uart0RxControl$stop(void );





static inline error_t HplAtm128UartP$HplUart0$enableTxIntr(void );





static inline error_t HplAtm128UartP$HplUart0$disableTxIntr(void );




static inline error_t HplAtm128UartP$HplUart0$enableRxIntr(void );




static inline error_t HplAtm128UartP$HplUart0$disableRxIntr(void );
#line 164
static void HplAtm128UartP$HplUart0$tx(uint8_t data);






void __vector_18(void ) __attribute((signal))   ;





void __vector_20(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP$Uart1Init$init(void );
#line 265
void __vector_30(void ) __attribute((signal))   ;




void __vector_32(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP$HplUart1$default$txDone(void );
static inline void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data);
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareA$fired(void );
# 51 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Capture$size_type t);
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareB$fired(void );
#line 49
static void HplAtm128Timer3P$CompareC$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P$Timer$overflow(void );
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$Timer$get(void );


static inline void HplAtm128Timer3P$Timer$set(uint16_t t);








static inline void HplAtm128Timer3P$Timer$setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void );









static inline uint16_t HplAtm128Timer3P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128_TCCR3B_t x);
#line 127
static inline void HplAtm128Timer3P$Timer$start(void );
#line 188
static inline void HplAtm128Timer3P$CompareA$default$fired(void );
void __vector_26(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P$CompareB$default$fired(void );
void __vector_27(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P$CompareC$default$fired(void );
void __vector_28(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P$Capture$default$captured(uint16_t time);
void __vector_25(void ) __attribute((interrupt))   ;



void __vector_29(void ) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$setScale(uint8_t scale);
#line 58
static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$start(void );
# 42 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow(void );
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$overflow(void );
# 56 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow(void );
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow(void );
# 56 "/opt/tinyos-2.1.0/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC$0$__nesc_unnamed4340 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 122
static inline void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void );
# 40 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.0/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40804490, 
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
uint8_t arg_0x408059d8, 
# 85 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 83
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 67 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4341 {
#line 118
  AMQueueImplP$0$CancelTask = 6U
};
#line 118
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4342 {
#line 161
  AMQueueImplP$0$errorTask = 7U
};
#line 161
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4343 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1 / 8 + 1];

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 82
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 155
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 181
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 48 "/opt/tinyos-2.1.0/tos/system/QueueC.nc"
/*PrintfC.QueueC*/QueueC$0$queue_t  /*PrintfC.QueueC*/QueueC$0$queue[250];
uint8_t /*PrintfC.QueueC*/QueueC$0$head = 0;
uint8_t /*PrintfC.QueueC*/QueueC$0$tail = 0;
uint8_t /*PrintfC.QueueC*/QueueC$0$size = 0;

static inline bool /*PrintfC.QueueC*/QueueC$0$Queue$empty(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$size(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$maxSize(void );



static inline /*PrintfC.QueueC*/QueueC$0$queue_t /*PrintfC.QueueC*/QueueC$0$Queue$head(void );



static inline void /*PrintfC.QueueC*/QueueC$0$printQueue(void );
#line 85
static inline /*PrintfC.QueueC*/QueueC$0$queue_t /*PrintfC.QueueC*/QueueC$0$Queue$dequeue(void );
#line 97
static inline error_t /*PrintfC.QueueC*/QueueC$0$Queue$enqueue(/*PrintfC.QueueC*/QueueC$0$queue_t newVal);
# 49 "/opt/tinyos-2.1.0/tos/interfaces/Boot.nc"
static void PrintfP$Boot$booted(void );
# 83 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static error_t PrintfP$SerialControl$start(void );
# 90 "/opt/tinyos-2.1.0/tos/interfaces/Queue.nc"
static error_t PrintfP$Queue$enqueue(
#line 86
PrintfP$Queue$t  newVal);
#line 81
static 
#line 79
PrintfP$Queue$t  

PrintfP$Queue$dequeue(void );
#line 50
static bool PrintfP$Queue$empty(void );







static uint8_t PrintfP$Queue$size(void );
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t PrintfP$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 115 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
static 
#line 112
void * 


PrintfP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t PrintfP$retrySend$postTask(void );
# 127 "/opt/tinyos-2.1.0/tos/lib/printf/PrintfP.nc"
enum PrintfP$__nesc_unnamed4344 {
#line 127
  PrintfP$retrySend = 8U
};
#line 127
typedef int PrintfP$__nesc_sillytask_retrySend[PrintfP$retrySend];
#line 100
enum PrintfP$__nesc_unnamed4345 {
  PrintfP$S_STOPPED, 
  PrintfP$S_STARTED, 
  PrintfP$S_FLUSHING
};

message_t PrintfP$printfMsg;
uint8_t PrintfP$state = PrintfP$S_STOPPED;

static inline void PrintfP$MainBoot$booted(void );



static inline void PrintfP$SerialControl$startDone(error_t error);









static inline void PrintfP$SerialControl$stopDone(error_t error);



static inline void PrintfP$retrySend$runTask(void );




static void PrintfP$sendNext(void );










int printfflush(void )   ;
#line 155
static void PrintfP$AMSend$sendDone(message_t *msg, error_t error);
#line 168
int uart_putchar(char c, struct __file *stream) __attribute((noinline))   ;
# 31 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$toggle(void );



static void LedsP$Led0$makeOutput(void );
#line 29
static void LedsP$Led0$set(void );

static void LedsP$Led1$toggle(void );



static void LedsP$Led1$makeOutput(void );
#line 29
static void LedsP$Led1$set(void );

static void LedsP$Led2$toggle(void );



static void LedsP$Led2$makeOutput(void );
#line 29
static void LedsP$Led2$set(void );
# 45 "/opt/tinyos-2.1.0/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 73
static inline void LedsP$Leds$led0Toggle(void );
#line 88
static inline void LedsP$Leds$led1Toggle(void );
#line 103
static inline void LedsP$Leds$led2Toggle(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t CC1000ActiveMessageP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
# 49 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static am_addr_t CC1000ActiveMessageP$amAddress(void );
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void CC1000ActiveMessageP$AMSend$sendDone(
# 40 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x40894068, 
# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC1000ActiveMessageP$Snoop$receive(
# 42 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x40893108, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 115 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
static 
#line 112
void * 


CC1000ActiveMessageP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC1000ActiveMessageP$Receive$receive(
# 41 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x40894a28, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline cc1000_header_t * CC1000ActiveMessageP$getHeader(message_t * amsg);



static inline cc1000_footer_t *CC1000ActiveMessageP$getFooter(message_t *amsg);



static error_t CC1000ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 77
static inline void CC1000ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);







static inline void *CC1000ActiveMessageP$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len);





static inline message_t *CC1000ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 104
static inline am_addr_t CC1000ActiveMessageP$AMPacket$address(void );



static am_addr_t CC1000ActiveMessageP$AMPacket$destination(message_t *amsg);









static inline void CC1000ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC1000ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static inline am_id_t CC1000ActiveMessageP$AMPacket$type(message_t *amsg);




static inline void CC1000ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type);
#line 157
static inline message_t *CC1000ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC1000ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static void CC1000CsmaP$SplitControl$startDone(error_t error);
#line 117
static void CC1000CsmaP$SplitControl$stopDone(error_t error);
# 55 "/opt/tinyos-2.1.0/tos/lib/timer/BusyWait.nc"
static void CC1000CsmaP$BusyWait$wait(CC1000CsmaP$BusyWait$size_type dt);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP$setWakeupTask$postTask(void );
#line 56
static error_t CC1000CsmaP$startStopDone$postTask(void );
# 76 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP$cancelRssi(void );
# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP$RssiNoiseFloor$read(void );
# 41 "/opt/tinyos-2.1.0/tos/interfaces/Random.nc"
static uint16_t CC1000CsmaP$Random$rand16(void );
# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP$RssiCheckChannel$read(void );
# 46 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000CsmaP$CC1000Squelch$get(void );






static bool CC1000CsmaP$CC1000Squelch$settled(void );
#line 40
static void CC1000CsmaP$CC1000Squelch$adjust(uint16_t data);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP$sleepCheck$postTask(void );
# 81 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static bool CC1000CsmaP$WakeupTimer$isRunning(void );
#line 62
static void CC1000CsmaP$WakeupTimer$startOneShot(uint32_t dt);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t CC1000CsmaP$ByteRadioInit$init(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP$adjustSquelch$postTask(void );
# 93 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
static void CC1000CsmaP$CC1000Control$biasOn(void );
#line 39
static void CC1000CsmaP$CC1000Control$init(void );
#line 85
static void CC1000CsmaP$CC1000Control$coreOn(void );
#line 78
static void CC1000CsmaP$CC1000Control$rxMode(void );
#line 68
static void CC1000CsmaP$CC1000Control$off(void );
# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
static error_t CC1000CsmaP$ByteRadioControl$start(void );
# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP$RssiPulseCheck$read(void );
# 45 "/opt/tinyos-2.1.0/tos/interfaces/CsmaBackoff.nc"
static uint16_t CC1000CsmaP$CsmaBackoff$congestion(
#line 42
message_t * m);
#line 37
static uint16_t CC1000CsmaP$CsmaBackoff$initial(
#line 34
message_t * m);
# 61 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
static void CC1000CsmaP$ByteRadio$listen(void );
#line 85
static bool CC1000CsmaP$ByteRadio$syncing(void );
#line 32
static void CC1000CsmaP$ByteRadio$cts(void );
#line 50
static void CC1000CsmaP$ByteRadio$setPreambleLength(uint16_t bytes);
#line 66
static void CC1000CsmaP$ByteRadio$off(void );
#line 39
static message_t *CC1000CsmaP$ByteRadio$getTxMessage(void );
# 108 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
enum CC1000CsmaP$__nesc_unnamed4346 {
#line 108
  CC1000CsmaP$setWakeupTask = 9U
};
#line 108
typedef int CC1000CsmaP$__nesc_sillytask_setWakeupTask[CC1000CsmaP$setWakeupTask];
#line 175
enum CC1000CsmaP$__nesc_unnamed4347 {
#line 175
  CC1000CsmaP$startStopDone = 10U
};
#line 175
typedef int CC1000CsmaP$__nesc_sillytask_startStopDone[CC1000CsmaP$startStopDone];
#line 293
enum CC1000CsmaP$__nesc_unnamed4348 {
#line 293
  CC1000CsmaP$sleepCheck = 11U
};
#line 293
typedef int CC1000CsmaP$__nesc_sillytask_sleepCheck[CC1000CsmaP$sleepCheck];
#line 316
enum CC1000CsmaP$__nesc_unnamed4349 {
#line 316
  CC1000CsmaP$adjustSquelch = 12U
};
#line 316
typedef int CC1000CsmaP$__nesc_sillytask_adjustSquelch[CC1000CsmaP$adjustSquelch];
#line 81
enum CC1000CsmaP$__nesc_unnamed4350 {
  CC1000CsmaP$DISABLED_STATE, 
  CC1000CsmaP$IDLE_STATE, 
  CC1000CsmaP$RX_STATE, 
  CC1000CsmaP$TX_STATE, 
  CC1000CsmaP$POWERDOWN_STATE, 
  CC1000CsmaP$PULSECHECK_STATE
};

enum CC1000CsmaP$__nesc_unnamed4351 {
  CC1000CsmaP$TIME_AFTER_CHECK = 30
};

uint8_t CC1000CsmaP$radioState = CC1000CsmaP$DISABLED_STATE;



#line 95
struct CC1000CsmaP$__nesc_unnamed4352 {
  uint8_t ccaOff : 1;
  uint8_t txPending : 1;
} CC1000CsmaP$f;
uint8_t CC1000CsmaP$count;
uint8_t CC1000CsmaP$clearCount;

int16_t CC1000CsmaP$macDelay;

uint16_t CC1000CsmaP$sleepTime;

uint16_t CC1000CsmaP$rssiForSquelch;



static inline cc1000_metadata_t * CC1000CsmaP$getMetadata(message_t * amsg);



static inline void CC1000CsmaP$enterIdleState(void );




static inline void CC1000CsmaP$enterIdleStateSetWakeup(void );









static inline void CC1000CsmaP$enterPowerDownState(void );




static inline void CC1000CsmaP$enterPulseCheckState(void );




static inline void CC1000CsmaP$enterRxState(void );




static inline void CC1000CsmaP$enterTxState(void );





static void CC1000CsmaP$radioOn(void );







static inline void CC1000CsmaP$radioOff(void );




static inline void CC1000CsmaP$setPreambleLength(message_t * msg);




static inline error_t CC1000CsmaP$Init$init(void );






static inline void CC1000CsmaP$startStopDone$runTask(void );










static inline error_t CC1000CsmaP$SplitControl$start(void );
#line 220
static void CC1000CsmaP$setWakeup(void );
#line 252
static inline void CC1000CsmaP$setWakeupTask$runTask(void );



static inline void CC1000CsmaP$WakeupTimer$fired(void );
#line 293
static inline void CC1000CsmaP$sleepCheck$runTask(void );
#line 318
static inline void CC1000CsmaP$RssiPulseCheck$readDone(error_t result, uint16_t data);
#line 358
static inline void CC1000CsmaP$ByteRadio$rts(message_t * msg);
#line 374
static inline void CC1000CsmaP$ByteRadio$sendDone(void );




static inline void CC1000CsmaP$congestion(void );



static inline void CC1000CsmaP$ByteRadio$idleByte(bool preamble);
#line 397
static inline void CC1000CsmaP$RssiCheckChannel$readDone(error_t result, uint16_t data);
#line 426
static inline void CC1000CsmaP$ByteRadio$rx(void );



static void CC1000CsmaP$ByteRadio$rxDone(void );







static inline void CC1000CsmaP$adjustSquelch$runTask(void );






static inline void CC1000CsmaP$RssiNoiseFloor$readDone(error_t result, uint16_t data);
#line 474
static inline uint16_t CC1000CsmaP$CsmaBackoff$default$initial(message_t *m);




static inline uint16_t CC1000CsmaP$CsmaBackoff$default$congestion(message_t *m);
#line 557
static inline void CC1000CsmaP$setPreambleLength(message_t * msg);
# 73 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static am_addr_t CC1000SendReceiveP$amAddress(void );
# 74 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
static void CC1000SendReceiveP$HplCC1000Spi$initSlave(void );
#line 69
static void CC1000SendReceiveP$HplCC1000Spi$disableIntr(void );
#line 45
static void CC1000SendReceiveP$HplCC1000Spi$writeByte(uint8_t data);
#line 64
static void CC1000SendReceiveP$HplCC1000Spi$enableIntr(void );
#line 79
static void CC1000SendReceiveP$HplCC1000Spi$txMode(void );




static void CC1000SendReceiveP$HplCC1000Spi$rxMode(void );
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void CC1000SendReceiveP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static error_t CC1000SendReceiveP$RssiRx$read(void );
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC1000SendReceiveP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 46 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000SendReceiveP$CC1000Squelch$get(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t CC1000SendReceiveP$signalPacketSent$postTask(void );
# 73 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
static void CC1000SendReceiveP$CC1000Control$txMode(void );
#line 136
static bool CC1000SendReceiveP$CC1000Control$getLOStatus(void );
#line 78
static void CC1000SendReceiveP$CC1000Control$rxMode(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t CC1000SendReceiveP$signalPacketReceived$postTask(void );
# 25 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
static void CC1000SendReceiveP$ByteRadio$rts(message_t * msg);
#line 95
static void CC1000SendReceiveP$ByteRadio$rxDone(void );
#line 74
static void CC1000SendReceiveP$ByteRadio$idleByte(bool preamble);
#line 44
static void CC1000SendReceiveP$ByteRadio$sendDone(void );
#line 90
static void CC1000SendReceiveP$ByteRadio$rx(void );
# 40 "/opt/tinyos-2.1.0/tos/interfaces/RadioTimeStamping.nc"
static void CC1000SendReceiveP$RadioTimeStamping$transmittedSFD(uint16_t time, 
#line 38
message_t * p_msg);
#line 51
static void CC1000SendReceiveP$RadioTimeStamping$receivedSFD(uint16_t time);
# 377 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
enum CC1000SendReceiveP$__nesc_unnamed4353 {
#line 377
  CC1000SendReceiveP$signalPacketSent = 13U
};
#line 377
typedef int CC1000SendReceiveP$__nesc_sillytask_signalPacketSent[CC1000SendReceiveP$signalPacketSent];
#line 548
enum CC1000SendReceiveP$__nesc_unnamed4354 {
#line 548
  CC1000SendReceiveP$signalPacketReceived = 14U
};
#line 548
typedef int CC1000SendReceiveP$__nesc_sillytask_signalPacketReceived[CC1000SendReceiveP$signalPacketReceived];
#line 78
enum CC1000SendReceiveP$__nesc_unnamed4355 {
  CC1000SendReceiveP$OFF_STATE, 

  CC1000SendReceiveP$INACTIVE_STATE, 

  CC1000SendReceiveP$LISTEN_STATE, 


  CC1000SendReceiveP$SYNC_STATE, 
  CC1000SendReceiveP$RX_STATE, 
  CC1000SendReceiveP$RECEIVED_STATE, 
  CC1000SendReceiveP$SENDING_ACK, 


  CC1000SendReceiveP$TXPREAMBLE_STATE, 
  CC1000SendReceiveP$TXSYNC_STATE, 
  CC1000SendReceiveP$TXDATA_STATE, 
  CC1000SendReceiveP$TXCRC_STATE, 
  CC1000SendReceiveP$TXFLUSH_STATE, 
  CC1000SendReceiveP$TXWAITFORACK_STATE, 
  CC1000SendReceiveP$TXREADACK_STATE, 
  CC1000SendReceiveP$TXDONE_STATE
};

enum CC1000SendReceiveP$__nesc_unnamed4356 {
  CC1000SendReceiveP$SYNC_BYTE1 = 0x33, 
  CC1000SendReceiveP$SYNC_BYTE2 = 0xcc, 
  CC1000SendReceiveP$SYNC_WORD = (CC1000SendReceiveP$SYNC_BYTE1 << 8) | CC1000SendReceiveP$SYNC_BYTE2, 
  CC1000SendReceiveP$ACK_BYTE1 = 0xba, 
  CC1000SendReceiveP$ACK_BYTE2 = 0x83, 
  CC1000SendReceiveP$ACK_WORD = (CC1000SendReceiveP$ACK_BYTE1 << 8) | CC1000SendReceiveP$ACK_BYTE2, 
  CC1000SendReceiveP$ACK_LENGTH = 16, 
  CC1000SendReceiveP$MAX_ACK_WAIT = 18
};

uint8_t CC1000SendReceiveP$radioState;





#line 114
struct CC1000SendReceiveP$__nesc_unnamed4357 {
  uint8_t ack : 1;
  uint8_t txBusy : 1;
  uint8_t invert : 1;
  uint8_t rxBitOffset : 3;
} CC1000SendReceiveP$f;
uint16_t CC1000SendReceiveP$count;
uint16_t CC1000SendReceiveP$runningCrc;

uint16_t CC1000SendReceiveP$rxShiftBuf;
message_t CC1000SendReceiveP$rxBuf;
message_t * CC1000SendReceiveP$rxBufPtr = &CC1000SendReceiveP$rxBuf;

uint16_t CC1000SendReceiveP$preambleLength;
message_t * CC1000SendReceiveP$txBufPtr;
uint8_t CC1000SendReceiveP$nextTxByte;

const_uint8_t CC1000SendReceiveP$ackCode[5] = { 0xab, CC1000SendReceiveP$ACK_BYTE1, CC1000SendReceiveP$ACK_BYTE2, 0xaa, 0xaa };



static inline cc1000_header_t * CC1000SendReceiveP$getHeader(message_t * amsg);



static inline cc1000_footer_t *CC1000SendReceiveP$getFooter(message_t * amsg);



static inline cc1000_metadata_t * CC1000SendReceiveP$getMetadata(message_t * amsg);










static inline void CC1000SendReceiveP$enterInactiveState(void );



static inline void CC1000SendReceiveP$enterListenState(void );




static inline void CC1000SendReceiveP$enterSyncState(void );





static inline void CC1000SendReceiveP$enterRxState(void );







static inline void CC1000SendReceiveP$enterReceivedState(void );



static inline void CC1000SendReceiveP$enterAckState(void );




static inline void CC1000SendReceiveP$enterTxPreambleState(void );






static inline void CC1000SendReceiveP$enterTxSyncState(void );



static inline void CC1000SendReceiveP$enterTxDataState(void );







static inline void CC1000SendReceiveP$enterTxCrcState(void );



static inline void CC1000SendReceiveP$enterTxFlushState(void );




static inline void CC1000SendReceiveP$enterTxWaitForAckState(void );




static inline void CC1000SendReceiveP$enterTxReadAckState(void );





static inline void CC1000SendReceiveP$enterTxDoneState(void );



static inline error_t CC1000SendReceiveP$Init$init(void );





static inline error_t CC1000SendReceiveP$StdControl$start(void );
#line 253
static inline error_t CC1000SendReceiveP$Send$send(message_t *msg, uint8_t len);
#line 271
static inline void CC1000SendReceiveP$ByteRadio$cts(void );
#line 284
static inline void CC1000SendReceiveP$sendNextByte(void );




static inline void CC1000SendReceiveP$txPreamble(void );








static inline void CC1000SendReceiveP$txSync(void );






static inline void CC1000SendReceiveP$txData(void );
#line 321
static inline void CC1000SendReceiveP$txCrc(void );





static inline void CC1000SendReceiveP$txFlush(void );
#line 340
static inline void CC1000SendReceiveP$txWaitForAck(void );










static inline void CC1000SendReceiveP$txReadAck(uint8_t in);
#line 377
static inline void CC1000SendReceiveP$signalPacketSent$runTask(void );
#line 389
static inline void CC1000SendReceiveP$txDone(void );







static inline void CC1000SendReceiveP$packetReceived(void );
static void CC1000SendReceiveP$packetReceiveDone(void );

static void CC1000SendReceiveP$ByteRadio$listen(void );






static inline void CC1000SendReceiveP$ByteRadio$off(void );




static inline void CC1000SendReceiveP$listenData(uint8_t in);
#line 428
static inline void CC1000SendReceiveP$syncData(uint8_t in);
#line 476
static inline void CC1000SendReceiveP$RssiRx$readDone(error_t result, uint16_t data);








static inline void CC1000SendReceiveP$rxData(uint8_t in);
#line 517
static inline void CC1000SendReceiveP$packetReceived(void );
#line 537
static inline void CC1000SendReceiveP$ackData(uint8_t in);










static inline void CC1000SendReceiveP$signalPacketReceived$runTask(void );
#line 570
static void CC1000SendReceiveP$packetReceiveDone(void );
#line 587
static inline void CC1000SendReceiveP$HplCC1000Spi$dataReady(uint8_t data);
#line 613
static inline void CC1000SendReceiveP$ByteRadio$setPreambleLength(uint16_t bytes);







static inline message_t *CC1000SendReceiveP$ByteRadio$getTxMessage(void );



static inline bool CC1000SendReceiveP$ByteRadio$syncing(void );









static inline uint8_t CC1000SendReceiveP$Packet$payloadLength(message_t *msg);




static inline void CC1000SendReceiveP$Packet$setPayloadLength(message_t *msg, uint8_t len);







static inline void *CC1000SendReceiveP$Packet$getPayload(message_t *msg, uint8_t len);
#line 683
static inline void CC1000SendReceiveP$RadioTimeStamping$default$transmittedSFD(uint16_t time, message_t *msgBuff);
static inline void CC1000SendReceiveP$RadioTimeStamping$default$receivedSFD(uint16_t time);
# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static error_t CC1000RssiP$ActualRssi$read(void );
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC1000RssiP$Resource$release(void );
#line 87
static error_t CC1000RssiP$Resource$immediateRequest(void );
#line 78
static error_t CC1000RssiP$Resource$request(void );
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static void CC1000RssiP$Rssi$readDone(
# 47 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x409c3278, 
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
error_t result, CC1000RssiP$Rssi$val_t val);
# 57 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
enum CC1000RssiP$__nesc_unnamed4358 {
  CC1000RssiP$IDLE = 4U, 
  CC1000RssiP$CANCELLED = 5U
};


uint8_t CC1000RssiP$currentOp = CC1000RssiP$IDLE;
uint8_t CC1000RssiP$nextOp;

static inline void CC1000RssiP$cancel(void );




static inline void CC1000RssiP$Resource$granted(void );



static error_t CC1000RssiP$Rssi$read(uint8_t reason);
#line 89
static inline void CC1000RssiP$startNextOp(void );










static inline void CC1000RssiP$ActualRssi$readDone(error_t result, uint16_t data);








static inline void CC1000RssiP$Rssi$default$readDone(uint8_t reason, error_t result, uint16_t data);
# 49 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SquelchP.nc"
uint16_t CC1000SquelchP$clearThreshold = CC1K_SquelchInit;
uint16_t CC1000SquelchP$squelchTable[CC1K_SquelchTableSize];
uint8_t CC1000SquelchP$squelchIndex;
#line 51
uint8_t CC1000SquelchP$squelchCount;

static inline error_t CC1000SquelchP$Init$init(void );








static inline void CC1000SquelchP$CC1000Squelch$adjust(uint16_t data);
#line 91
static inline uint16_t CC1000SquelchP$CC1000Squelch$get(void );



static inline bool CC1000SquelchP$CC1000Squelch$settled(void );
# 55 "/opt/tinyos-2.1.0/tos/lib/timer/BusyWait.nc"
static void CC1000ControlP$BusyWait$wait(CC1000ControlP$BusyWait$size_type dt);
# 52 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000.nc"
static void CC1000ControlP$CC$init(void );
#line 66
static uint8_t CC1000ControlP$CC$read(uint8_t addr);
#line 59
static void CC1000ControlP$CC$write(uint8_t addr, uint8_t data);
# 52 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ControlP.nc"
uint8_t CC1000ControlP$txCurrent;
#line 52
uint8_t CC1000ControlP$rxCurrent;
#line 52
uint8_t CC1000ControlP$power;

enum CC1000ControlP$__nesc_unnamed4359 {
  CC1000ControlP$IF = 150000, 
  CC1000ControlP$FREQ_MIN = 4194304, 
  CC1000ControlP$FREQ_MAX = 16751615
};
#line 90
static void CC1000ControlP$calibrateNow(void );
#line 103
static inline void CC1000ControlP$calibrate(void );
#line 246
static inline void CC1000ControlP$CC1000Control$init(void );
#line 287
static inline void CC1000ControlP$CC1000Control$tunePreset(uint8_t freq);
#line 311
static void CC1000ControlP$CC1000Control$txMode(void );
#line 325
static void CC1000ControlP$CC1000Control$rxMode(void );








static inline void CC1000ControlP$CC1000Control$coreOn(void );









static inline void CC1000ControlP$CC1000Control$biasOn(void );








static void CC1000ControlP$CC1000Control$off(void );
#line 382
static inline bool CC1000ControlP$CC1000Control$getLOStatus(void );
# 110 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 72 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void );
#line 73
static void Atm128AdcP$HplAtm128Adc$enableAdc(void );
#line 49
static void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t admux);
#line 141
static bool Atm128AdcP$HplAtm128Adc$cancel(void );
#line 77
static void Atm128AdcP$HplAtm128Adc$disableAdc(void );








static void Atm128AdcP$HplAtm128Adc$disableInterruption(void );
#line 60
static void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t adcsra);
# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void );
# 82 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 78
struct Atm128AdcP$__nesc_unnamed4360 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP$f;
#line 82
#line 78
struct Atm128AdcP$__nesc_unnamed4360 



Atm128AdcP$nextF;

static inline error_t Atm128AdcP$Init$init(void );
#line 104
static inline error_t Atm128AdcP$AsyncStdControl$start(void );




static inline error_t Atm128AdcP$AsyncStdControl$stop(void );









static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
#line 184
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 208
static inline bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 242
static inline bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 147 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
# 44 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP$McuPowerState$update(void );
# 40 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void );


static inline uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void );



static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x);


static inline void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x);
#line 69
static inline void HplAtm128AdcP$HplAtm128Adc$enableAdc(void );



static inline void HplAtm128AdcP$HplAtm128Adc$disableAdc(void );




static inline void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void );
#line 99
void __vector_21(void ) __attribute((signal))   ;








static inline bool HplAtm128AdcP$HplAtm128Adc$cancel(void );
# 39 "/opt/tinyos-2.1.0/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$__nesc_unnamed4361 {
  RoundRobinResourceQueueC$0$NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC$0$SIZE = 2U ? (2U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void );
#line 87
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 55 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a8a230);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(
# 55 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a8a230);
# 55 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a885e0);
# 49 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a885e0);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void );
# 73 "/opt/tinyos-2.1.0/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void );
#line 81
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(
# 54 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
uint8_t arg_0x40a8b7d8);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void );
# 75 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4362 {
#line 75
  ArbiterP$0$grantedTask = 15U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4363 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4364 {
#line 68
  ArbiterP$0$default_owner_id = 2U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4365 {
#line 69
  ArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;



static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 90
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 108
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 129
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
#line 186
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
#line 198
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);









static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 52 "/opt/tinyos-2.1.0/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release(void );
# 74 "/opt/tinyos-2.1.0/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void );
# 59 "/opt/tinyos-2.1.0/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
static void AdcP$Read$readDone(
# 48 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae40c8, 
# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
error_t result, AdcP$Read$val_t val);
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
static void AdcP$ReadNow$readDone(
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae3088, 
# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
error_t result, AdcP$ReadNow$val_t val);
# 32 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getRefVoltage(
# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae25c0);
# 25 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getChannel(
# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae25c0);
# 39 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getPrescaler(
# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ae25c0);
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t AdcP$acquiredData$postTask(void );
# 103 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
enum AdcP$__nesc_unnamed4366 {
#line 103
  AdcP$acquiredData = 16U
};
#line 103
typedef int AdcP$__nesc_sillytask_acquiredData[AdcP$acquiredData];
#line 57
enum AdcP$__nesc_unnamed4367 {
  AdcP$IDLE, 
  AdcP$ACQUIRE_DATA, 
  AdcP$ACQUIRE_DATA_NOW
};




uint8_t AdcP$state;
uint8_t AdcP$client;
uint16_t AdcP$val;

static inline uint8_t AdcP$channel(void );



static inline uint8_t AdcP$refVoltage(void );



static inline uint8_t AdcP$prescaler(void );



static void AdcP$sample(void );



static inline error_t AdcP$startGet(uint8_t newState, uint8_t newClient);








static inline error_t AdcP$Read$read(uint8_t c);



static inline error_t AdcP$ReadNow$read(uint8_t c);



static inline void AdcP$acquiredData$runTask(void );




static inline void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
#line 137
static inline uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c);



static inline uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c);



static inline uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c);




static inline void AdcP$ReadNow$default$readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(
# 24 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40af20c8, 
# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(
# 26 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40af00e8);
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(
# 27 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40aef010);







static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data);







static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data);
# 41 "/opt/tinyos-2.1.0/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed;


static inline error_t RandomMlcgC$Init$init(void );






static inline error_t RandomMlcgC$SeedInit$init(uint16_t s);






static uint32_t RandomMlcgC$Random$rand32(void );
#line 78
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4368 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer$overflow(void );
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Timer$get(void );
#line 76
static inline void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x);
#line 94
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void );
#line 122
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static inline uint8_t HplAtm128Timer0AsyncP$Compare$get(void );


static inline void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void );
#line 155
static inline mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void );
#line 178
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 198
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 98 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 63 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4369 {
#line 63
  AlarmToTimerC$0$fired = 17U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 125 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40bcd9f0);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4370 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 18U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4371 {

  VirtualizeTimerC$0$NUM_TIMERS = 5, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4372 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num);
#line 178
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.1.0/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 51 "/opt/tinyos-2.1.0/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 82
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
#line 95
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 44 "/opt/tinyos-2.1.0/tos/platforms/mica/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC$BusyWait$wait(uint16_t dt);
# 34 "/opt/tinyos-2.1.0/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP$Atm128AdcConfig$getChannel(void );





static inline uint8_t VoltageP$Atm128AdcConfig$getRefVoltage(void );




static inline uint8_t VoltageP$Atm128AdcConfig$getPrescaler(void );
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
static void /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.0/tos/system/AMQueueEntryP.nc"
static error_t /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);







static inline void */*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$getPayload(message_t *m, uint8_t len);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(
# 40 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40804490, 
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$getPayload(
# 40 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40804490, 
# 121 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(
# 38 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
uint8_t arg_0x408059d8, 
# 85 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask(void );
# 67 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4373 {
#line 118
  AMQueueImplP$1$CancelTask = 19U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4374 {
#line 161
  AMQueueImplP$1$errorTask = 20U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4375 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket(void );
#line 82
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void );
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void );
#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 203
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 86 "/opt/tinyos-2.1.0/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 86
{
   __asm volatile ("cli");}

#line 103
#line 102
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 112
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 70 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$writeByte(uint8_t data)
#line 70
{
  /* atomic removed: atomic calls only */
#line 71
  HplCC1000SpiP$outgoingByte = data;
}

# 45 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$writeByte(uint8_t data){
#line 45
  HplCC1000SpiP$HplCC1000Spi$writeByte(data);
#line 45
}
#line 45
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 2);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiMosi$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput();
#line 33
}
#line 33
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiMiso$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput();
#line 33
}
#line 33
# 110 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$rxMode(void )
#line 110
{
  HplCC1000SpiP$SpiMiso$makeInput();
  HplCC1000SpiP$SpiMosi$makeInput();
}

# 84 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$rxMode(void ){
#line 84
  HplCC1000SpiP$HplCC1000Spi$rxMode();
#line 84
}
#line 84
# 78 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000SendReceiveP$CC1000Control$rxMode(void ){
#line 78
  CC1000ControlP$CC1000Control$rxMode();
#line 78
}
#line 78
# 537 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$ackData(uint8_t in)
#line 537
{
  if (++CC1000SendReceiveP$count >= CC1000SendReceiveP$ACK_LENGTH) 
    {
      CC1000SendReceiveP$CC1000Control$rxMode();
      CC1000SendReceiveP$HplCC1000Spi$rxMode();
      CC1000SendReceiveP$packetReceiveDone();
    }
  else {
#line 544
    if (CC1000SendReceiveP$count >= CC1000SendReceiveP$ACK_LENGTH - sizeof CC1000SendReceiveP$ackCode) {
      CC1000SendReceiveP$HplCC1000Spi$writeByte(__extension__ ({
#line 545
        uint16_t __addr16 = (uint16_t )(uint16_t )&CC1000SendReceiveP$ackCode[CC1000SendReceiveP$count + sizeof CC1000SendReceiveP$ackCode - CC1000SendReceiveP$ACK_LENGTH];
#line 545
        uint8_t __result;

#line 545
         __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
      }
      ));
      }
    }
}

# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

#line 264
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}








static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiMosi$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 3;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiMiso$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeOutput();
#line 35
}
#line 35
# 105 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$txMode(void )
#line 105
{
  HplCC1000SpiP$SpiMiso$makeOutput();
  HplCC1000SpiP$SpiMosi$makeOutput();
}

# 79 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$txMode(void ){
#line 79
  HplCC1000SpiP$HplCC1000Spi$txMode();
#line 79
}
#line 79
# 73 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000SendReceiveP$CC1000Control$txMode(void ){
#line 73
  CC1000ControlP$CC1000Control$txMode();
#line 73
}
#line 73
# 181 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterAckState(void )
#line 181
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$SENDING_ACK;
  CC1000SendReceiveP$count = 0;
}

#line 73
inline static am_addr_t CC1000SendReceiveP$amAddress(void ){
#line 73
  unsigned short result;
#line 73

#line 73
  result = ActiveMessageAddressC$amAddress();
#line 73

#line 73
  return result;
#line 73
}
#line 73
#line 135
static inline cc1000_header_t * CC1000SendReceiveP$getHeader(message_t * amsg)
#line 135
{
  return (cc1000_header_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->data - sizeof(cc1000_header_t ));
}

static inline cc1000_footer_t *CC1000SendReceiveP$getFooter(message_t * amsg)
#line 139
{
  return (cc1000_footer_t *)amsg->footer;
}

#line 517
static inline void CC1000SendReceiveP$packetReceived(void )
#line 517
{
  cc1000_footer_t *rxFooter = CC1000SendReceiveP$getFooter(CC1000SendReceiveP$rxBufPtr);
  cc1000_header_t *rxHeader = CC1000SendReceiveP$getHeader(CC1000SendReceiveP$rxBufPtr);


  __nesc_hton_leuint16(rxFooter->crc.data, __nesc_ntoh_leuint16(rxFooter->crc.data) == CC1000SendReceiveP$runningCrc);


  if (
#line 524
  CC1000SendReceiveP$f.ack && __nesc_ntoh_leuint16(
  rxFooter->crc.data) && __nesc_ntoh_uint16(
  rxHeader->dest.data) == CC1000SendReceiveP$amAddress()) 
    {
      CC1000SendReceiveP$enterAckState();
      CC1000SendReceiveP$CC1000Control$txMode();
      CC1000SendReceiveP$HplCC1000Spi$txMode();
      CC1000SendReceiveP$HplCC1000Spi$writeByte(0xaa);
    }
  else {
    CC1000SendReceiveP$packetReceiveDone();
    }
}

# 95 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP$ByteRadio$rxDone(void ){
#line 95
  CC1000CsmaP$ByteRadio$rxDone();
#line 95
}
#line 95
# 158 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterListenState(void )
#line 158
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$LISTEN_STATE;
  CC1000SendReceiveP$count = 0;
}

#line 485
static inline void CC1000SendReceiveP$rxData(uint8_t in)
#line 485
{
  uint8_t nextByte;
  cc1000_header_t *rxHeader = CC1000SendReceiveP$getHeader(CC1000SendReceiveP$rxBufPtr);
  uint8_t rxLength = __nesc_ntoh_uint8(rxHeader->length.data);


  if (rxLength > 28) 
    {

      CC1000SendReceiveP$enterListenState();
      CC1000SendReceiveP$ByteRadio$rxDone();
      return;
    }

  CC1000SendReceiveP$rxShiftBuf = (CC1000SendReceiveP$rxShiftBuf << 8) | in;
  nextByte = CC1000SendReceiveP$rxShiftBuf >> CC1000SendReceiveP$f.rxBitOffset;
  ((uint8_t * )CC1000SendReceiveP$rxBufPtr)[CC1000SendReceiveP$count++] = nextByte;


  rxLength += (unsigned short )& ((message_t *)0)->data;
  if (CC1000SendReceiveP$count <= rxLength) {
    CC1000SendReceiveP$runningCrc = crcByte(CC1000SendReceiveP$runningCrc, nextByte);
    }

  if (CC1000SendReceiveP$count == rxLength) {
      CC1000SendReceiveP$count = (unsigned short )& ((message_t *)0)->footer + (unsigned short )& ((cc1000_footer_t *)0)->crc;
    }

  if (CC1000SendReceiveP$count == (unsigned short )& ((message_t *)0)->footer + sizeof(cc1000_footer_t )) {
    CC1000SendReceiveP$packetReceived();
    }
}

# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
inline static error_t CC1000SendReceiveP$RssiRx$read(void ){
#line 58
  unsigned char result;
#line 58

#line 58
  result = CC1000RssiP$Rssi$read(0U);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 684 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$RadioTimeStamping$default$receivedSFD(uint16_t time)
#line 684
{
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/RadioTimeStamping.nc"
inline static void CC1000SendReceiveP$RadioTimeStamping$receivedSFD(uint16_t time){
#line 51
  CC1000SendReceiveP$RadioTimeStamping$default$receivedSFD(time);
#line 51
}
#line 51
# 66 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP$cancel(void )
#line 66
{
  if (CC1000RssiP$currentOp != CC1000RssiP$IDLE) {
    CC1000RssiP$currentOp = CC1000RssiP$CANCELLED;
    }
}

# 76 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
inline static void CC1000CsmaP$cancelRssi(void ){
#line 76
  CC1000RssiP$cancel();
#line 76
}
#line 76
#line 139
static inline void CC1000CsmaP$enterRxState(void )
#line 139
{
  CC1000CsmaP$cancelRssi();
  CC1000CsmaP$radioState = CC1000CsmaP$RX_STATE;
}

#line 426
static inline void CC1000CsmaP$ByteRadio$rx(void )
#line 426
{
  CC1000CsmaP$enterRxState();
}

# 90 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP$ByteRadio$rx(void ){
#line 90
  CC1000CsmaP$ByteRadio$rx();
#line 90
}
#line 90
# 240 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 169 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterRxState(void )
#line 169
{
  cc1000_header_t *header = CC1000SendReceiveP$getHeader(CC1000SendReceiveP$rxBufPtr);

#line 171
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$RX_STATE;
  __nesc_hton_uint8(header->length.data, sizeof  CC1000SendReceiveP$rxBufPtr->data);
  CC1000SendReceiveP$count = sizeof(message_header_t ) - sizeof(cc1000_header_t );
  CC1000SendReceiveP$runningCrc = 0;
}

#line 428
static inline void CC1000SendReceiveP$syncData(uint8_t in)
#line 428
{








  if (in == 0xaa || in == 0x55) {




    CC1000SendReceiveP$rxShiftBuf = in << 8;
    }
  else {
#line 443
    if (CC1000SendReceiveP$count++ == 0) {
      CC1000SendReceiveP$rxShiftBuf |= in;
      }
    else {
#line 445
      if (CC1000SendReceiveP$count <= 6) 
        {

          uint16_t tmp;
          uint8_t i;


          tmp = CC1000SendReceiveP$rxShiftBuf;
          CC1000SendReceiveP$rxShiftBuf = (CC1000SendReceiveP$rxShiftBuf << 8) | in;

          for (i = 0; i < 8; i++) 
            {
              tmp <<= 1;
              if (in & 0x80) {
                tmp |= 0x1;
                }
#line 460
              in <<= 1;

              if (tmp == CC1000SendReceiveP$SYNC_WORD) 
                {
                  CC1000SendReceiveP$enterRxState();
                  CC1000SendReceiveP$ByteRadio$rx();
                  CC1000SendReceiveP$f.rxBitOffset = 7 - i;
                  CC1000SendReceiveP$RadioTimeStamping$receivedSFD(0);
                  CC1000SendReceiveP$RssiRx$read();
                }
            }
        }
      else {
        CC1000SendReceiveP$enterListenState();
        }
      }
    }
}

# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP$RssiCheckChannel$read(void ){
#line 58
  unsigned char result;
#line 58

#line 58
  result = CC1000RssiP$Rssi$read(2U);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 621 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline message_t *CC1000SendReceiveP$ByteRadio$getTxMessage(void )
#line 621
{
  return CC1000SendReceiveP$txBufPtr;
}

# 39 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static message_t *CC1000CsmaP$ByteRadio$getTxMessage(void ){
#line 39
  nx_struct message_t *result;
#line 39

#line 39
  result = CC1000SendReceiveP$ByteRadio$getTxMessage();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 78 "/opt/tinyos-2.1.0/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 41 "/opt/tinyos-2.1.0/tos/interfaces/Random.nc"
inline static uint16_t CC1000CsmaP$Random$rand16(void ){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 479 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline uint16_t CC1000CsmaP$CsmaBackoff$default$congestion(message_t *m)
#line 479
{
  return (CC1000CsmaP$Random$rand16() & 0xF) + 1;
}

# 45 "/opt/tinyos-2.1.0/tos/interfaces/CsmaBackoff.nc"
inline static uint16_t CC1000CsmaP$CsmaBackoff$congestion(message_t * m){
#line 45
  unsigned short result;
#line 45

#line 45
  result = CC1000CsmaP$CsmaBackoff$default$congestion(m);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 379 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$congestion(void )
#line 379
{
  CC1000CsmaP$macDelay = CC1000CsmaP$CsmaBackoff$congestion(CC1000CsmaP$ByteRadio$getTxMessage());
}

static inline void CC1000CsmaP$ByteRadio$idleByte(bool preamble)
#line 383
{
  if (CC1000CsmaP$f.txPending) 
    {
      if (! CC1000CsmaP$f.ccaOff && preamble) {
        CC1000CsmaP$congestion();
        }
      else {
#line 388
        if (CC1000CsmaP$macDelay && ! --CC1000CsmaP$macDelay) 
          {
            CC1000CsmaP$cancelRssi();
            CC1000CsmaP$count = 0;
            CC1000CsmaP$RssiCheckChannel$read();
          }
        }
    }
}

# 74 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP$ByteRadio$idleByte(bool preamble){
#line 74
  CC1000CsmaP$ByteRadio$idleByte(preamble);
#line 74
}
#line 74
# 163 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterSyncState(void )
#line 163
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$SYNC_STATE;
  CC1000SendReceiveP$count = 0;
  CC1000SendReceiveP$rxShiftBuf = 0;
}

#line 412
static inline void CC1000SendReceiveP$listenData(uint8_t in)
#line 412
{
  bool preamble = in == 0xaa || in == 0x55;


  if (preamble) 
    {
      CC1000SendReceiveP$count++;
      if (CC1000SendReceiveP$count > CC1K_ValidPrecursor) {
        CC1000SendReceiveP$enterSyncState();
        }
    }
  else {
#line 423
    CC1000SendReceiveP$count = 0;
    }
  CC1000SendReceiveP$ByteRadio$idleByte(preamble);
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP$setWakeupTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC1000CsmaP$setWakeupTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 114 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$enterIdleState(void )
#line 114
{
  CC1000CsmaP$cancelRssi();
  CC1000CsmaP$radioState = CC1000CsmaP$IDLE_STATE;
}

static inline void CC1000CsmaP$enterIdleStateSetWakeup(void )
#line 119
{
  CC1000CsmaP$enterIdleState();
  CC1000CsmaP$setWakeupTask$postTask();
}

#line 374
static inline void CC1000CsmaP$ByteRadio$sendDone(void )
#line 374
{
  CC1000CsmaP$f.txPending = FALSE;
  CC1000CsmaP$enterIdleStateSetWakeup();
}

# 44 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP$ByteRadio$sendDone(void ){
#line 44
  CC1000CsmaP$ByteRadio$sendDone();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000SendReceiveP$signalPacketSent$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC1000SendReceiveP$signalPacketSent);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 389 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$txDone(void )
#line 389
{
  CC1000SendReceiveP$signalPacketSent$postTask();
  CC1000SendReceiveP$ByteRadio$sendDone();
}

#line 225
static inline void CC1000SendReceiveP$enterTxDoneState(void )
#line 225
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXDONE_STATE;
}

#line 143
static inline cc1000_metadata_t * CC1000SendReceiveP$getMetadata(message_t * amsg)
#line 143
{
  return (cc1000_metadata_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->footer + sizeof(cc1000_footer_t ));
}

#line 284
static inline void CC1000SendReceiveP$sendNextByte(void )
#line 284
{
  CC1000SendReceiveP$HplCC1000Spi$writeByte(CC1000SendReceiveP$nextTxByte);
  CC1000SendReceiveP$count++;
}

#line 351
static inline void CC1000SendReceiveP$txReadAck(uint8_t in)
#line 351
{
  unsigned char *__nesc_temp87;
  unsigned char *__nesc_temp86;
#line 352
  uint8_t i;

  CC1000SendReceiveP$sendNextByte();

  for (i = 0; i < 8; i++) 
    {
      CC1000SendReceiveP$rxShiftBuf <<= 1;
      if (in & 0x80) {
        CC1000SendReceiveP$rxShiftBuf |= 0x1;
        }
#line 361
      in <<= 1;

      if (CC1000SendReceiveP$rxShiftBuf == CC1000SendReceiveP$ACK_WORD) 
        {
          (__nesc_temp86 = CC1000SendReceiveP$getMetadata(CC1000SendReceiveP$txBufPtr)->metadataBits.data, __nesc_hton_uint8(__nesc_temp86, __nesc_ntoh_uint8(__nesc_temp86) | CC1000_ACK_BIT));
          CC1000SendReceiveP$enterTxDoneState();
          return;
        }
    }
  if (CC1000SendReceiveP$count >= CC1000SendReceiveP$MAX_ACK_WAIT) 
    {
      (__nesc_temp87 = CC1000SendReceiveP$getMetadata(CC1000SendReceiveP$txBufPtr)->metadataBits.data, __nesc_hton_uint8(__nesc_temp87, __nesc_ntoh_uint8(__nesc_temp87) & ~CC1000_ACK_BIT));
      CC1000SendReceiveP$enterTxDoneState();
    }
}

#line 219
static inline void CC1000SendReceiveP$enterTxReadAckState(void )
#line 219
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXREADACK_STATE;
  CC1000SendReceiveP$rxShiftBuf = 0;
  CC1000SendReceiveP$count = 0;
}

#line 340
static inline void CC1000SendReceiveP$txWaitForAck(void )
#line 340
{
  CC1000SendReceiveP$sendNextByte();
  if (CC1000SendReceiveP$count == 1) 
    {
      CC1000SendReceiveP$HplCC1000Spi$rxMode();
      CC1000SendReceiveP$CC1000Control$rxMode();
    }
  else {
#line 347
    if (CC1000SendReceiveP$count > 3) {
      CC1000SendReceiveP$enterTxReadAckState();
      }
    }
}

#line 214
static inline void CC1000SendReceiveP$enterTxWaitForAckState(void )
#line 214
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXWAITFORACK_STATE;
  CC1000SendReceiveP$count = 0;
}

#line 327
static inline void CC1000SendReceiveP$txFlush(void )
#line 327
{
  CC1000SendReceiveP$sendNextByte();
  if (CC1000SendReceiveP$count > 3) {
    if (CC1000SendReceiveP$f.ack) {
      CC1000SendReceiveP$enterTxWaitForAckState();
      }
    else {
        CC1000SendReceiveP$HplCC1000Spi$rxMode();
        CC1000SendReceiveP$CC1000Control$rxMode();
        CC1000SendReceiveP$enterTxDoneState();
      }
    }
}

#line 209
static inline void CC1000SendReceiveP$enterTxFlushState(void )
#line 209
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXFLUSH_STATE;
  CC1000SendReceiveP$count = 0;
}

#line 321
static inline void CC1000SendReceiveP$txCrc(void )
#line 321
{
  CC1000SendReceiveP$sendNextByte();
  CC1000SendReceiveP$nextTxByte = CC1000SendReceiveP$runningCrc >> 8;
  CC1000SendReceiveP$enterTxFlushState();
}

#line 205
static inline void CC1000SendReceiveP$enterTxCrcState(void )
#line 205
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXCRC_STATE;
}

#line 305
static inline void CC1000SendReceiveP$txData(void )
#line 305
{
  cc1000_header_t *txHeader = CC1000SendReceiveP$getHeader(CC1000SendReceiveP$txBufPtr);

#line 307
  CC1000SendReceiveP$sendNextByte();

  if (CC1000SendReceiveP$count < __nesc_ntoh_uint8(txHeader->length.data) + sizeof(message_header_t )) 
    {
      CC1000SendReceiveP$nextTxByte = ((uint8_t *)CC1000SendReceiveP$txBufPtr)[CC1000SendReceiveP$count];
      CC1000SendReceiveP$runningCrc = crcByte(CC1000SendReceiveP$runningCrc, CC1000SendReceiveP$nextTxByte);
    }
  else 
    {
      CC1000SendReceiveP$nextTxByte = CC1000SendReceiveP$runningCrc;
      CC1000SendReceiveP$enterTxCrcState();
    }
}

#line 683
static inline void CC1000SendReceiveP$RadioTimeStamping$default$transmittedSFD(uint16_t time, message_t *msgBuff)
#line 683
{
}

# 40 "/opt/tinyos-2.1.0/tos/interfaces/RadioTimeStamping.nc"
inline static void CC1000SendReceiveP$RadioTimeStamping$transmittedSFD(uint16_t time, message_t * p_msg){
#line 40
  CC1000SendReceiveP$RadioTimeStamping$default$transmittedSFD(time, p_msg);
#line 40
}
#line 40
# 197 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterTxDataState(void )
#line 197
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXDATA_STATE;



  CC1000SendReceiveP$count = sizeof(message_header_t ) - sizeof(cc1000_header_t ) - 1;
}

#line 298
static inline void CC1000SendReceiveP$txSync(void )
#line 298
{
  CC1000SendReceiveP$sendNextByte();
  CC1000SendReceiveP$nextTxByte = CC1000SendReceiveP$SYNC_BYTE2;
  CC1000SendReceiveP$enterTxDataState();
  CC1000SendReceiveP$RadioTimeStamping$transmittedSFD(0, CC1000SendReceiveP$txBufPtr);
}

#line 193
static inline void CC1000SendReceiveP$enterTxSyncState(void )
#line 193
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXSYNC_STATE;
}

#line 289
static inline void CC1000SendReceiveP$txPreamble(void )
#line 289
{
  CC1000SendReceiveP$sendNextByte();
  if (CC1000SendReceiveP$count >= CC1000SendReceiveP$preambleLength) 
    {
      CC1000SendReceiveP$nextTxByte = CC1000SendReceiveP$SYNC_BYTE1;
      CC1000SendReceiveP$enterTxSyncState();
    }
}

#line 587
static inline void CC1000SendReceiveP$HplCC1000Spi$dataReady(uint8_t data)
#line 587
{
  if (CC1000SendReceiveP$f.invert) {
    data = ~data;
    }
  switch (CC1000SendReceiveP$radioState) 
    {
      default: break;
      case CC1000SendReceiveP$TXPREAMBLE_STATE: CC1000SendReceiveP$txPreamble();
#line 594
      break;
      case CC1000SendReceiveP$TXSYNC_STATE: CC1000SendReceiveP$txSync();
#line 595
      break;
      case CC1000SendReceiveP$TXDATA_STATE: CC1000SendReceiveP$txData();
#line 596
      break;
      case CC1000SendReceiveP$TXCRC_STATE: CC1000SendReceiveP$txCrc();
#line 597
      break;
      case CC1000SendReceiveP$TXFLUSH_STATE: CC1000SendReceiveP$txFlush();
#line 598
      break;
      case CC1000SendReceiveP$TXWAITFORACK_STATE: CC1000SendReceiveP$txWaitForAck();
#line 599
      break;
      case CC1000SendReceiveP$TXREADACK_STATE: CC1000SendReceiveP$txReadAck(data);
#line 600
      break;
      case CC1000SendReceiveP$TXDONE_STATE: CC1000SendReceiveP$txDone();
#line 601
      break;

      case CC1000SendReceiveP$LISTEN_STATE: CC1000SendReceiveP$listenData(data);
#line 603
      break;
      case CC1000SendReceiveP$SYNC_STATE: CC1000SendReceiveP$syncData(data);
#line 604
      break;
      case CC1000SendReceiveP$RX_STATE: CC1000SendReceiveP$rxData(data);
#line 605
      break;
      case CC1000SendReceiveP$SENDING_ACK: CC1000SendReceiveP$ackData(data);
#line 606
      break;
    }
}

# 92 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void HplCC1000SpiP$HplCC1000Spi$dataReady(uint8_t data){
#line 92
  CC1000SendReceiveP$HplCC1000Spi$dataReady(data);
#line 92
}
#line 92
# 86 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 212 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 212
{
}

# 49 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x40a885e0){
#line 49
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x40a885e0);
#line 49
}
#line 49
# 56 "/opt/tinyos-2.1.0/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 110 "/opt/tinyos-2.1.0/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC$McuPowerState$update(void )
#line 110
{
}

# 44 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 69 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$enableAdc(void )
#line 69
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP$McuPowerState$update();
}

# 73 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$enableAdc(void ){
#line 73
  HplAtm128AdcP$HplAtm128Adc$enableAdc();
#line 73
}
#line 73
# 104 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$AsyncStdControl$start(void )
#line 104
{
  /* atomic removed: atomic calls only */
#line 105
  Atm128AdcP$HplAtm128Adc$enableAdc();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.0/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = Atm128AdcP$AsyncStdControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 64 "/opt/tinyos-2.1.0/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested(void )
#line 64
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release();
}

# 81 "/opt/tinyos-2.1.0/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested(void ){
#line 81
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested();
#line 81
}
#line 81
# 202 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 202
{
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x40a8a230){
#line 51
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x40a8a230);
#line 51
}
#line 51
# 90 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 90
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 92
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING;
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 97
        FAIL;

#line 97
        return __nesc_temp;
      }
  }
#line 99
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested();
  if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId == id) {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 104
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
  return FAIL;
}

# 87 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP$Resource$immediateRequest(void ){
#line 87
  unsigned char result;
#line 87

#line 87
  result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$immediateRequest(/*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$HAL_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 51 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x)
#line 51
{
#line 51
  union __nesc_unnamed4376 {
#line 51
    Atm128Adcsra_t f;
#line 51
    uint8_t t;
  } 
#line 51
  c = { .f = x };

#line 51
  return c.t;
}




static inline void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x)
#line 57
{
  * (volatile uint8_t *)(0x06 + 0x20) = HplAtm128AdcP$Adcsra2int(x);
}

# 60 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t adcsra){
#line 60
  HplAtm128AdcP$HplAtm128Adc$setAdcsra(adcsra);
#line 60
}
#line 60
# 103 "/opt/tinyos-2.1.0/tos/platforms/mica/MeasureClockC.nc"
static inline uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void )
#line 103
{

  if (MeasureClockC$cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 107
  if (MeasureClockC$cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 109
  if (MeasureClockC$cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 111
  if (MeasureClockC$cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 113
  if (MeasureClockC$cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 115
  if (MeasureClockC$cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 117
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void ){
#line 53
  unsigned char result;
#line 53

#line 53
  result = MeasureClockC$Atm128Calibrate$adcPrescaler();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x)
#line 50
{
#line 50
  union __nesc_unnamed4377 {
#line 50
    Atm128Admux_t f;
#line 50
    uint8_t t;
  } 
#line 50
  c = { .f = x };

#line 50
  return c.t;
}


static inline void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x)
#line 54
{
  * (volatile uint8_t *)(0x07 + 0x20) = HplAtm128AdcP$Admux2int(x);
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t admux){
#line 49
  HplAtm128AdcP$HplAtm128Adc$setAdmux(admux);
#line 49
}
#line 49
# 119 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 119
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 40 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void )
#line 40
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void ){
#line 44
  struct __nesc_unnamed4251 result;
#line 44

#line 44
  result = HplAtm128AdcP$HplAtm128Adc$getAdmux();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 184 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 184
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP$HplAtm128Adc$getAdmux();
  Atm128AdcP$f.precise = Atm128AdcP$isPrecise(admux, channel, refVoltage);
  Atm128AdcP$f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP$HplAtm128Adc$setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adfr = Atm128AdcP$f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP$Atm128Calibrate$adcPrescaler();
    }
#line 204
  adcsr.adps = prescaler;
  Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
}

static inline bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 209
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP$f.multiple = FALSE;
      Atm128AdcP$getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 215
        Atm128AdcP$f.precise;

        {
#line 215
          __nesc_atomic_end(__nesc_atomic); 
#line 215
          return __nesc_temp;
        }
      }
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 61
  unsigned char result;
#line 61

#line 61
  result = Atm128AdcP$Atm128AdcSingle$getData(channel, refVoltage, leftJustify, prescaler);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 195 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P$RssiConfig$getChannel(void )
#line 195
{
  return CHANNEL_RSSI;
}

# 34 "/opt/tinyos-2.1.0/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP$Atm128AdcConfig$getChannel(void )
{

  return ATM128_ADC_SNGL_1_23;
}

# 137 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP$Atm128AdcConfig$getChannel(uint8_t arg_0x40ae25c0){
#line 25
  unsigned char result;
#line 25

#line 25
  switch (arg_0x40ae25c0) {
#line 25
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$ID:
#line 25
      result = HplCC1000P$RssiConfig$getChannel();
#line 25
      break;
#line 25
    case /*proj1AppC.Sensor.Sensor.AdcReadClientC*/AdcReadClientC$0$ID:
#line 25
      result = VoltageP$Atm128AdcConfig$getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      result = AdcP$Atm128AdcConfig$default$getChannel(arg_0x40ae25c0);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return result;
#line 25
}
#line 25
# 70 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$channel(void )
#line 70
{
  return AdcP$Atm128AdcConfig$getChannel(AdcP$client);
}

# 199 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P$RssiConfig$getRefVoltage(void )
#line 199
{
  return ATM128_ADC_VREF_OFF;
}

# 40 "/opt/tinyos-2.1.0/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP$Atm128AdcConfig$getRefVoltage(void )
{
  return ATM128_ADC_VREF_OFF;
}

# 141 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP$Atm128AdcConfig$getRefVoltage(uint8_t arg_0x40ae25c0){
#line 32
  unsigned char result;
#line 32

#line 32
  switch (arg_0x40ae25c0) {
#line 32
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$ID:
#line 32
      result = HplCC1000P$RssiConfig$getRefVoltage();
#line 32
      break;
#line 32
    case /*proj1AppC.Sensor.Sensor.AdcReadClientC*/AdcReadClientC$0$ID:
#line 32
      result = VoltageP$Atm128AdcConfig$getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      result = AdcP$Atm128AdcConfig$default$getRefVoltage(arg_0x40ae25c0);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 74 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$refVoltage(void )
#line 74
{
  return AdcP$Atm128AdcConfig$getRefVoltage(AdcP$client);
}

# 203 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P$RssiConfig$getPrescaler(void )
#line 203
{
  return ATM128_ADC_PRESCALE;
}

# 45 "/opt/tinyos-2.1.0/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP$Atm128AdcConfig$getPrescaler(void )
{
  return ATM128_ADC_PRESCALE;
}

# 145 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP$Atm128AdcConfig$getPrescaler(uint8_t arg_0x40ae25c0){
#line 39
  unsigned char result;
#line 39

#line 39
  switch (arg_0x40ae25c0) {
#line 39
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$ID:
#line 39
      result = HplCC1000P$RssiConfig$getPrescaler();
#line 39
      break;
#line 39
    case /*proj1AppC.Sensor.Sensor.AdcReadClientC*/AdcReadClientC$0$ID:
#line 39
      result = VoltageP$Atm128AdcConfig$getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      result = AdcP$Atm128AdcConfig$default$getPrescaler(arg_0x40ae25c0);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 78 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$prescaler(void )
#line 78
{
  return AdcP$Atm128AdcConfig$getPrescaler(AdcP$client);
}

# 59 "/opt/tinyos-2.1.0/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void )
#line 59
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release();
}

# 73 "/opt/tinyos-2.1.0/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested();
#line 73
}
#line 73
# 87 "/opt/tinyos-2.1.0/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id)
#line 87
{
  /* atomic removed: atomic calls only */
#line 88
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      EBUSY;

#line 93
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.1.0/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(id);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 200 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 200
{
}

# 43 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x40a8a230){
#line 43
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x40a8a230);
#line 43
}
#line 43
# 77 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 84
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(id);

#line 84
        return __nesc_temp;
      }
  }
#line 86
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested();
  return SUCCESS;
}

# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP$Resource$request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(/*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$HAL_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 91 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SquelchP.nc"
static inline uint16_t CC1000SquelchP$CC1000Squelch$get(void )
#line 91
{
  return CC1000SquelchP$clearThreshold;
}

# 46 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Squelch.nc"
inline static uint16_t CC1000SendReceiveP$CC1000Squelch$get(void ){
#line 46
  unsigned short result;
#line 46

#line 46
  result = CC1000SquelchP$CC1000Squelch$get();
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000SendReceiveP$signalPacketReceived$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC1000SendReceiveP$signalPacketReceived);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 177 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterReceivedState(void )
#line 177
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$RECEIVED_STATE;
}

# 113 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$Scheduler$init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/opt/tinyos-2.1.0/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$init(void ){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 42 "/opt/tinyos-2.1.0/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 58 "/opt/tinyos-2.1.0/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 7);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$OC1C$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput();
#line 33
}
#line 33
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 1);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiSck$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput();
#line 33
}
#line 33
# 55 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline error_t HplCC1000SpiP$PlatformInit$init(void )
#line 55
{
  HplCC1000SpiP$SpiSck$makeInput();
  HplCC1000SpiP$OC1C$makeInput();
  HplCC1000SpiP$HplCC1000Spi$rxMode();
  return SUCCESS;
}

# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )50U |= 1 << 6;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PCLK$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )50U |= 1 << 7;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )50U |= 1 << 4;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PALE$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )49U |= 1 << 7;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )49U |= 1 << 6;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PCLK$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )49U |= 1 << 4;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PALE$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )58U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$CHP_OUT$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput();
#line 33
}
#line 33
# 57 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline error_t HplCC1000P$PlatformInit$init(void )
#line 57
{
  HplCC1000P$CHP_OUT$makeInput();
  HplCC1000P$PALE$makeOutput();
  HplCC1000P$PCLK$makeOutput();
  HplCC1000P$PDATA$makeOutput();
  HplCC1000P$PALE$set();
  HplCC1000P$PDATA$set();
  HplCC1000P$PCLK$set();


  HplCC1000P$HplCC1000$write(CC1K_MAIN, (((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_CORE_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
  HplCC1000P$HplCC1000$write(CC1K_PA_POW, 0);
  return SUCCESS;
}

# 79 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 79
{
#line 79
  union __nesc_unnamed4378 {
#line 79
    Atm128TimerCtrlCapture_t f;
#line 79
    uint16_t t;
  } 
#line 79
  c = { .f = x };

#line 79
  return c.t;
}





static inline void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128_TCCR3B_t x)
#line 86
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P$TimerCtrlCapture2int(x);
}

#line 69
static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void )
#line 69
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 59
static inline void HplAtm128Timer3P$Timer$setScale(uint8_t s)
#line 59
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P$TimerCtrl$getCtrlCapture();

#line 61
  x.bits.cs = s;
  HplAtm128Timer3P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$setScale(uint8_t scale){
#line 95
  HplAtm128Timer3P$Timer$setScale(scale);
#line 95
}
#line 95
# 127 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$Timer$start(void )
#line 127
{
#line 127
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 69 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$start(void ){
#line 69
  HplAtm128Timer3P$Timer$start();
#line 69
}
#line 69
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$Timer$set(uint16_t t)
#line 50
{
#line 50
  * (volatile uint16_t *)0x88 = t;
}

# 58 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$timer_size t){
#line 58
  HplAtm128Timer3P$Timer$set(t);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$start();
    /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$setScale(2);
  }
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$Init$init(void )
#line 84
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adfr = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = Atm128AdcP$Init$init();
#line 51
  result = ecombine(result, /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 23 "/opt/tinyos-2.1.0/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 23
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.1.0/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = LedsP$Init$init();
#line 51
  result = ecombine(result, MotePlatformP$PlatformInit$init());
#line 51
  result = ecombine(result, HplCC1000P$PlatformInit$init());
#line 51
  result = ecombine(result, HplCC1000SpiP$PlatformInit$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.1.0/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC$MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC$cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC$cycles = (MeasureClockC$cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MeasureClockC$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.1.0/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t RealMainP$PlatformInit$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = PlatformP$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.1.0/tos/interfaces/Scheduler.nc"
inline static bool RealMainP$Scheduler$runNextTask(void ){
#line 54
  unsigned char result;
#line 54

#line 54
  result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 31 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle();
#line 31
}
#line 31
# 73 "/opt/tinyos-2.1.0/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0Toggle(void )
#line 73
{
  LedsP$Led0$toggle();
  ;
#line 75
  ;
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/Leds.nc"
inline static void proj1C$Leds$led0Toggle(void ){
#line 56
  LedsP$Leds$led0Toggle();
#line 56
}
#line 56
# 356 "proj1C.nc"
static inline void proj1C$report_problem(void )
#line 356
{
#line 356
  proj1C$Leds$led0Toggle();
}

# 31 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle();
#line 31
}
#line 31
# 88 "/opt/tinyos-2.1.0/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1Toggle(void )
#line 88
{
  LedsP$Led1$toggle();
  ;
#line 90
  ;
}

# 72 "/opt/tinyos-2.1.0/tos/interfaces/Leds.nc"
inline static void proj1C$Leds$led1Toggle(void ){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 357 "proj1C.nc"
static inline void proj1C$report_sent(void )
#line 357
{
#line 357
  proj1C$Leds$led1Toggle();
}

#line 616
static inline void proj1C$AMSend$sendDone(message_t *msg, error_t error)
#line 616
{
  __nesc_hton_uint8(proj1C$gState.send_busy.data, FALSE);

  if (error == SUCCESS) {
      proj1C$report_sent();
    }
  else 
    {
      proj1C$report_problem();
    }
}

# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static void /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  proj1C$AMSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.0/tos/system/AMQueueEntryP.nc"
static inline void /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(m, err);
}

# 207 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(uint8_t arg_0x408059d8, message_t * msg, error_t error){
#line 89
  switch (arg_0x408059d8) {
#line 89
    case 0U:
#line 89
      /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(arg_0x408059d8, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current, /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg, FAIL);
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(am_id_t arg_0x40804490, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = CC1000ActiveMessageP$AMSend$send(arg_0x40804490, addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 635 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline uint8_t CC1000SendReceiveP$Packet$payloadLength(message_t *msg)
#line 635
{
  cc1000_header_t *header = CC1000SendReceiveP$getHeader(msg);

#line 637
  return __nesc_ntoh_uint8(header->length.data);
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC1000SendReceiveP$Packet$payloadLength(msg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 67 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short result;
#line 67

#line 67
  result = CC1000ActiveMessageP$AMPacket$destination(amsg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 54 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline cc1000_header_t * CC1000ActiveMessageP$getHeader(message_t * amsg)
#line 54
{
  return (cc1000_header_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->data - sizeof(cc1000_header_t ));
}

#line 133
static inline am_id_t CC1000ActiveMessageP$AMPacket$type(message_t *amsg)
#line 133
{
  cc1000_header_t *header = CC1000ActiveMessageP$getHeader(amsg);

#line 135
  return __nesc_ntoh_uint8(header->type.data);
}

# 136 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(message_t * amsg){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC1000ActiveMessageP$AMPacket$type(amsg);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 57 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 1;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask();
        }
    }
}

# 269 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 288
static __inline  int16_t __nesc_hton_int16(void * target, int16_t value)
#line 288
{
#line 288
  __nesc_hton_uint16(target, value);
#line 288
  return value;
}

#line 288
static __inline  int16_t __nesc_ntoh_int16(const void * source)
#line 288
{
#line 288
  return __nesc_ntoh_uint16(source);
}

# 613 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$ByteRadio$setPreambleLength(uint16_t bytes)
#line 613
{
  /* atomic removed: atomic calls only */
#line 614
  CC1000SendReceiveP$preambleLength = bytes;
}

# 50 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP$ByteRadio$setPreambleLength(uint16_t bytes){
#line 50
  CC1000SendReceiveP$ByteRadio$setPreambleLength(bytes);
#line 50
}
#line 50
# 110 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline cc1000_metadata_t * CC1000CsmaP$getMetadata(message_t * amsg)
#line 110
{
  return (cc1000_metadata_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->footer + sizeof(cc1000_footer_t ));
}

#line 557
static inline void CC1000CsmaP$setPreambleLength(message_t * msg)
#line 557
{
  cc1000_metadata_t *meta = CC1000CsmaP$getMetadata(msg);
  uint16_t s;
  uint32_t plen;

  if (__nesc_ntoh_int16(meta->strength_or_preamble.data) >= 0) {
    s = CC1000CsmaP$sleepTime;
    }
  else {
#line 565
    s = -(__nesc_ntoh_int16(meta->strength_or_preamble.data) + 1);
    }
#line 566
  __nesc_hton_int16(meta->strength_or_preamble.data, 0);

  if (s == 0) {
    plen = 6;
    }
  else {
#line 571
    plen = (s * 614UL >> 8) + 22;
    }
#line 572
  CC1000CsmaP$ByteRadio$setPreambleLength(plen);
}

#line 474
static inline uint16_t CC1000CsmaP$CsmaBackoff$default$initial(message_t *m)
#line 474
{

  return (CC1000CsmaP$Random$rand16() & 0x1F) + 1;
}

# 37 "/opt/tinyos-2.1.0/tos/interfaces/CsmaBackoff.nc"
inline static uint16_t CC1000CsmaP$CsmaBackoff$initial(message_t * m){
#line 37
  unsigned short result;
#line 37

#line 37
  result = CC1000CsmaP$CsmaBackoff$default$initial(m);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP$sleepCheck$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC1000CsmaP$sleepCheck);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 358 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$ByteRadio$rts(message_t * msg)
#line 358
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      CC1000CsmaP$f.txPending = TRUE;

      if (CC1000CsmaP$radioState == CC1000CsmaP$POWERDOWN_STATE) {
        CC1000CsmaP$sleepCheck$postTask();
        }
#line 365
      if (! CC1000CsmaP$f.ccaOff) {
        CC1000CsmaP$macDelay = CC1000CsmaP$CsmaBackoff$initial(CC1000CsmaP$ByteRadio$getTxMessage());
        }
      else {
#line 368
        CC1000CsmaP$macDelay = 1;
        }
      CC1000CsmaP$setPreambleLength(msg);
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }
}

# 25 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP$ByteRadio$rts(message_t * msg){
#line 25
  CC1000CsmaP$ByteRadio$rts(msg);
#line 25
}
#line 25
# 253 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP$Send$send(message_t *msg, uint8_t len)
#line 253
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (CC1000SendReceiveP$f.txBusy || CC1000SendReceiveP$radioState == CC1000SendReceiveP$OFF_STATE) 
        {
          unsigned char __nesc_temp = 
#line 257
          FAIL;

          {
#line 257
            __nesc_atomic_end(__nesc_atomic); 
#line 257
            return __nesc_temp;
          }
        }
      else 
#line 258
        {
          cc1000_header_t *header = CC1000SendReceiveP$getHeader(msg);

          CC1000SendReceiveP$f.txBusy = TRUE;
          __nesc_hton_uint8(header->length.data, len);
          CC1000SendReceiveP$txBufPtr = msg;
        }
    }
#line 265
    __nesc_atomic_end(__nesc_atomic); }
  CC1000SendReceiveP$ByteRadio$rts(msg);

  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static error_t CC1000ActiveMessageP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC1000SendReceiveP$Send$send(msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 92 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 222 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 98 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 89 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 94 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void )
#line 94
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 44 "/opt/tinyos-2.1.0/tos/platforms/mica/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC$BusyWait$wait(uint16_t dt)
#line 44
{

  if (dt) {
#line 71
     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 55 "/opt/tinyos-2.1.0/tos/lib/timer/BusyWait.nc"
inline static void CC1000CsmaP$BusyWait$wait(CC1000CsmaP$BusyWait$size_type dt){
#line 55
  BusyWaitMicroC$BusyWait$wait(dt);
#line 55
}
#line 55
# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP$RssiPulseCheck$read(void ){
#line 58
  unsigned char result;
#line 58

#line 58
  result = CC1000RssiP$Rssi$read(3U);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 78 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP$CC1000Control$rxMode(void ){
#line 78
  CC1000ControlP$CC1000Control$rxMode();
#line 78
}
#line 78
# 59 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000.nc"
inline static void CC1000ControlP$CC$write(uint8_t addr, uint8_t data){
#line 59
  HplCC1000P$HplCC1000$write(addr, data);
#line 59
}
#line 59
# 344 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP$CC1000Control$biasOn(void )
#line 344
{
  CC1000ControlP$CC$write(CC1K_MAIN, (((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_RESET_N));
}

# 93 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP$CC1000Control$biasOn(void ){
#line 93
  CC1000ControlP$CC1000Control$biasOn();
#line 93
}
#line 93
# 134 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$enterPulseCheckState(void )
#line 134
{
  CC1000CsmaP$radioState = CC1000CsmaP$PULSECHECK_STATE;
  CC1000CsmaP$count = 0;
}

# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP$RssiNoiseFloor$read(void ){
#line 58
  unsigned char result;
#line 58

#line 58
  result = CC1000RssiP$Rssi$read(1U);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 625 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline bool CC1000SendReceiveP$ByteRadio$syncing(void )
#line 625
{
  return CC1000SendReceiveP$radioState == CC1000SendReceiveP$SYNC_STATE;
}

# 85 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static bool CC1000CsmaP$ByteRadio$syncing(void ){
#line 85
  unsigned char result;
#line 85

#line 85
  result = CC1000SendReceiveP$ByteRadio$syncing();
#line 85

#line 85
  return result;
#line 85
}
#line 85
# 256 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$WakeupTimer$fired(void )
#line 256
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      switch (CC1000CsmaP$radioState) 
        {
          case CC1000CsmaP$IDLE_STATE: 



            if (!CC1000CsmaP$ByteRadio$syncing()) 
              {
                CC1000CsmaP$cancelRssi();
                CC1000CsmaP$RssiNoiseFloor$read();
              }
          break;

          case CC1000CsmaP$POWERDOWN_STATE: 

            CC1000CsmaP$enterPulseCheckState();
          CC1000CsmaP$CC1000Control$biasOn();
          break;

          case CC1000CsmaP$PULSECHECK_STATE: 

            CC1000CsmaP$CC1000Control$rxMode();
          CC1000CsmaP$RssiPulseCheck$read();
          CC1000CsmaP$BusyWait$wait(80);
          {
#line 283
            __nesc_atomic_end(__nesc_atomic); 
#line 283
            return;
          }
        }
#line 285
      CC1000CsmaP$setWakeup();
    }
#line 286
    __nesc_atomic_end(__nesc_atomic); }
}

# 178 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
}

# 125 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static uint32_t proj1C$LclTime$getNow(void ){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(1U);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 602 "proj1C.nc"
static inline void proj1C$LclTime$fired(void )
#line 602
{
  printf("ID:%-1d, T @ %7lu, Rcv:%-5d, qCrcv:%-5d, qRrcv:%-5d, PktRcv:%-5d, DfltRcv:%-5d\n", __nesc_ntoh_uint16(
  proj1C$gState.id.data), proj1C$LclTime$getNow(), __nesc_ntoh_uint16(proj1C$gState.rcv_cnt.data), __nesc_ntoh_uint16(proj1C$gState.q_cmd_rcv_cnt.data), __nesc_ntoh_uint16(
  proj1C$gState.q_rsp_rcv_cnt.data), __nesc_ntoh_uint16(proj1C$gState.pkt_rcv_cnt.data), __nesc_ntoh_uint16(proj1C$gState.dflt_rcv_cnt.data));
  printfflush();
}

# 41 "/opt/tinyos-2.1.0/tos/interfaces/Random.nc"
inline static uint16_t proj1C$Random$rand16(void ){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void proj1C$PktTimer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(4U, dt);
#line 53
}
#line 53
inline static void proj1C$QTimer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(3U, dt);
#line 53
}
#line 53
# 153 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void proj1C$PktTimer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(4U);
#line 67
}
#line 67
inline static void proj1C$QTimer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(3U);
#line 67
}
#line 67
# 486 "proj1C.nc"
static inline void proj1C$PeriodTimer$fired(void )
#line 486
{
  unsigned short __nesc_temp77;
  unsigned char *__nesc_temp76;
  unsigned short __nesc_temp75;
  unsigned char *__nesc_temp74;
  unsigned short __nesc_temp73;
  unsigned char *__nesc_temp72;

#line 487
  proj1C$QTimer$stop();
  proj1C$PktTimer$stop();

  (__nesc_temp72 = proj1C$gState.tTimer_cnt.data, __nesc_hton_uint16(__nesc_temp72, (__nesc_temp73 = __nesc_ntoh_uint16(__nesc_temp72)) + 1), __nesc_temp73);

  printf("ID:%-1d, T @ %7lu, P#:%-1d | %-1d, X:%2d | %-2d, Tcnt:%-4d, Pcnt:%-4d, Qcnt:%-4d\n", __nesc_ntoh_uint16(
  proj1C$gState.id.data), proj1C$LclTime$getNow(), __nesc_ntoh_uint8(proj1C$gState.not_duty_cycle.data), __nesc_ntoh_uint16(proj1C$gState.period_count.data), __nesc_ntoh_uint16(proj1C$gState.x_cnt.data), MAX_X, __nesc_ntoh_uint16(
  proj1C$gState.tTimer_cnt.data), __nesc_ntoh_uint16(proj1C$gState.pktTimer_cnt.data), __nesc_ntoh_uint16(proj1C$gState.qTimer_cnt.data));
  printfflush();

  if (__nesc_ntoh_uint16(proj1C$gState.period_count.data) != __nesc_ntoh_uint8(proj1C$gState.not_duty_cycle.data)) {



      if (__nesc_ntoh_uint16(proj1C$gState.query_period.data)) {
#line 501
        proj1C$QTimer$startPeriodic(__nesc_ntoh_uint16(proj1C$gState.query_period.data));
        }
#line 502
      if (__nesc_ntoh_uint8(proj1C$gState.pkt_rate.data)) {
#line 502
        proj1C$PktTimer$startPeriodic(__nesc_ntoh_uint8(proj1C$gState.pkt_rate.data));
        }
    }
  (__nesc_temp74 = proj1C$gState.period_count.data, __nesc_hton_uint16(__nesc_temp74, (__nesc_temp75 = __nesc_ntoh_uint16(__nesc_temp74)) + 1), __nesc_temp75);

  if (__nesc_ntoh_uint16(proj1C$gState.period_count.data) >= DUTY_CYCLE_INT) {
      __nesc_hton_uint8(proj1C$gState.not_duty_cycle.data, proj1C$Random$rand16() % DUTY_CYCLE_INT);
      __nesc_hton_uint16(proj1C$gState.period_count.data, 0);
      (__nesc_temp76 = proj1C$gState.x_cnt.data, __nesc_hton_uint16(__nesc_temp76, (__nesc_temp77 = __nesc_ntoh_uint16(__nesc_temp76)) + 1), __nesc_temp77);

      if (__nesc_ntoh_uint16(proj1C$gState.x_cnt.data) >= MAX_X) {
          __nesc_hton_uint8(proj1C$gState.pkt_rate.data, 0);
        }
    }
}

# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static error_t proj1C$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 648 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void *CC1000SendReceiveP$Packet$getPayload(message_t *msg, uint8_t len)
#line 648
{
  if (len <= 28) {
      return (void * )msg->data;
    }
  else {
      return (void *)0;
    }
}

# 115 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
inline static void * CC1000ActiveMessageP$Packet$getPayload(message_t * msg, uint8_t len){
#line 115
  void *result;
#line 115

#line 115
  result = CC1000SendReceiveP$Packet$getPayload(msg, len);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 85 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void *CC1000ActiveMessageP$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len)
#line 85
{
  return CC1000ActiveMessageP$Packet$getPayload(m, len);
}

# 124 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$getPayload(am_id_t arg_0x40804490, message_t * msg, uint8_t len){
#line 124
  void *result;
#line 124

#line 124
  result = CC1000ActiveMessageP$AMSend$getPayload(arg_0x40804490, msg, len);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 203 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(uint8_t id, message_t *m, uint8_t len)
#line 203
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$getPayload(0, m, len);
}

# 114 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static void * /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$getPayload(message_t * msg, uint8_t len){
#line 114
  void *result;
#line 114

#line 114
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(0U, msg, len);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 65 "/opt/tinyos-2.1.0/tos/system/AMQueueEntryP.nc"
static inline void */*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$getPayload(m, len);
}

# 124 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static void * proj1C$AMSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *result;
#line 124

#line 124
  result = /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$getPayload(msg, len);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 93 "proj1C.nc"
static inline void proj1C$sendWait(void )
#line 93
{
  unsigned short __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 95
  while (__nesc_ntoh_uint8(proj1C$gState.send_busy.data)) {
      (__nesc_temp42 = proj1C$gState.send_busy_err.data, __nesc_hton_uint16(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint16(__nesc_temp42)) + 1), __nesc_temp43);
    }
}

#line 525
static inline void proj1C$QTimer$fired(void )
#line 525
{
  unsigned short __nesc_temp83;
  unsigned char *__nesc_temp82;
  unsigned short __nesc_temp81;
  unsigned char *__nesc_temp80;
  unsigned short __nesc_temp79;
  unsigned char *__nesc_temp78;
#line 526
  lmsg_t *lmsg;

  proj1C$sendWait();

  lmsg = (lmsg_t *)proj1C$AMSend$getPayload(&proj1C$gSndMsg, sizeof(lmsg_t ));

  __nesc_hton_uint8(lmsg->type.data, QUERY_Q_CMD);
  __nesc_hton_uint16(lmsg->src_addr.data, __nesc_ntoh_uint16(proj1C$gState.id.data));
  __nesc_hton_uint16(lmsg->dst_addr.data, 0);
  __nesc_hton_uint16(lmsg->ts.data, proj1C$LclTime$getNow());

  (__nesc_temp78 = proj1C$gState.qTimer_cnt.data, __nesc_hton_uint16(__nesc_temp78, (__nesc_temp79 = __nesc_ntoh_uint16(__nesc_temp78)) + 1), __nesc_temp79);

  if (proj1C$AMSend$send(AM_BROADCAST_ADDR, &proj1C$gSndMsg, sizeof(lmsg_t )) == SUCCESS) {
      (__nesc_temp80 = proj1C$gState.send_cnt.data, __nesc_hton_uint16(__nesc_temp80, (__nesc_temp81 = __nesc_ntoh_uint16(__nesc_temp80)) + 1), __nesc_temp81);
      __nesc_hton_uint8(proj1C$gState.send_busy.data, TRUE);
    }
  else 
    {
      (__nesc_temp82 = proj1C$gState.send_fail_err.data, __nesc_hton_uint16(__nesc_temp82, (__nesc_temp83 = __nesc_ntoh_uint16(__nesc_temp82)) + 1), __nesc_temp83);
      printf("Type: %-2d TS: %-7d Src: %-1d Dst: %-1d snd fail err %-5d | %-5d\n", __nesc_ntoh_uint8(
      lmsg->type.data), __nesc_ntoh_uint16(lmsg->ts.data), __nesc_ntoh_uint16(lmsg->src_addr.data), __nesc_ntoh_uint16(lmsg->dst_addr.data), __nesc_ntoh_uint16(
      proj1C$gState.send_fail_err.data), __nesc_ntoh_uint16(proj1C$gState.send_cnt.data));
      printfflush();
    }
}








static inline void proj1C$PktTimer$fired(void )
#line 560
{
  unsigned short __nesc_temp85;
  unsigned char *__nesc_temp84;
#line 561
  lmsg_t msg;
  uint8_t tmp = __nesc_ntoh_uint16(proj1C$gState.id.data);
  int i;

  __nesc_hton_uint8(msg.type.data, PACKET_MSG);
  __nesc_hton_uint16(msg.src_addr.data, __nesc_ntoh_uint16(proj1C$gState.id.data));
  __nesc_hton_uint16(msg.ts.data, proj1C$LclTime$getNow());

  while (tmp == __nesc_ntoh_uint16(proj1C$gState.id.data)) {



      tmp = proj1C$Random$rand16() % N_NODES + 1;
    }

  __nesc_hton_uint16(msg.dst_addr.data, tmp);






  for (i = 0; i < L_MSG_BUFFSIZE; i++) {
      __nesc_hton_uint8(msg.buff[i].data, (__nesc_ntoh_uint16(proj1C$gState.pktTimer_cnt.data) + i) % 256);
    }

  if (!proj1C$loadQ(&proj1C$gQ, &msg)) {
    }



  (__nesc_temp84 = proj1C$gState.pktTimer_cnt.data, __nesc_hton_uint16(__nesc_temp84, (__nesc_temp85 = __nesc_ntoh_uint16(__nesc_temp84)) + 1), __nesc_temp85);
}

# 193 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x40bcd9f0){
#line 72
  switch (arg_0x40bcd9f0) {
#line 72
    case 0U:
#line 72
      CC1000CsmaP$WakeupTimer$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      proj1C$LclTime$fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      proj1C$PeriodTimer$fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      proj1C$QTimer$fired();
#line 72
      break;
#line 72
    case 4U:
#line 72
      proj1C$PktTimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x40bcd9f0);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 118 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void CC1000ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 118
{
  cc1000_header_t *header = CC1000ActiveMessageP$getHeader(amsg);

#line 120
  __nesc_hton_uint16(header->dest.data, addr);
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static void /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC1000ActiveMessageP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 138 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void CC1000ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type)
#line 138
{
  cc1000_header_t *header = CC1000ActiveMessageP$getHeader(amsg);

#line 140
  __nesc_hton_uint8(header->type.data, type);
}

# 151 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static void /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  CC1000ActiveMessageP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 640 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 640
{
  __nesc_hton_uint8(CC1000SendReceiveP$getHeader(msg)->length.data, len);
}

# 83 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  CC1000SendReceiveP$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static error_t /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(0U, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 53 "/opt/tinyos-2.1.0/tos/system/QueueC.nc"
static inline bool /*PrintfC.QueueC*/QueueC$0$Queue$empty(void )
#line 53
{
  return /*PrintfC.QueueC*/QueueC$0$size == 0;
}

# 50 "/opt/tinyos-2.1.0/tos/interfaces/Queue.nc"
inline static bool PrintfP$Queue$empty(void ){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*PrintfC.QueueC*/QueueC$0$Queue$empty();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 115 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
inline static void * PrintfP$Packet$getPayload(message_t * msg, uint8_t len){
#line 115
  void *result;
#line 115

#line 115
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(msg, len);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 115 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void )
#line 115
{
  return 28;
}

# 57 "/opt/tinyos-2.1.0/tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$size(void )
#line 57
{
  return /*PrintfC.QueueC*/QueueC$0$size;
}

# 58 "/opt/tinyos-2.1.0/tos/interfaces/Queue.nc"
inline static uint8_t PrintfP$Queue$size(void ){
#line 58
  unsigned char result;
#line 58

#line 58
  result = /*PrintfC.QueueC*/QueueC$0$Queue$size();
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 69 "/opt/tinyos-2.1.0/tos/system/QueueC.nc"
static inline void /*PrintfC.QueueC*/QueueC$0$printQueue(void )
#line 69
{
}

#line 65
static inline /*PrintfC.QueueC*/QueueC$0$queue_t /*PrintfC.QueueC*/QueueC$0$Queue$head(void )
#line 65
{
  return /*PrintfC.QueueC*/QueueC$0$queue[/*PrintfC.QueueC*/QueueC$0$head];
}

#line 85
static inline /*PrintfC.QueueC*/QueueC$0$queue_t /*PrintfC.QueueC*/QueueC$0$Queue$dequeue(void )
#line 85
{
  /*PrintfC.QueueC*/QueueC$0$queue_t t = /*PrintfC.QueueC*/QueueC$0$Queue$head();

#line 87
  ;
  if (!/*PrintfC.QueueC*/QueueC$0$Queue$empty()) {
      /*PrintfC.QueueC*/QueueC$0$head++;
      if (/*PrintfC.QueueC*/QueueC$0$head == 250) {
#line 90
        /*PrintfC.QueueC*/QueueC$0$head = 0;
        }
#line 91
      /*PrintfC.QueueC*/QueueC$0$size--;
      /*PrintfC.QueueC*/QueueC$0$printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-2.1.0/tos/interfaces/Queue.nc"
inline static PrintfP$Queue$t  PrintfP$Queue$dequeue(void ){
#line 81
  unsigned char result;
#line 81

#line 81
  result = /*PrintfC.QueueC*/QueueC$0$Queue$dequeue();
#line 81

#line 81
  return result;
#line 81
}
#line 81
# 49 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t * msg)
#line 49
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 142
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 142
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 144
  __nesc_hton_uint16(header->dest.data, addr);
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 161 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(message_t *amsg, am_id_t type)
#line 161
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 163
  __nesc_hton_uint8(header->type.data, type);
}

# 151 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x40804490, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(arg_0x40804490, addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 67 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short result;
#line 67

#line 67
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(amsg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 136
  unsigned char result;
#line 136

#line 136
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(amsg);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 111 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 111
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg)->length.data, len);
}

# 83 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 522 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SendBytePacket$startSend(uint8_t b)
#line 522
{
  bool not_busy = FALSE;

#line 524
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 524
    {
      if (SerialP$txBuf[SerialP$TX_DATA_INDEX].state == SerialP$BUFFER_AVAILABLE) {
          SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_FILLING;
          SerialP$txBuf[SerialP$TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 530
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP$MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 51 "/opt/tinyos-2.1.0/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t first_byte){
#line 51
  unsigned char result;
#line 51

#line 51
  result = SerialP$SendBytePacket$startSend(first_byte);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 43 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 347 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 348
{
  return 0;
}

# 23 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(uart_id_t arg_0x4066a088, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char result;
#line 23

#line 23
  switch (arg_0x4066a088) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      result = SerialPacketInfoActiveMessageP$Info$dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(arg_0x4066a088, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return result;
#line 23
}
#line 23
# 40 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$offset(void )
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 344 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id)
#line 344
{
  return 0;
}

# 15 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(uart_id_t arg_0x4066a088){
#line 15
  unsigned char result;
#line 15

#line 15
  switch (arg_0x4066a088) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      result = SerialPacketInfoActiveMessageP$Info$offset();
#line 15
      break;
#line 15
    default:
#line 15
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(arg_0x4066a088);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return result;
#line 15
}
#line 15
# 100 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len)
#line 100
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 108
            ESIZE;

            {
#line 108
              __nesc_atomic_end(__nesc_atomic); 
#line 108
              return __nesc_temp;
            }
          }
        }
#line 111
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
      return FAIL;
    }
}

# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$RunTx$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$RunTx);
#line 56

#line 56
  return result;
#line 56
}
#line 56
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 158 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning;
}

# 81 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static bool CC1000CsmaP$WakeupTimer$isRunning(void ){
#line 81
  unsigned char result;
#line 81

#line 81
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(0U);
#line 81

#line 81
  return result;
#line 81
}
#line 81
#line 62
inline static void CC1000CsmaP$WakeupTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, dt);
#line 62
}
#line 62
# 135 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 135
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 45
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 45
}
#line 45
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Timer$get(void )
#line 50
{
#line 50
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm128Timer0AsyncP$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 206 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 206
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 128 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 226 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 105
  unsigned long result;
#line 105

#line 105
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 635 "proj1C.nc"
static inline void proj1C$Read$readDone(error_t result, uint16_t data)
#line 635
{

  if (result != SUCCESS) {
      data = 0xffff;
      proj1C$report_problem();
    }
}

# 48 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(uint8_t arg_0x40af20c8, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val){
#line 63
  switch (arg_0x40af20c8) {
#line 63
    case /*proj1AppC.Sensor.Sensor.AdcReadClientC*/AdcReadClientC$0$ID:
#line 63
      proj1C$Read$readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(arg_0x40af20c8, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 47 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(uint8_t arg_0x40aef010){
#line 110
  unsigned char result;
#line 110

#line 110
  switch (arg_0x40aef010) {
#line 110
    case /*proj1AppC.Sensor.Sensor.AdcReadClientC*/AdcReadClientC$0$ID:
#line 110
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(/*proj1AppC.Sensor.Sensor.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 110
      break;
#line 110
    default:
#line 110
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(arg_0x40aef010);
#line 110
      break;
#line 110
    }
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(client, result, data);
}

# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
inline static void AdcP$Read$readDone(uint8_t arg_0x40ae40c8, error_t result, AdcP$Read$val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(arg_0x40ae40c8, result, val);
#line 63
}
#line 63
# 103 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP$acquiredData$runTask(void )
#line 103
{
  AdcP$state = AdcP$IDLE;
  AdcP$Read$readDone(AdcP$client, SUCCESS, AdcP$val);
}

# 56 "/opt/tinyos-2.1.0/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.1.0/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 47 "/opt/tinyos-2.1.0/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id)
#line 47
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] &= ~(1 << id % 8);
}

#line 69
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last + 1; ; i++) {
        if (i == 2U) {
          i = 0;
          }
#line 75
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.0/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 214 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 214
{
}

# 55 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x40a885e0){
#line 55
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x40a885e0);
#line 55
}
#line 55
# 73 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$disableAdc(void )
#line 73
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP$McuPowerState$update();
}

# 77 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$disableAdc(void ){
#line 77
  HplAtm128AdcP$HplAtm128Adc$disableAdc();
#line 77
}
#line 77
# 109 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$AsyncStdControl$stop(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  Atm128AdcP$HplAtm128Adc$disableAdc();

  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.0/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = Atm128AdcP$AsyncStdControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 74 "/opt/tinyos-2.1.0/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void )
#line 74
{
}

# 52 "/opt/tinyos-2.1.0/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void ){
#line 52
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup();
#line 52
}
#line 52
# 69 "/opt/tinyos-2.1.0/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop();
}

# 46 "/opt/tinyos-2.1.0/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted();
#line 46
}
#line 46
# 86 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline error_t AdcP$startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP$state = newState;
  AdcP$client = newClient;
  AdcP$sample();

  return SUCCESS;
}





static inline error_t AdcP$ReadNow$read(uint8_t c)
#line 99
{
  return AdcP$startGet(AdcP$ACQUIRE_DATA_NOW, c);
}

# 58 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
inline static error_t CC1000RssiP$ActualRssi$read(void ){
#line 58
  unsigned char result;
#line 58

#line 58
  result = AdcP$ReadNow$read(/*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$ID);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 71 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP$Resource$granted(void )
#line 71
{
  CC1000RssiP$ActualRssi$read();
}

# 95 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline error_t AdcP$Read$read(uint8_t c)
#line 95
{
  return AdcP$startGet(AdcP$ACQUIRE_DATA, c);
}

# 55 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(uint8_t arg_0x40af00e8){
#line 55
  unsigned char result;
#line 55

#line 55
  result = AdcP$Read$read(arg_0x40af00e8);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.0/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(client);
}

# 198 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id)
#line 198
{
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x40a8b7d8){
#line 92
  switch (arg_0x40a8b7d8) {
#line 92
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$HAL_ID:
#line 92
      CC1000RssiP$Resource$granted();
#line 92
      break;
#line 92
    case /*proj1AppC.Sensor.Sensor.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(/*proj1AppC.Sensor.Sensor.AdcReadClientC*/AdcReadClientC$0$ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x40a8b7d8);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 186 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void )
#line 186
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 187
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 190
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
}

# 161 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline message_t *CC1000ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 161
{
  return msg;
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * CC1000ActiveMessageP$Snoop$receive(am_id_t arg_0x40893108, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = CC1000ActiveMessageP$Snoop$default$receive(arg_0x40893108, msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 338 "proj1C.nc"
static inline void proj1C$processPacket(msg_q_t *q, lmsg_t *m)
#line 338
{
  unsigned short __nesc_temp61;
  unsigned char *__nesc_temp60;

#line 340
  if (__nesc_ntoh_uint16(m->dst_addr.data) == __nesc_ntoh_uint16(proj1C$gState.id.data)) {
    }
  else 
    {

      if (!proj1C$loadQ(q, m)) {
          (__nesc_temp60 = proj1C$gState.q_full_err.data, __nesc_hton_uint16(__nesc_temp60, (__nesc_temp61 = __nesc_ntoh_uint16(__nesc_temp60)) + 1), __nesc_temp61);
        }
    }
}

#line 274
static inline void proj1C$processQuery_response(msg_q_t *q, lmsg_t *m)
#line 274
{
  unsigned short __nesc_temp59;
  unsigned char *__nesc_temp58;
  unsigned short __nesc_temp57;
  unsigned char *__nesc_temp56;
  unsigned short __nesc_temp55;
  unsigned char *__nesc_temp54;
  unsigned short __nesc_temp53;
  unsigned char *__nesc_temp52;
#line 275
  int i = 0;
  lmsg_t *lmsg;

  if (__builtin_abs(__nesc_ntoh_uint8(m->buff[0].data) - __nesc_ntoh_uint8(q->size.data)) < M) {




      while (TRUE) {
          proj1C$sendWait();
          lmsg = (lmsg_t *)proj1C$AMSend$getPayload(&proj1C$gSndMsg, sizeof(lmsg_t ));

          if (!proj1C$getQ(q, lmsg, __nesc_ntoh_uint16(m->src_addr.data))) {
              break;
            }

          if (proj1C$AMSend$send(__nesc_ntoh_uint16(lmsg->dst_addr.data), &proj1C$gSndMsg, sizeof(lmsg_t )) == SUCCESS) {
              (__nesc_temp52 = proj1C$gState.send_cnt.data, __nesc_hton_uint16(__nesc_temp52, (__nesc_temp53 = __nesc_ntoh_uint16(__nesc_temp52)) + 1), __nesc_temp53);
              __nesc_hton_uint8(proj1C$gState.send_busy.data, TRUE);
            }
          else 
            {
              (__nesc_temp54 = proj1C$gState.send_fail_err.data, __nesc_hton_uint16(__nesc_temp54, (__nesc_temp55 = __nesc_ntoh_uint16(__nesc_temp54)) + 1), __nesc_temp55);
              printf("Type: %-2d TS: %-7d Src: %-1d Dst: %-1d snd fail err %-5d | %-5d\n", __nesc_ntoh_uint8(
              lmsg->type.data), __nesc_ntoh_uint16(lmsg->ts.data), __nesc_ntoh_uint16(lmsg->src_addr.data), __nesc_ntoh_uint16(lmsg->dst_addr.data), __nesc_ntoh_uint16(
              proj1C$gState.send_fail_err.data), __nesc_ntoh_uint16(proj1C$gState.send_cnt.data));
              printfflush();
            }
        }

      while (i < M / 2) {
          proj1C$sendWait();
          lmsg = (lmsg_t *)proj1C$AMSend$getPayload(&proj1C$gSndMsg, sizeof(lmsg_t ));

          if (!proj1C$getQ(q, lmsg, 0)) {
              break;
            }

          if (proj1C$AMSend$send(__nesc_ntoh_uint16(lmsg->dst_addr.data), &proj1C$gSndMsg, sizeof(lmsg_t )) == SUCCESS) {
              (__nesc_temp56 = proj1C$gState.send_cnt.data, __nesc_hton_uint16(__nesc_temp56, (__nesc_temp57 = __nesc_ntoh_uint16(__nesc_temp56)) + 1), __nesc_temp57);
              __nesc_hton_uint8(proj1C$gState.send_busy.data, TRUE);
            }
          else 
            {
              (__nesc_temp58 = proj1C$gState.send_fail_err.data, __nesc_hton_uint16(__nesc_temp58, (__nesc_temp59 = __nesc_ntoh_uint16(__nesc_temp58)) + 1), __nesc_temp59);
              printf("Type: %-2d TS: %-7d Src: %-1d Dst: %-1d snd fail err %-5d | %-5d\n", __nesc_ntoh_uint8(
              lmsg->type.data), __nesc_ntoh_uint16(lmsg->ts.data), __nesc_ntoh_uint16(lmsg->src_addr.data), __nesc_ntoh_uint16(lmsg->dst_addr.data), __nesc_ntoh_uint16(
              proj1C$gState.send_fail_err.data), __nesc_ntoh_uint16(proj1C$gState.send_cnt.data));
              printfflush();
            }

          i++;
        }
    }
}

#line 240
static inline void proj1C$processQuery_cmd(msg_q_t *q, lmsg_t *m)
#line 240
{
  unsigned short __nesc_temp51;
  unsigned char *__nesc_temp50;
  unsigned short __nesc_temp49;
  unsigned char *__nesc_temp48;
#line 241
  lmsg_t *lmsg;

  proj1C$sendWait();
  lmsg = (lmsg_t *)proj1C$AMSend$getPayload(&proj1C$gSndMsg, sizeof(lmsg_t ));

  __nesc_hton_uint8(lmsg->type.data, QUERY_Q_RSP);
  __nesc_hton_uint16(lmsg->src_addr.data, __nesc_ntoh_uint16(proj1C$gState.id.data));
  __nesc_hton_uint16(lmsg->dst_addr.data, __nesc_ntoh_uint16(lmsg->src_addr.data));

  __nesc_hton_uint16(lmsg->ts.data, proj1C$LclTime$getNow());
  __nesc_hton_uint8(lmsg->buff[0].data, __nesc_ntoh_uint8(q->size.data));

  if (proj1C$AMSend$send(__nesc_ntoh_uint16(lmsg->dst_addr.data), &proj1C$gSndMsg, sizeof(lmsg_t )) == SUCCESS) {
      (__nesc_temp48 = proj1C$gState.send_cnt.data, __nesc_hton_uint16(__nesc_temp48, (__nesc_temp49 = __nesc_ntoh_uint16(__nesc_temp48)) + 1), __nesc_temp49);
      __nesc_hton_uint8(proj1C$gState.send_busy.data, TRUE);
    }
  else 
    {
      (__nesc_temp50 = proj1C$gState.send_fail_err.data, __nesc_hton_uint16(__nesc_temp50, (__nesc_temp51 = __nesc_ntoh_uint16(__nesc_temp50)) + 1), __nesc_temp51);
      printf("Type: %-2d TS: %-7d Src: %-1d Dst: %-1d snd fail err %-5d | %-5d\n", __nesc_ntoh_uint8(
      lmsg->type.data), __nesc_ntoh_uint16(lmsg->ts.data), __nesc_ntoh_uint16(lmsg->src_addr.data), __nesc_ntoh_uint16(lmsg->dst_addr.data), __nesc_ntoh_uint16(
      proj1C$gState.send_fail_err.data), __nesc_ntoh_uint16(proj1C$gState.send_cnt.data));
      printfflush();
    }
}

# 48 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle();
#line 31
}
#line 31
# 103 "/opt/tinyos-2.1.0/tos/system/LedsP.nc"
static inline void LedsP$Leds$led2Toggle(void )
#line 103
{
  LedsP$Led2$toggle();
  ;
#line 105
  ;
}

# 89 "/opt/tinyos-2.1.0/tos/interfaces/Leds.nc"
inline static void proj1C$Leds$led2Toggle(void ){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 358 "proj1C.nc"
static inline void proj1C$report_received(void )
#line 358
{
#line 358
  proj1C$Leds$led2Toggle();
}

#line 439
static inline message_t *proj1C$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 439
{
  unsigned short __nesc_temp71;
  unsigned char *__nesc_temp70;
  unsigned short __nesc_temp69;
  unsigned char *__nesc_temp68;
  unsigned short __nesc_temp67;
  unsigned char *__nesc_temp66;
  unsigned short __nesc_temp65;
  unsigned char *__nesc_temp64;
  unsigned short __nesc_temp63;
  unsigned char *__nesc_temp62;
#line 440
  lmsg_t *rmsg = payload;

#line 441
  printf("recid:%d, msgtype : %d", __nesc_ntoh_uint16(rmsg->src_addr.data), __nesc_ntoh_uint8(rmsg->type.data));
  (__nesc_temp62 = proj1C$gState.rcv_cnt.data, __nesc_hton_uint16(__nesc_temp62, (__nesc_temp63 = __nesc_ntoh_uint16(__nesc_temp62)) + 1), __nesc_temp63);

  proj1C$report_received();

  switch (__nesc_ntoh_uint8(rmsg->type.data)) {

      case QUERY_Q_CMD: 
        printf("type query");
      (__nesc_temp64 = proj1C$gState.q_cmd_rcv_cnt.data, __nesc_hton_uint16(__nesc_temp64, (__nesc_temp65 = __nesc_ntoh_uint16(__nesc_temp64)) + 1), __nesc_temp65);
      proj1C$processQuery_cmd(&proj1C$gQ, rmsg);
      break;

      case QUERY_Q_RSP: 
        printf("query res");
      (__nesc_temp66 = proj1C$gState.q_rsp_rcv_cnt.data, __nesc_hton_uint16(__nesc_temp66, (__nesc_temp67 = __nesc_ntoh_uint16(__nesc_temp66)) + 1), __nesc_temp67);
      proj1C$processQuery_response(&proj1C$gQ, rmsg);
      break;

      case PACKET_MSG: 
        printf("packet");
      (__nesc_temp68 = proj1C$gState.pkt_rcv_cnt.data, __nesc_hton_uint16(__nesc_temp68, (__nesc_temp69 = __nesc_ntoh_uint16(__nesc_temp68)) + 1), __nesc_temp69);
      proj1C$processPacket(&proj1C$gQ, rmsg);
      break;

      default: 
        (__nesc_temp70 = proj1C$gState.dflt_rcv_cnt.data, __nesc_hton_uint16(__nesc_temp70, (__nesc_temp71 = __nesc_ntoh_uint16(__nesc_temp70)) + 1), __nesc_temp71);
      break;
    }

  return msg;
}

# 157 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline message_t *CC1000ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 157
{
  return msg;
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * CC1000ActiveMessageP$Receive$receive(am_id_t arg_0x40894a28, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x40894a28) {
#line 67
    case 16:
#line 67
      result = proj1C$Receive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      result = CC1000ActiveMessageP$Receive$default$receive(arg_0x40894a28, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 49 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
inline static am_addr_t CC1000ActiveMessageP$amAddress(void ){
#line 49
  unsigned short result;
#line 49

#line 49
  result = ActiveMessageAddressC$amAddress();
#line 49

#line 49
  return result;
#line 49
}
#line 49
#line 104
static inline am_addr_t CC1000ActiveMessageP$AMPacket$address(void )
#line 104
{
  return CC1000ActiveMessageP$amAddress();
}

#line 128
static inline bool CC1000ActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 128
{
  return CC1000ActiveMessageP$AMPacket$destination(amsg) == CC1000ActiveMessageP$AMPacket$address() || 
  CC1000ActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

#line 58
static inline cc1000_footer_t *CC1000ActiveMessageP$getFooter(message_t *amsg)
#line 58
{
  return (cc1000_footer_t *)amsg->footer;
}

#line 91
static inline message_t *CC1000ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 91
{
  cc1000_footer_t *msg_footer = CC1000ActiveMessageP$getFooter(msg);

#line 93
  if (__nesc_ntoh_leuint16(msg_footer->crc.data) == 1) {
      if (CC1000ActiveMessageP$AMPacket$isForMe(msg)) {
          return CC1000ActiveMessageP$Receive$receive(CC1000ActiveMessageP$AMPacket$type(msg), msg, payload, len);
        }
      else {
          return CC1000ActiveMessageP$Snoop$receive(CC1000ActiveMessageP$AMPacket$type(msg), msg, payload, len);
        }
    }
  return msg;
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * CC1000SendReceiveP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC1000ActiveMessageP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 548 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$signalPacketReceived$runTask(void )
#line 548
{
  message_t *pBuf;
  cc1000_header_t *pHeader;

#line 551
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (CC1000SendReceiveP$radioState != CC1000SendReceiveP$RECEIVED_STATE) {
        {
#line 554
          __nesc_atomic_end(__nesc_atomic); 
#line 554
          return;
        }
        }
#line 556
      pBuf = CC1000SendReceiveP$rxBufPtr;
    }
#line 557
    __nesc_atomic_end(__nesc_atomic); }
  pHeader = CC1000SendReceiveP$getHeader(pBuf);
  pBuf = CC1000SendReceiveP$Receive$receive(pBuf, pBuf->data, __nesc_ntoh_uint8(pHeader->length.data));
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (pBuf) {
        CC1000SendReceiveP$rxBufPtr = pBuf;
        }
#line 564
      if (CC1000SendReceiveP$radioState == CC1000SendReceiveP$RECEIVED_STATE) {
        CC1000SendReceiveP$enterListenState();
        }
#line 566
      CC1000SendReceiveP$ByteRadio$rxDone();
    }
#line 567
    __nesc_atomic_end(__nesc_atomic); }
}

# 181 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static void CC1000ActiveMessageP$AMSend$sendDone(am_id_t arg_0x40894068, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(arg_0x40894068, msg, error);
#line 99
}
#line 99
# 77 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void CC1000ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result)
#line 77
{
  CC1000ActiveMessageP$AMSend$sendDone(CC1000ActiveMessageP$AMPacket$type(msg), msg, result);
}

# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static void CC1000SendReceiveP$Send$sendDone(message_t * msg, error_t error){
#line 89
  CC1000ActiveMessageP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 377 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$signalPacketSent$runTask(void )
#line 377
{
  message_t *pBuf;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      pBuf = CC1000SendReceiveP$txBufPtr;
      CC1000SendReceiveP$f.txBusy = FALSE;
      CC1000SendReceiveP$enterListenState();
    }
#line 385
    __nesc_atomic_end(__nesc_atomic); }
  CC1000SendReceiveP$Send$sendDone(pBuf, SUCCESS);
}

# 62 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SquelchP.nc"
static inline void CC1000SquelchP$CC1000Squelch$adjust(uint16_t data)
#line 62
{
  uint16_t squelchTab[CC1K_SquelchTableSize];
  uint8_t i;
#line 64
  uint8_t j;
#line 64
  uint8_t min;
  uint32_t newThreshold;

  CC1000SquelchP$squelchTable[CC1000SquelchP$squelchIndex++] = data;
  if (CC1000SquelchP$squelchIndex >= CC1K_SquelchTableSize) {
    CC1000SquelchP$squelchIndex = 0;
    }
#line 70
  if (CC1000SquelchP$squelchCount <= CC1K_SquelchCount) {
    CC1000SquelchP$squelchCount++;
    }

  memcpy(squelchTab, CC1000SquelchP$squelchTable, sizeof CC1000SquelchP$squelchTable);
  for (j = 0; ; j++) 
    {
      min = 0;
      for (i = 1; i < CC1K_SquelchTableSize; i++) 
        if (squelchTab[i] > squelchTab[min]) {
          min = i;
          }
#line 81
      if (j == 3) {
        break;
        }
#line 83
      squelchTab[min] = 0;
    }

  newThreshold = ((uint32_t )CC1000SquelchP$clearThreshold << 5) + (
  (uint32_t )squelchTab[min] << 1);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 88
    CC1000SquelchP$clearThreshold = newThreshold / 34;
#line 88
    __nesc_atomic_end(__nesc_atomic); }
}

# 40 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Squelch.nc"
inline static void CC1000CsmaP$CC1000Squelch$adjust(uint16_t data){
#line 40
  CC1000SquelchP$CC1000Squelch$adjust(data);
#line 40
}
#line 40
# 438 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$adjustSquelch$runTask(void )
#line 438
{
  uint16_t squelchData;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 441
    squelchData = CC1000CsmaP$rssiForSquelch;
#line 441
    __nesc_atomic_end(__nesc_atomic); }
  CC1000CsmaP$CC1000Squelch$adjust(squelchData);
}

#line 129
static inline void CC1000CsmaP$enterPowerDownState(void )
#line 129
{
  CC1000CsmaP$cancelRssi();
  CC1000CsmaP$radioState = CC1000CsmaP$POWERDOWN_STATE;
}

# 89 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$disableIntr(void )
#line 89
{
  * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
  * (volatile uint8_t *)(0x17 + 0x20) |= 1 << 0;
  * (volatile uint8_t *)(0x18 + 0x20) &= ~(1 << 0);
}

# 69 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$disableIntr(void ){
#line 69
  HplCC1000SpiP$HplCC1000Spi$disableIntr();
#line 69
}
#line 69
# 154 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterInactiveState(void )
#line 154
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$INACTIVE_STATE;
}

#line 407
static inline void CC1000SendReceiveP$ByteRadio$off(void )
#line 407
{
  CC1000SendReceiveP$enterInactiveState();
  CC1000SendReceiveP$HplCC1000Spi$disableIntr();
}

# 66 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP$ByteRadio$off(void ){
#line 66
  CC1000SendReceiveP$ByteRadio$off();
#line 66
}
#line 66
# 68 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP$CC1000Control$off(void ){
#line 68
  CC1000ControlP$CC1000Control$off();
#line 68
}
#line 68
# 158 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$radioOff(void )
#line 158
{
  CC1000CsmaP$CC1000Control$off();
  CC1000CsmaP$ByteRadio$off();
}

# 95 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SquelchP.nc"
static inline bool CC1000SquelchP$CC1000Squelch$settled(void )
#line 95
{
  return CC1000SquelchP$squelchCount > CC1K_SquelchCount;
}

# 53 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Squelch.nc"
inline static bool CC1000CsmaP$CC1000Squelch$settled(void ){
#line 53
  unsigned char result;
#line 53

#line 53
  result = CC1000SquelchP$CC1000Squelch$settled();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 293 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$sleepCheck$runTask(void )
#line 293
{
  bool turnOn = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (CC1000CsmaP$f.txPending || !CC1000CsmaP$sleepTime) 
      {
        if (CC1000CsmaP$radioState == CC1000CsmaP$PULSECHECK_STATE || CC1000CsmaP$radioState == CC1000CsmaP$POWERDOWN_STATE) 
          {
            CC1000CsmaP$enterIdleStateSetWakeup();
            turnOn = TRUE;
          }
      }
    else {
#line 305
      if (CC1000CsmaP$CC1000Squelch$settled() && !CC1000CsmaP$ByteRadio$syncing()) 
        {
          CC1000CsmaP$radioOff();
          CC1000CsmaP$enterPowerDownState();
          CC1000CsmaP$setWakeup();
        }
      }
#line 311
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOn) {
    CC1000CsmaP$radioOn();
    }
}

# 334 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP$CC1000Control$coreOn(void )
#line 334
{

  CC1000ControlP$CC$write(CC1K_MAIN, ((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
}

# 85 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP$CC1000Control$coreOn(void ){
#line 85
  CC1000ControlP$CC1000Control$coreOn();
#line 85
}
#line 85
# 82 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$enableIntr(void )
#line 82
{

  * (volatile uint8_t *)(0x0D + 0x20) = 0xc0;
  * (volatile uint8_t *)(0x17 + 0x20) &= ~(1 << 0);
}

# 64 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$enableIntr(void ){
#line 64
  HplCC1000SpiP$HplCC1000Spi$enableIntr();
#line 64
}
#line 64
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void proj1C$PeriodTimer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(2U, dt);
#line 53
}
#line 53
# 415 "proj1C.nc"
static inline void proj1C$RadioControl$startDone(error_t error)
#line 415
{
  printf("Node %d Radio started. Starting period timer with period of %d\n", __nesc_ntoh_uint16(proj1C$gState.id.data), __nesc_ntoh_uint16(proj1C$gState.period.data));
  proj1C$PeriodTimer$startPeriodic(__nesc_ntoh_uint16(proj1C$gState.period.data));
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
inline static void CC1000CsmaP$SplitControl$startDone(error_t error){
#line 92
  proj1C$RadioControl$startDone(error);
#line 92
}
#line 92
# 428 "proj1C.nc"
static inline void proj1C$RadioControl$stopDone(error_t error)
#line 428
{
}

# 117 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
inline static void CC1000CsmaP$SplitControl$stopDone(error_t error){
#line 117
  proj1C$RadioControl$stopDone(error);
#line 117
}
#line 117
# 175 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$startStopDone$runTask(void )
#line 175
{
  uint8_t s;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 179
    s = CC1000CsmaP$radioState;
#line 179
    __nesc_atomic_end(__nesc_atomic); }
  if (s == CC1000CsmaP$DISABLED_STATE) {
    CC1000CsmaP$SplitControl$stopDone(SUCCESS);
    }
  else {
#line 183
    CC1000CsmaP$SplitControl$startDone(SUCCESS);
    }
}

#line 252
static inline void CC1000CsmaP$setWakeupTask$runTask(void )
#line 252
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 253
    CC1000CsmaP$setWakeup();
#line 253
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t PrintfP$retrySend$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(PrintfP$retrySend);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static error_t PrintfP$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 127 "/opt/tinyos-2.1.0/tos/lib/printf/PrintfP.nc"
static inline void PrintfP$retrySend$runTask(void )
#line 127
{
  if (PrintfP$AMSend$send(AM_BROADCAST_ADDR, &PrintfP$printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP$retrySend$postTask();
    }
}

# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  PrintfP$AMSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.0/tos/system/AMQueueEntryP.nc"
static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 207 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x408059d8, message_t * msg, error_t error){
#line 89
  switch (arg_0x408059d8) {
#line 89
    case 0U:
#line 89
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x408059d8, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 161
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg, FAIL);
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 106 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg)
#line 106
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 108
  return __nesc_ntoh_uint8(header->length.data);
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char result;
#line 67

#line 67
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(msg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 57 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
    }
}

#line 166
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 166
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(am_id_t arg_0x40597620, message_t * msg, error_t error){
#line 99
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x40597620, msg, error);
#line 99
}
#line 99
# 85 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result)
#line 85
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, result);
}

# 362 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 362
{
  return;
}

# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(uart_id_t arg_0x4066c560, message_t * msg, error_t error){
#line 89
  switch (arg_0x4066c560) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(arg_0x4066c560, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 147 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void )
#line 147
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError;
#line 151
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled) {
#line 153
    error = ECANCEL;
    }
#line 154
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer, error);
}

#line 201
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which)
#line 201
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 0;
    }
}

# 93 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 93
{
  return msg;
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(am_id_t arg_0x405a3010, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(arg_0x405a3010, msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 97 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 97
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, msg->data, len);
}

# 357 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 359
{
  return msg;
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(uart_id_t arg_0x4065be50, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x4065be50) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(arg_0x4065be50, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 46 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 351 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 352
{
  return 0;
}

# 31 "/opt/tinyos-2.1.0/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(uart_id_t arg_0x4066a088, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char result;
#line 31

#line 31
  switch (arg_0x4066a088) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      result = SerialPacketInfoActiveMessageP$Info$upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(arg_0x4066a088, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 264 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void )
#line 264
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 269
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 278
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 123 "/opt/tinyos-2.1.0/tos/lib/printf/PrintfP.nc"
static inline void PrintfP$SerialControl$stopDone(error_t error)
#line 123
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 124
    PrintfP$state = PrintfP$S_STOPPED;
#line 124
    __nesc_atomic_end(__nesc_atomic); }
}

# 117 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
inline static void SerialP$SplitControl$stopDone(error_t error){
#line 117
  PrintfP$SerialControl$stopDone(error);
#line 117
}
#line 117
# 44 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 125 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0RxControl$stop(void )
#line 125
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = HplAtm128UartP$Uart0RxControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 113 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0TxControl$stop(void )
#line 113
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = HplAtm128UartP$Uart0TxControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 93 "/opt/tinyos-2.1.0/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
inline static error_t SerialP$SerialControl$stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 330 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFlush$flushDone(void )
#line 330
{
  SerialP$SerialControl$stop();
  SerialP$SplitControl$stopDone(SUCCESS);
}

static inline void SerialP$defaultSerialFlushTask$runTask(void )
#line 335
{
  SerialP$SerialFlush$flushDone();
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$defaultSerialFlushTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$defaultSerialFlushTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 338 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFlush$default$flush(void )
#line 338
{
  SerialP$defaultSerialFlushTask$postTask();
}

# 38 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFlush.nc"
inline static void SerialP$SerialFlush$flush(void ){
#line 38
  SerialP$SerialFlush$default$flush();
#line 38
}
#line 38
# 326 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline void SerialP$stopDoneTask$runTask(void )
#line 326
{
  SerialP$SerialFlush$flush();
}

# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void proj1C$LclTime$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(1U, dt);
#line 53
}
#line 53
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP$startStopDone$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC1000CsmaP$startStopDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 382 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ControlP.nc"
static inline bool CC1000ControlP$CC1000Control$getLOStatus(void )
#line 382
{


  return TRUE;
}

# 136 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
inline static bool CC1000SendReceiveP$CC1000Control$getLOStatus(void ){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC1000ControlP$CC1000Control$getLOStatus();
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 235 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP$StdControl$start(void )
#line 235
{
  /* atomic removed: atomic calls only */
  {
    CC1000SendReceiveP$enterInactiveState();
    CC1000SendReceiveP$f.txBusy = FALSE;
    CC1000SendReceiveP$f.invert = CC1000SendReceiveP$CC1000Control$getLOStatus();
  }
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
inline static error_t CC1000CsmaP$ByteRadioControl$start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = CC1000SendReceiveP$StdControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 186 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline error_t CC1000CsmaP$SplitControl$start(void )
#line 186
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (CC1000CsmaP$radioState == CC1000CsmaP$DISABLED_STATE) 
      {
        CC1000CsmaP$ByteRadioControl$start();
        CC1000CsmaP$enterIdleStateSetWakeup();
        CC1000CsmaP$f.txPending = FALSE;
      }
    else 
      {
        unsigned char __nesc_temp = 
#line 195
        SUCCESS;

        {
#line 195
          __nesc_atomic_end(__nesc_atomic); 
#line 195
          return __nesc_temp;
        }
      }
#line 197
    __nesc_atomic_end(__nesc_atomic); }
#line 197
  CC1000CsmaP$radioOn();

  CC1000CsmaP$startStopDone$postTask();

  return SUCCESS;
}

# 83 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
inline static error_t proj1C$RadioControl$start(void ){
#line 83
  unsigned char result;
#line 83

#line 83
  result = CC1000CsmaP$SplitControl$start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 51 "/opt/tinyos-2.1.0/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$SeedInit$init(uint16_t s)
#line 51
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 52
    RandomMlcgC$seed = (uint32_t )(s + 1);
#line 52
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.0/tos/interfaces/ParameterInit.nc"
inline static error_t proj1C$Seed$init(proj1C$Seed$parameter param){
#line 53
  unsigned char result;
#line 53

#line 53
  result = RandomMlcgC$SeedInit$init(param);
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 115 "proj1C.nc"
static inline void proj1C$initQ(msg_q_t *q)
#line 115
{
  int i;

  __nesc_hton_uint8(q->full.data, FALSE);
  __nesc_hton_uint8(q->len.data, Q_LEN);
  __nesc_hton_uint8(q->size.data, 0);

  for (i = 0; i < Q_LEN; i++) {
      __nesc_hton_uint16(q->load_ts[i].data, 0);
    }
}

# 82 "/opt/tinyos-2.1.0/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void )
#line 82
{
  am_group_t myGroup;

#line 84
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 84
    myGroup = ActiveMessageAddressC$group;
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 55 "/opt/tinyos-2.1.0/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t proj1C$ActiveMessageAddress$amGroup(void ){
#line 55
  unsigned char result;
#line 55

#line 55
  result = ActiveMessageAddressC$ActiveMessageAddress$amGroup();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 61 "/opt/tinyos-2.1.0/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 50 "/opt/tinyos-2.1.0/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t proj1C$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned short result;
#line 50

#line 50
  result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 367 "proj1C.nc"
static inline void proj1C$Boot$booted(void )
#line 367
{
  __nesc_hton_uint16(proj1C$gState.id.data, proj1C$ActiveMessageAddress$amAddress());
  __nesc_hton_uint8(proj1C$gState.group.data, proj1C$ActiveMessageAddress$amGroup());

  proj1C$initQ(&proj1C$gQ);



  proj1C$Seed$init(__nesc_ntoh_uint16(proj1C$gState.id.data));

  __nesc_hton_uint16(proj1C$gState.period.data, proj1C$Random$rand16() % DUTY_CYCLE_RANGE + MIN_PERIOD);
  __nesc_hton_uint16(proj1C$gState.query_period.data, __nesc_ntoh_uint16(proj1C$gState.period.data) / 10);
  __nesc_hton_uint8(proj1C$gState.not_duty_cycle.data, proj1C$Random$rand16() % DUTY_CYCLE_INT);
  __nesc_hton_uint8(proj1C$gState.pkt_rate.data, proj1C$Random$rand16() % PKT_RATE_RANGE + MIN_PKT_RATE);
  __nesc_hton_uint16(proj1C$gState.period_count.data, 0);
  __nesc_hton_uint16(proj1C$gState.x_cnt.data, 0);

  __nesc_hton_uint16(proj1C$gState.tTimer_cnt.data, 0);
  __nesc_hton_uint16(proj1C$gState.qTimer_cnt.data, 0);
  __nesc_hton_uint16(proj1C$gState.pktTimer_cnt.data, 0);
  __nesc_hton_uint16(proj1C$gState.send_cnt.data, 0);
  __nesc_hton_uint16(proj1C$gState.q_cmd_rcv_cnt.data, 0);
  __nesc_hton_uint16(proj1C$gState.q_rsp_rcv_cnt.data, 0);
  __nesc_hton_uint16(proj1C$gState.pkt_rcv_cnt.data, 0);
  __nesc_hton_uint16(proj1C$gState.dflt_rcv_cnt.data, 0);
  __nesc_hton_uint16(proj1C$gState.rcv_cnt.data, 0);

  __nesc_hton_uint16(proj1C$gState.send_busy_err.data, 0);
  __nesc_hton_uint16(proj1C$gState.send_fail_err.data, 0);
  __nesc_hton_uint16(proj1C$gState.q_full_err.data, 0);

  if (proj1C$RadioControl$start() != SUCCESS) {
      proj1C$report_problem();
    }

  proj1C$LclTime$startPeriodic(3000);

  printf("Node %d has booted. Period: %d. ON period: %d Period Cnt: %d Pkt Rate: %d\n", __nesc_ntoh_uint16(
  proj1C$gState.id.data), __nesc_ntoh_uint16(proj1C$gState.period.data), __nesc_ntoh_uint8(proj1C$gState.not_duty_cycle.data), __nesc_ntoh_uint16(proj1C$gState.period_count.data), __nesc_ntoh_uint8(proj1C$gState.pkt_rate.data));
}

# 49 "/opt/tinyos-2.1.0/tos/interfaces/Boot.nc"
inline static void PrintfP$Boot$booted(void ){
#line 49
  proj1C$Boot$booted();
#line 49
}
#line 49
# 113 "/opt/tinyos-2.1.0/tos/lib/printf/PrintfP.nc"
static inline void PrintfP$SerialControl$startDone(error_t error)
#line 113
{
  if (PrintfP$state == PrintfP$S_STOPPED) {

      __iob[1] = &atm128_stdout;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 118
        PrintfP$state = PrintfP$S_STARTED;
#line 118
        __nesc_atomic_end(__nesc_atomic); }
      PrintfP$Boot$booted();
    }
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
inline static void SerialP$SplitControl$startDone(error_t error){
#line 92
  PrintfP$SerialControl$startDone(error);
#line 92
}
#line 92
# 142 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$enableRxIntr(void )
#line 142
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr(void ){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplAtm128UartP$HplUart0$enableRxIntr();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 119 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0RxControl$start(void )
#line 119
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = HplAtm128UartP$Uart0RxControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 107 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0TxControl$start(void )
#line 107
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = HplAtm128UartP$Uart0TxControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 147 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$disableRxIntr(void )
#line 147
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = HplAtm128UartP$HplUart0$disableRxIntr();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 137 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$disableTxIntr(void )
#line 137
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr(void ){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HplAtm128UartP$HplUart0$disableTxIntr();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.1.0/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start();


  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
inline static error_t SerialP$SerialControl$start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 320 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline void SerialP$startDoneTask$runTask(void )
#line 320
{
  SerialP$SerialControl$start();
  SerialP$SplitControl$startDone(SUCCESS);
}

# 45 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP$SerialFrameComm$putDelimiter(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = HdlcTranslateC$SerialFrameComm$putDelimiter();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 183 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = error;
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask();
}

# 80 "/opt/tinyos-2.1.0/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP$SendBytePacket$sendCompleted(error_t error){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error);
#line 80
}
#line 80
# 242 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_empty(void )
#line 242
{
  bool ret;

#line 244
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 244
    ret = SerialP$ackQ.writePtr == SerialP$ackQ.readPtr;
#line 244
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP$ack_queue_top(void )
#line 258
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 260
  {
    if (!SerialP$ack_queue_is_empty()) {
        tmp = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP$ack_queue_pop(void )
#line 268
{
  uint8_t retval = 0;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (SerialP$ackQ.writePtr != SerialP$ackQ.readPtr) {
          retval = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
          if (++ SerialP$ackQ.readPtr > SerialP$ACK_QUEUE_SIZE) {
#line 273
            SerialP$ackQ.readPtr = 0;
            }
        }
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
#line 276
  return retval;
}

#line 539
static inline void SerialP$RunTx$runTask(void )
#line 539
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 556
    {
      SerialP$txPending = 0;
      idle = SerialP$txState == SerialP$TXSTATE_IDLE;
      done = SerialP$txState == SerialP$TXSTATE_FINISH;
      fail = SerialP$txState == SerialP$TXSTATE_ERROR;
      if (done || fail) {
          SerialP$txState = SerialP$TXSTATE_IDLE;
          SerialP$txBuf[SerialP$txIndex].state = SerialP$BUFFER_AVAILABLE;
        }
    }
#line 565
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      SerialP$txSeqno++;
      if (SerialP$txProto == SERIAL_PROTO_ACK) {
          SerialP$ack_queue_pop();
        }
      else {
          result = done ? SUCCESS : FAIL;
          send_completed = TRUE;
        }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 583
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 583
        goInactive = SerialP$offPending;
#line 583
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 585
            SerialP$txState = SerialP$TXSTATE_INACTIVE;
#line 585
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 591
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 591
            {
              myAckState = SerialP$txBuf[SerialP$TX_ACK_INDEX].state;
              myDataState = SerialP$txBuf[SerialP$TX_DATA_INDEX].state;
            }
#line 594
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP$ack_queue_is_empty() && myAckState == SerialP$BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
                {
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].state = SerialP$BUFFER_COMPLETE;
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].buf = SerialP$ack_queue_top();
                }
#line 599
                __nesc_atomic_end(__nesc_atomic); }
              SerialP$txProto = SERIAL_PROTO_ACK;
              SerialP$txIndex = SerialP$TX_ACK_INDEX;
              start_it = TRUE;
            }
          else {
#line 604
            if (myDataState == SerialP$BUFFER_FILLING || myDataState == SerialP$BUFFER_COMPLETE) {
                SerialP$txProto = SERIAL_PROTO_PACKET_NOACK;
                SerialP$txIndex = SerialP$TX_DATA_INDEX;
                start_it = TRUE;
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP$SendBytePacket$sendCompleted(result);
    }

  if (SerialP$txState == SerialP$TXSTATE_INACTIVE) {
      SerialP$testOff();
      return;
    }

  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
        {
          SerialP$txCRC = 0;
          SerialP$txByteCnt = 0;
          SerialP$txState = SerialP$TXSTATE_PROTO;
        }
#line 633
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP$SerialFrameComm$putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 635
            SerialP$txState = SerialP$TXSTATE_ERROR;
#line 635
            __nesc_atomic_end(__nesc_atomic); }
          SerialP$MaybeScheduleTx();
        }
    }
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$stopDoneTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$stopDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 131 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$enableTxIntr(void )
#line 131
{
  * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr(void ){
#line 40
  unsigned char result;
#line 40

#line 40
  result = HplAtm128UartP$HplUart0$enableTxIntr();
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 214 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static __inline void SerialP$ackInit(void )
#line 214
{
  SerialP$ackQ.writePtr = SerialP$ackQ.readPtr = 0;
}

#line 205
static __inline void SerialP$rxInit(void )
#line 205
{
  SerialP$rxBuf.writePtr = SerialP$rxBuf.readPtr = 0;
  SerialP$rxState = SerialP$RXSTATE_NOSYNC;
  SerialP$rxByteCnt = 0;
  SerialP$rxProto = 0;
  SerialP$rxSeqno = 0;
  SerialP$rxCRC = 0;
}

#line 193
static __inline void SerialP$txInit(void )
#line 193
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 195
  for (i = 0; i < SerialP$TX_BUFFER_COUNT; i++) SerialP$txBuf[i].state = SerialP$BUFFER_AVAILABLE;
  SerialP$txState = SerialP$TXSTATE_IDLE;
  SerialP$txByteCnt = 0;
  SerialP$txProto = 0;
  SerialP$txSeqno = 0;
  SerialP$txCRC = 0;
  SerialP$txPending = FALSE;
  SerialP$txIndex = 0;
}

#line 218
static inline error_t SerialP$Init$init(void )
#line 218
{

  SerialP$txInit();
  SerialP$rxInit();
  SerialP$ackInit();

  return SUCCESS;
}

# 69 "/opt/tinyos-2.1.0/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 120 "/opt/tinyos-2.1.0/tos/platforms/mica/MeasureClockC.nc"
static inline uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC$cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short result;
#line 60

#line 60
  result = MeasureClockC$Atm128Calibrate$baudrateRegister(baudrate);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 181 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart1Init$init(void )
#line 181
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 87
static inline error_t HplAtm128UartP$Uart0Init$init(void )
#line 87
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SquelchP.nc"
static inline error_t CC1000SquelchP$Init$init(void )
#line 53
{
  uint8_t i;

  for (i = 0; i < CC1K_SquelchTableSize; i++) 
    CC1000SquelchP$squelchTable[i] = CC1K_SquelchInit;

  return SUCCESS;
}

# 103 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP$calibrate(void )
#line 103
{
  CC1000ControlP$CC$write(CC1K_PA_POW, 0x00);
  CC1000ControlP$CC$write(CC1K_TEST4, 0x3f);


  CC1000ControlP$CC$write(CC1K_MAIN, (1 << CC1K_TX_PD) | (1 << CC1K_RESET_N));

  CC1000ControlP$calibrateNow();


  CC1000ControlP$CC$write(CC1K_MAIN, (((
  1 << CC1K_RXTX) | (
  1 << CC1K_F_REG)) | (
  1 << CC1K_RX_PD)) | (
  1 << CC1K_RESET_N));

  CC1000ControlP$CC$write(CC1K_CURRENT, CC1000ControlP$txCurrent);
  CC1000ControlP$CC$write(CC1K_PA_POW, 0);

  CC1000ControlP$calibrateNow();

  CC1000ControlP$CC1000Control$rxMode();
}

#line 287
static inline void CC1000ControlP$CC1000Control$tunePreset(uint8_t freq)
#line 287
{
  int i;


  for (i = CC1K_FREQ_2A; i <= CC1K_PLL; i++) 
    CC1000ControlP$CC$write(i, __extension__ ({
#line 292
      uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][i];
#line 292
      uint8_t __result;

#line 292
       __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
    }
    ));
#line 293
  CC1000ControlP$CC$write(CC1K_MATCH, __extension__ ({
#line 293
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_MATCH];
#line 293
    uint8_t __result;

#line 293
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  ));
#line 294
  CC1000ControlP$rxCurrent = __extension__ ({
#line 294
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_CURRENT];
#line 294
    uint8_t __result;

#line 294
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 295
  CC1000ControlP$txCurrent = __extension__ ({
#line 295
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_MATCH + 1];
#line 295
    uint8_t __result;

#line 295
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 296
  CC1000ControlP$power = __extension__ ({
#line 296
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_PA_POW];
#line 296
    uint8_t __result;

#line 296
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 298
  CC1000ControlP$calibrate();
}

# 55 "/opt/tinyos-2.1.0/tos/lib/timer/BusyWait.nc"
inline static void CC1000ControlP$BusyWait$wait(CC1000ControlP$BusyWait$size_type dt){
#line 55
  BusyWaitMicroC$BusyWait$wait(dt);
#line 55
}
#line 55
# 78 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline void HplCC1000P$HplCC1000$init(void )
#line 78
{
}

# 52 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000.nc"
inline static void CC1000ControlP$CC$init(void ){
#line 52
  HplCC1000P$HplCC1000$init();
#line 52
}
#line 52
# 246 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP$CC1000Control$init(void )
#line 246
{
  CC1000ControlP$CC$init();


  CC1000ControlP$CC$write(CC1K_MAIN, (((
  1 << CC1K_RX_PD) | (1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (1 << CC1K_BIAS_PD));

  CC1000ControlP$CC1000Control$coreOn();
  CC1000ControlP$BusyWait$wait(2000);



  CC1000ControlP$power = (8 << CC1K_PA_HIGHPOWER) | (0 << CC1K_PA_LOWPOWER);
  CC1000ControlP$CC$write(CC1K_PA_POW, CC1000ControlP$power);


  CC1000ControlP$CC$write(CC1K_LOCK_SELECT, 9 << CC1K_LOCK_SELECT);


  CC1000ControlP$CC$write(CC1K_MODEM2, 0);
  CC1000ControlP$CC$write(CC1K_MODEM1, (((
  3 << CC1K_MLIMIT) | (
  1 << CC1K_LOCK_AVG_MODE)) | (
  3 << CC1K_SETTLING)) | (
  1 << CC1K_MODEM_RESET_N));
  CC1000ControlP$CC$write(CC1K_MODEM0, ((
  5 << CC1K_BAUDRATE) | (
  1 << CC1K_DATA_FORMAT)) | (
  1 << CC1K_XOSC_FREQ));

  CC1000ControlP$CC$write(CC1K_FSCTRL, 1 << CC1K_FS_RESET_N);




  CC1000ControlP$CC1000Control$tunePreset(CC1K_915_998_MHZ);

  CC1000ControlP$CC1000Control$off();
}

# 39 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP$CC1000Control$init(void ){
#line 39
  CC1000ControlP$CC1000Control$init();
#line 39
}
#line 39
# 96 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$initSlave(void )
#line 96
{
  /* atomic removed: atomic calls only */
#line 97
  {
    * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
    * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
  }
}

# 74 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$initSlave(void ){
#line 74
  HplCC1000SpiP$HplCC1000Spi$initSlave();
#line 74
}
#line 74
# 229 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP$Init$init(void )
#line 229
{
  CC1000SendReceiveP$f.ack = TRUE;
  CC1000SendReceiveP$HplCC1000Spi$initSlave();
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t CC1000CsmaP$ByteRadioInit$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC1000SendReceiveP$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 168 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline error_t CC1000CsmaP$Init$init(void )
#line 168
{
  CC1000CsmaP$ByteRadioInit$init();
  CC1000CsmaP$CC1000Control$init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void )
#line 51
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ);
  return SUCCESS;
}

# 44 "/opt/tinyos-2.1.0/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 122 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 122
{
#line 122
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 56
  HplAtm128Timer0AsyncP$Compare$start();
#line 56
}
#line 56
# 76 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x)
#line 76
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP$TimerCtrl$setControl(control);
#line 37
}
#line 37
# 198 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 198
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init();
#line 51
  result = ecombine(result, RandomMlcgC$Init$init());
#line 51
  result = ecombine(result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, CC1000CsmaP$Init$init());
#line 51
  result = ecombine(result, CC1000SquelchP$Init$init());
#line 51
  result = ecombine(result, HplAtm128UartP$Uart0Init$init());
#line 51
  result = ecombine(result, HplAtm128UartP$Uart1Init$init());
#line 51
  result = ecombine(result, /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init());
#line 51
  result = ecombine(result, SerialP$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 7)) != 0;
}

# 32 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static bool HplCC1000P$PDATA$get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )50U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PCLK$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 7);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )50U &= ~(1 << 7);
}

# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )50U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PALE$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr();
#line 30
}
#line 30
# 146 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P$HplCC1000$read(uint8_t addr)
#line 146
{
  int cnt;
  uint8_t din;
  uint8_t data = 0;


  addr <<= 1;
  HplCC1000P$PALE$clr();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        HplCC1000P$PDATA$set();
        }
      else {
#line 159
        HplCC1000P$PDATA$clr();
        }
#line 160
      HplCC1000P$PCLK$clr();
      HplCC1000P$PCLK$set();
      addr <<= 1;
    }
  HplCC1000P$PDATA$clr();
  HplCC1000P$PCLK$clr();
  HplCC1000P$PCLK$set();

  HplCC1000P$PDATA$makeInput();
  HplCC1000P$PALE$set();


  for (cnt = 7; cnt >= 0; cnt--) 
    {
      HplCC1000P$PCLK$clr();
      din = HplCC1000P$PDATA$get();
      if (din) {
        data = (data << 1) | 0x01;
        }
      else {
#line 179
        data = (data << 1) & 0xfe;
        }
#line 180
      HplCC1000P$PCLK$set();
    }

  HplCC1000P$PALE$set();
  HplCC1000P$PDATA$makeOutput();
  HplCC1000P$PDATA$set();

  return data;
}

# 66 "/opt/tinyos-2.1.0/tos/chips/cc1000/HplCC1000.nc"
inline static uint8_t CC1000ControlP$CC$read(uint8_t addr){
#line 66
  unsigned char result;
#line 66

#line 66
  result = HplCC1000P$HplCC1000$read(addr);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$startDoneTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$startDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 342 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SplitControl$start(void )
#line 342
{
  SerialP$startDoneTask$postTask();
  return SUCCESS;
}

# 83 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
inline static error_t PrintfP$SerialControl$start(void ){
#line 83
  unsigned char result;
#line 83

#line 83
  result = SerialP$SplitControl$start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 109 "/opt/tinyos-2.1.0/tos/lib/printf/PrintfP.nc"
static inline void PrintfP$MainBoot$booted(void )
#line 109
{
  PrintfP$SerialControl$start();
}

# 49 "/opt/tinyos-2.1.0/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 49
  PrintfP$MainBoot$booted();
#line 49
}
#line 49
# 155 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void )
#line 155
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 170
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void ){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HplAtm128Timer0AsyncP$McuPowerOverride$lowestState();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.1.0/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void )
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/opt/tinyos-2.1.0/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/tinyos-2.1.0/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC$McuSleep$sleep(void )
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC$getPowerState(), McuSleepC$McuPowerOverride$lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC$atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 104
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");}

# 59 "/opt/tinyos-2.1.0/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP$McuSleep$sleep(void ){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void )
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 72
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.1.0/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$taskLoop(void ){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 387 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$dataReceived(uint8_t data)
#line 387
{
  SerialP$rx_state_machine(FALSE, data);
}

# 83 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t data){
#line 83
  SerialP$SerialFrameComm$dataReceived(data);
#line 83
}
#line 83
# 384 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$delimiterReceived(void )
#line 384
{
  SerialP$rx_state_machine(TRUE, 0);
}

# 74 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$delimiterReceived(void ){
#line 74
  SerialP$SerialFrameComm$delimiterReceived();
#line 74
}
#line 74
# 61 "/opt/tinyos-2.1.0/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$receivedByte(uint8_t data)
#line 61
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC$SerialFrameComm$delimiterReceived();
      return;
    }
  else {
#line 73
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC$state.receiveEscape = 1;
        return;
      }
    else {
#line 78
      if (HdlcTranslateC$state.receiveEscape) {

          HdlcTranslateC$state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 83
  HdlcTranslateC$SerialFrameComm$dataReceived(data);
}

# 79 "/opt/tinyos-2.1.0/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC$UartStream$receivedByte(byte);
#line 79
}
#line 79
# 116 "/opt/tinyos-2.1.0/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 99 "/opt/tinyos-2.1.0/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC$UartStream$receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/opt/tinyos-2.1.0/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart0$rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(data);
#line 49
}
#line 49
# 391 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline bool SerialP$valid_rx_proto(uint8_t proto)
#line 391
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 192 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void )
#line 192
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 1;
    }
}

#line 188
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void )
#line 188
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked;
}

#line 215
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void )
#line 215
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 217
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 51 "/opt/tinyos-2.1.0/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP$ReceiveBytePacket$startPacket(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 309 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP$rx_current_crc(void )
#line 309
{
  uint16_t crc;
  uint8_t tmp = SerialP$rxBuf.writePtr;

#line 312
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP$rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP$rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 69 "/opt/tinyos-2.1.0/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP$ReceiveBytePacket$endPacket(error_t result){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(result);
#line 69
}
#line 69
# 210 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void )
#line 210
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which];
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 232 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_full(void )
#line 232
{
  uint8_t tmp;
#line 233
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 234
  {
    tmp = SerialP$ackQ.writePtr;
    tmp2 = SerialP$ackQ.readPtr;
  }
  if (++tmp > SerialP$ACK_QUEUE_SIZE) {
#line 238
    tmp = 0;
    }
#line 239
  return tmp == tmp2;
}







static __inline void SerialP$ack_queue_push(uint8_t token)
#line 248
{
  if (!SerialP$ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 250
      {
        SerialP$ackQ.buf[SerialP$ackQ.writePtr] = token;
        if (++ SerialP$ackQ.writePtr > SerialP$ACK_QUEUE_SIZE) {
#line 252
          SerialP$ackQ.writePtr = 0;
          }
      }
#line 254
      SerialP$MaybeScheduleTx();
    }
}

# 233 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b)
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE: 
          default: 
#line 255
            ;
      }
  }
}

# 58 "/opt/tinyos-2.1.0/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP$ReceiveBytePacket$byteReceived(uint8_t data){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(data);
#line 58
}
#line 58
# 299 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP$rx_buffer_top(void )
#line 299
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 301
  return tmp;
}

#line 303
static __inline uint8_t SerialP$rx_buffer_pop(void )
#line 303
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 305
  if (++ SerialP$rxBuf.readPtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 305
    SerialP$rxBuf.readPtr = 0;
    }
#line 306
  return tmp;
}

#line 295
static __inline void SerialP$rx_buffer_push(uint8_t data)
#line 295
{
  SerialP$rxBuf.buf[SerialP$rxBuf.writePtr] = data;
  if (++ SerialP$rxBuf.writePtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 297
    SerialP$rxBuf.writePtr = 0;
    }
}

# 55 "/opt/tinyos-2.1.0/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$SerialFrameComm$resetReceive(void )
#line 55
{
  HdlcTranslateC$state.receiveEscape = 0;
}

# 68 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP$SerialFrameComm$resetReceive(void ){
#line 68
  HdlcTranslateC$SerialFrameComm$resetReceive();
#line 68
}
#line 68
#line 54
inline static error_t SerialP$SerialFrameComm$putData(uint8_t data){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HdlcTranslateC$SerialFrameComm$putData(data);
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 513 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SendBytePacket$completeSend(void )
#line 513
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 515
  {
    SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 60 "/opt/tinyos-2.1.0/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void ){
#line 60
  unsigned char result;
#line 60

#line 60
  result = SerialP$SendBytePacket$completeSend();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 167 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void )
#line 167
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 170
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 70 "/opt/tinyos-2.1.0/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP$SendBytePacket$nextByte(void ){
#line 70
  unsigned char result;
#line 70

#line 70
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 642 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$putDone(void )
#line 642
{
  {
    error_t txResult = SUCCESS;

    switch (SerialP$txState) {

        case SerialP$TXSTATE_PROTO: 

          txResult = SerialP$SerialFrameComm$putData(SerialP$txProto);

        SerialP$txState = SerialP$TXSTATE_INFO;



        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txProto);
        break;

        case SerialP$TXSTATE_SEQNO: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txSeqno);
        SerialP$txState = SerialP$TXSTATE_INFO;
        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txSeqno);
        break;

        case SerialP$TXSTATE_INFO: 
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 666
            {
              txResult = SerialP$SerialFrameComm$putData(SerialP$txBuf[SerialP$txIndex].buf);
              SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txBuf[SerialP$txIndex].buf);
              ++SerialP$txByteCnt;

              if (SerialP$txIndex == SerialP$TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 673
                  nextByte = SerialP$SendBytePacket$nextByte();
                  if (SerialP$txBuf[SerialP$txIndex].state == SerialP$BUFFER_COMPLETE || SerialP$txByteCnt >= SerialP$SERIAL_MTU) {
                      SerialP$txState = SerialP$TXSTATE_FCS1;
                    }
                  else {
                      SerialP$txBuf[SerialP$txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP$txState = SerialP$TXSTATE_FCS1;
                }
            }
#line 684
            __nesc_atomic_end(__nesc_atomic); }
        break;

        case SerialP$TXSTATE_FCS1: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txCRC & 0xff);
        SerialP$txState = SerialP$TXSTATE_FCS2;
        break;

        case SerialP$TXSTATE_FCS2: 
          txResult = SerialP$SerialFrameComm$putData((SerialP$txCRC >> 8) & 0xff);
        SerialP$txState = SerialP$TXSTATE_ENDFLAG;
        break;

        case SerialP$TXSTATE_ENDFLAG: 
          txResult = SerialP$SerialFrameComm$putDelimiter();
        SerialP$txState = SerialP$TXSTATE_ENDWAIT;
        break;

        case SerialP$TXSTATE_ENDWAIT: 
          SerialP$txState = SerialP$TXSTATE_FINISH;
        case SerialP$TXSTATE_FINISH: 
          SerialP$MaybeScheduleTx();
        break;
        case SerialP$TXSTATE_ERROR: 
          default: 
            txResult = FAIL;
        break;
      }

    if (txResult != SUCCESS) {
        SerialP$txState = SerialP$TXSTATE_ERROR;
        SerialP$MaybeScheduleTx();
      }
  }
}

# 89 "/opt/tinyos-2.1.0/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$putDone(void ){
#line 89
  SerialP$SerialFrameComm$putDone();
#line 89
}
#line 89
# 48 "/opt/tinyos-2.1.0/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC$UartStream$send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(buf, len);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 104 "/opt/tinyos-2.1.0/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 105
{
  if (HdlcTranslateC$state.sendEscape) {
      HdlcTranslateC$state.sendEscape = 0;
      HdlcTranslateC$m_data = HdlcTranslateC$txTemp;
      HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
    }
  else {
      HdlcTranslateC$SerialFrameComm$putDone();
    }
}

# 57 "/opt/tinyos-2.1.0/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC$UartStream$sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t data){
#line 46
  HplAtm128UartP$HplUart0$tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.1.0/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart0$txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone();
#line 47
}
#line 47
# 277 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data)
#line 277
{
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart1$rxDone(uint8_t data){
#line 49
  HplAtm128UartP$HplUart1$default$rxDone(data);
#line 49
}
#line 49
# 276 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP$HplUart1$default$txDone(void )
#line 276
{
}

# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart1$txDone(void ){
#line 47
  HplAtm128UartP$HplUart1$default$txDone();
#line 47
}
#line 47
# 188 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$CompareA$default$fired(void )
#line 188
{
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P$CompareA$fired(void ){
#line 49
  HplAtm128Timer3P$CompareA$default$fired();
#line 49
}
#line 49
# 192 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$CompareB$default$fired(void )
#line 192
{
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P$CompareB$fired(void ){
#line 49
  HplAtm128Timer3P$CompareB$default$fired();
#line 49
}
#line 49
# 196 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$CompareC$default$fired(void )
#line 196
{
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P$CompareC$fired(void ){
#line 49
  HplAtm128Timer3P$CompareC$default$fired();
#line 49
}
#line 49
# 200 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$Capture$default$captured(uint16_t time)
#line 200
{
}

# 51 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Capture$size_type t){
#line 51
  HplAtm128Timer3P$Capture$default$captured(t);
#line 51
}
#line 51
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$Timer$get(void )
#line 47
{
#line 47
  return * (volatile uint16_t *)0x88;
}

# 216 "/opt/tinyos-2.1.0/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void )
#line 216
{
}

# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow(void ){
#line 71
  /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.1.0/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper & /*CounterMicro32C.Transform32*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$overflow(void ){
#line 71
  /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$overflow();
}

# 51 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow(void )
#line 51
{
}

# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer3P$Timer$overflow(void ){
#line 61
  /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow();
#line 61
  /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow();
#line 61
}
#line 61
# 61 "/opt/tinyos-2.1.0/tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$maxSize(void )
#line 61
{
  return 250;
}

#line 97
static inline error_t /*PrintfC.QueueC*/QueueC$0$Queue$enqueue(/*PrintfC.QueueC*/QueueC$0$queue_t newVal)
#line 97
{
  if (/*PrintfC.QueueC*/QueueC$0$Queue$size() < /*PrintfC.QueueC*/QueueC$0$Queue$maxSize()) {
      ;
      /*PrintfC.QueueC*/QueueC$0$queue[/*PrintfC.QueueC*/QueueC$0$tail] = newVal;
      /*PrintfC.QueueC*/QueueC$0$tail++;
      if (/*PrintfC.QueueC*/QueueC$0$tail == 250) {
#line 102
        /*PrintfC.QueueC*/QueueC$0$tail = 0;
        }
#line 103
      /*PrintfC.QueueC*/QueueC$0$size++;
      /*PrintfC.QueueC*/QueueC$0$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-2.1.0/tos/interfaces/Queue.nc"
inline static error_t PrintfP$Queue$enqueue(PrintfP$Queue$t  newVal){
#line 90
  unsigned char result;
#line 90

#line 90
  result = /*PrintfC.QueueC*/QueueC$0$Queue$enqueue(newVal);
#line 90

#line 90
  return result;
#line 90
}
#line 90
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void )
#line 46
{
  return * (volatile uint16_t *)(0x04 + 0x20);
}

#line 43
static inline Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void )
#line 43
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)(0x06 + 0x20);
}

#line 108
static inline bool HplAtm128AdcP$HplAtm128Adc$cancel(void )
#line 108
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP$HplAtm128Adc$getAdcsra();
#line 112
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 129
      oldSr.adif || oldSr.adsc;

#line 129
      return __nesc_temp;
    }
  }
}

# 141 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP$HplAtm128Adc$cancel(void ){
#line 141
  unsigned char result;
#line 141

#line 141
  result = HplAtm128AdcP$HplAtm128Adc$cancel();
#line 141

#line 141
  return result;
#line 141
}
#line 141
# 242 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 243
{
  return FALSE;
}

# 110 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 110
  unsigned char result;
#line 110

#line 110
  result = Atm128AdcP$Atm128AdcMultiple$default$dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP$Resource$release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(/*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$HAL_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 89 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP$startNextOp(void )
#line 89
{
  CC1000RssiP$currentOp = CC1000RssiP$nextOp;
  if (CC1000RssiP$nextOp != CC1000RssiP$IDLE) 
    {
      CC1000RssiP$nextOp = CC1000RssiP$IDLE;
      CC1000RssiP$ActualRssi$read();
    }
  else {
    CC1000RssiP$Resource$release();
    }
}

# 61 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP$ByteRadio$listen(void ){
#line 61
  CC1000SendReceiveP$ByteRadio$listen();
#line 61
}
#line 61
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP$adjustSquelch$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC1000CsmaP$adjustSquelch);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 46 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000Squelch.nc"
inline static uint16_t CC1000CsmaP$CC1000Squelch$get(void ){
#line 46
  unsigned short result;
#line 46

#line 46
  result = CC1000SquelchP$CC1000Squelch$get();
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 318 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$RssiPulseCheck$readDone(error_t result, uint16_t data)
#line 318
{
  if (result != SUCCESS) 
    {

      CC1000CsmaP$sleepCheck$postTask();
      return;
    }






  if (data > CC1000CsmaP$CC1000Squelch$get() - (CC1000CsmaP$CC1000Squelch$get() >> 2)) 
    {
      CC1000CsmaP$sleepCheck$postTask();

      if (data < CC1000CsmaP$CC1000Squelch$get() + (CC1000CsmaP$CC1000Squelch$get() >> 3)) 
        {

          CC1000CsmaP$rssiForSquelch = data;
          CC1000CsmaP$adjustSquelch$postTask();
        }
    }
  else {
#line 342
    if (CC1000CsmaP$count++ > 5) 
      {

        CC1000CsmaP$enterIdleStateSetWakeup();
        CC1000CsmaP$ByteRadio$listen();
      }
    else 
      {
        CC1000CsmaP$RssiPulseCheck$read();
        CC1000CsmaP$BusyWait$wait(80);
      }
    }
}

# 186 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterTxPreambleState(void )
#line 186
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXPREAMBLE_STATE;
  CC1000SendReceiveP$count = 0;
  CC1000SendReceiveP$runningCrc = 0;
  CC1000SendReceiveP$nextTxByte = 0xaa;
}

#line 271
static inline void CC1000SendReceiveP$ByteRadio$cts(void )
#line 271
{

  CC1000SendReceiveP$enterTxPreambleState();
  CC1000SendReceiveP$HplCC1000Spi$writeByte(0xaa);
  CC1000SendReceiveP$CC1000Control$txMode();
  CC1000SendReceiveP$HplCC1000Spi$txMode();
}

# 32 "/opt/tinyos-2.1.0/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP$ByteRadio$cts(void ){
#line 32
  CC1000SendReceiveP$ByteRadio$cts();
#line 32
}
#line 32
# 144 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$enterTxState(void )
#line 144
{
  CC1000CsmaP$radioState = CC1000CsmaP$TX_STATE;
}

#line 397
static inline void CC1000CsmaP$RssiCheckChannel$readDone(error_t result, uint16_t data)
#line 397
{
  if (result != SUCCESS) 
    {
      /* atomic removed: atomic calls only */
      CC1000CsmaP$macDelay = 1;
      return;
    }

  CC1000CsmaP$count++;
  if (data > CC1000CsmaP$CC1000Squelch$get() + CC1K_SquelchBuffer) {
    CC1000CsmaP$clearCount++;
    }
  else {
#line 409
    CC1000CsmaP$clearCount = 0;
    }

  if (CC1000CsmaP$clearCount >= 1 || CC1000CsmaP$f.ccaOff) 
    {
      CC1000CsmaP$enterTxState();
      CC1000CsmaP$ByteRadio$cts();
    }
  else {
#line 417
    if (CC1000CsmaP$count == CC1K_MaxRSSISamples) {
      CC1000CsmaP$congestion();
      }
    else {
#line 420
      CC1000CsmaP$RssiCheckChannel$read();
      }
    }
}

#line 445
static inline void CC1000CsmaP$RssiNoiseFloor$readDone(error_t result, uint16_t data)
#line 445
{
  if (result != SUCCESS) 
    {

      CC1000CsmaP$sleepCheck$postTask();
      return;
    }

  CC1000CsmaP$rssiForSquelch = data;
  CC1000CsmaP$adjustSquelch$postTask();
  CC1000CsmaP$sleepCheck$postTask();
}

# 476 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$RssiRx$readDone(error_t result, uint16_t data)
#line 476
{
  cc1000_metadata_t *rxMetadata = CC1000SendReceiveP$getMetadata(CC1000SendReceiveP$rxBufPtr);

  if (result != SUCCESS) {
    __nesc_hton_int16(rxMetadata->strength_or_preamble.data, 0);
    }
  else {
#line 482
    __nesc_hton_int16(rxMetadata->strength_or_preamble.data, data);
    }
}

# 109 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP$Rssi$default$readDone(uint8_t reason, error_t result, uint16_t data)
#line 109
{
}

# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
inline static void CC1000RssiP$Rssi$readDone(uint8_t arg_0x409c3278, error_t result, CC1000RssiP$Rssi$val_t val){
#line 66
  switch (arg_0x409c3278) {
#line 66
    case 0U:
#line 66
      CC1000SendReceiveP$RssiRx$readDone(result, val);
#line 66
      break;
#line 66
    case 1U:
#line 66
      CC1000CsmaP$RssiNoiseFloor$readDone(result, val);
#line 66
      break;
#line 66
    case 2U:
#line 66
      CC1000CsmaP$RssiCheckChannel$readDone(result, val);
#line 66
      break;
#line 66
    case 3U:
#line 66
      CC1000CsmaP$RssiPulseCheck$readDone(result, val);
#line 66
      break;
#line 66
    default:
#line 66
      CC1000RssiP$Rssi$default$readDone(arg_0x409c3278, result, val);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 100 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP$ActualRssi$readDone(error_t result, uint16_t data)
#line 100
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {

      CC1000RssiP$Rssi$readDone(CC1000RssiP$currentOp, result, data);
      CC1000RssiP$startNextOp();
    }
#line 106
    __nesc_atomic_end(__nesc_atomic); }
}

# 150 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP$ReadNow$default$readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 66 "/opt/tinyos-2.1.0/tos/interfaces/ReadNow.nc"
inline static void AdcP$ReadNow$readDone(uint8_t arg_0x40ae3088, error_t result, AdcP$ReadNow$val_t val){
#line 66
  switch (arg_0x40ae3088) {
#line 66
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$ID:
#line 66
      CC1000RssiP$ActualRssi$readDone(result, val);
#line 66
      break;
#line 66
    default:
#line 66
      AdcP$ReadNow$default$readDone(arg_0x40ae3088, result, val);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP$acquiredData$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(AdcP$acquiredData);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 108 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP$state) 
    {
      case AdcP$ACQUIRE_DATA: 
        if (!precise) {
          AdcP$sample();
          }
        else {
            AdcP$val = data;
            AdcP$acquiredData$postTask();
          }
      break;

      case AdcP$ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP$sample();
          }
        else {
            AdcP$state = AdcP$IDLE;
            AdcP$ReadNow$readDone(AdcP$client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 72 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise){
#line 72
  AdcP$Atm128AdcSingle$dataReady(data, precise);
#line 72
}
#line 72
# 78 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void )
#line 78
{
#line 78
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 86 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$disableInterruption(void ){
#line 86
  HplAtm128AdcP$HplAtm128Adc$disableInterruption();
#line 86
}
#line 86
# 124 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data)
#line 124
{
  bool precise;
#line 125
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP$f.channel;
      precise = Atm128AdcP$f.precise;
      multiple = Atm128AdcP$f.multiple;
    }
#line 133
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP$HplAtm128Adc$disableInterruption();
      Atm128AdcP$Atm128AdcSingle$dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 152
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP$HplAtm128Adc$getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 160
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP$Atm128AdcMultiple$dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP$HplAtm128Adc$setAdmux(admux);

            Atm128AdcP$f = Atm128AdcP$nextF;
            Atm128AdcP$nextF.channel = nextChannel;
            Atm128AdcP$nextF.precise = Atm128AdcP$isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP$HplAtm128Adc$cancel();
          }
#line 180
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 147 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t data){
#line 147
  Atm128AdcP$HplAtm128Adc$dataReady(data);
#line 147
}
#line 147
# 140 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void )
#line 140
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 47 "/opt/tinyos-2.1.0/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 82 "/opt/tinyos-2.1.0/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 82
{
   __asm volatile ("sei");}

# 132 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 132
{
#line 132
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 39 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 39
  unsigned char result;
#line 39

#line 39
  result = HplAtm128Timer0AsyncP$Compare$get();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 149 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 49
}
#line 49
# 230 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer$overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
# 62 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 62
{
  register uint8_t temp = * (volatile uint8_t *)(0x0F + 0x20);

#line 64
  * (volatile uint8_t *)(0x0F + 0x20) = HplCC1000SpiP$outgoingByte;
  HplCC1000SpiP$HplCC1000Spi$dataReady(temp);
}

# 81 "/opt/tinyos-2.1.0/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 325 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP$CC1000Control$rxMode(void )
#line 325
{


  CC1000ControlP$CC$write(CC1K_CURRENT, CC1000ControlP$rxCurrent);
  CC1000ControlP$CC$write(CC1K_PA_POW, 0);
  CC1000ControlP$CC$write(CC1K_MAIN, (1 << CC1K_TX_PD) | (1 << CC1K_RESET_N));
  CC1000ControlP$BusyWait$wait(125);
}

# 94 "/opt/tinyos-2.1.0/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static void HplCC1000P$HplCC1000$write(uint8_t addr, uint8_t data)
#line 94
{
  char cnt = 0;


  addr <<= 1;
  HplCC1000P$PALE$clr();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        HplCC1000P$PDATA$set();
        }
      else {
#line 105
        HplCC1000P$PDATA$clr();
        }
#line 106
      HplCC1000P$PCLK$clr();
      HplCC1000P$PCLK$set();
      addr <<= 1;
    }
  HplCC1000P$PDATA$set();
  HplCC1000P$PCLK$clr();
  HplCC1000P$PCLK$set();

  HplCC1000P$PALE$set();


  for (cnt = 0; cnt < 8; cnt++) 
    {
      if (data & 0x80) {
        HplCC1000P$PDATA$set();
        }
      else {
#line 122
        HplCC1000P$PDATA$clr();
        }
#line 123
      HplCC1000P$PCLK$clr();
      HplCC1000P$PCLK$set();
      data <<= 1;
    }
  HplCC1000P$PALE$set();
  HplCC1000P$PDATA$set();
  HplCC1000P$PCLK$set();
}

# 159 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/opt/tinyos-2.1.0/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC$seed = mlcg;
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 75 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000RssiP.nc"
static error_t CC1000RssiP$Rssi$read(uint8_t reason)
#line 75
{
  if (CC1000RssiP$currentOp == CC1000RssiP$IDLE) 
    {
      CC1000RssiP$currentOp = reason;
      if (CC1000RssiP$Resource$immediateRequest() == SUCCESS) {
        CC1000RssiP$ActualRssi$read();
        }
      else {
#line 82
        CC1000RssiP$Resource$request();
        }
    }
  else {
#line 85
    CC1000RssiP$nextOp = reason;
    }
#line 86
  return SUCCESS;
}

# 129 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void )
#line 129
{
  /* atomic removed: atomic calls only */
#line 130
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$default_owner_id) {
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING) {
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
            {
              unsigned char __nesc_temp = 
#line 134
              SUCCESS;

#line 134
              return __nesc_temp;
            }
          }
        else {
#line 136
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 139
                SUCCESS;

#line 139
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 143
  return FAIL;
}

# 82 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/AdcP.nc"
static void AdcP$sample(void )
#line 82
{
  AdcP$Atm128AdcSingle$getData(AdcP$channel(), AdcP$refVoltage(), FALSE, AdcP$prescaler());
}

# 65 "/opt/tinyos-2.1.0/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id)
#line 65
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] & (1 << id % 8);
}

# 430 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP$ByteRadio$rxDone(void )
#line 430
{
  if (CC1000CsmaP$radioState == CC1000CsmaP$RX_STATE) {
    CC1000CsmaP$enterIdleStateSetWakeup();
    }
}

# 95 "/opt/tinyos-2.1.0/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void )
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC$addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 311 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP$CC1000Control$txMode(void )
#line 311
{

  CC1000ControlP$CC$write(CC1K_MAIN, (((
  1 << CC1K_RXTX) | (
  1 << CC1K_F_REG)) | (
  1 << CC1K_RX_PD)) | (
  1 << CC1K_RESET_N));

  CC1000ControlP$CC$write(CC1K_CURRENT, CC1000ControlP$txCurrent);
  CC1000ControlP$BusyWait$wait(250);
  CC1000ControlP$CC$write(CC1K_PA_POW, CC1000ControlP$power);
  CC1000ControlP$BusyWait$wait(20);
}

# 570 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static void CC1000SendReceiveP$packetReceiveDone(void )
#line 570
{
  unsigned char *__nesc_temp89;
  unsigned char *__nesc_temp88;
#line 571
  uint16_t snr;

  snr = (uint16_t )__nesc_ntoh_int16(CC1000SendReceiveP$getMetadata(CC1000SendReceiveP$rxBufPtr)->strength_or_preamble.data);


  if (snr + CC1000_WHITE_BIT_THRESH < CC1000SendReceiveP$CC1000Squelch$get()) {
      (__nesc_temp88 = CC1000SendReceiveP$getMetadata(CC1000SendReceiveP$rxBufPtr)->metadataBits.data, __nesc_hton_uint8(__nesc_temp88, __nesc_ntoh_uint8(__nesc_temp88) | CC1000_WHITE_BIT));
    }
  else {
      (__nesc_temp89 = CC1000SendReceiveP$getMetadata(CC1000SendReceiveP$rxBufPtr)->metadataBits.data, __nesc_hton_uint8(__nesc_temp89, __nesc_ntoh_uint8(__nesc_temp89) & ~CC1000_WHITE_BIT));
    }

  CC1000SendReceiveP$signalPacketReceived$postTask();
  CC1000SendReceiveP$enterReceivedState();
}

# 52 "/opt/tinyos-2.1.0/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 123 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 164
static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x4033ce28){
#line 64
  switch (arg_0x4033ce28) {
#line 64
    case SerialP$RunTx:
#line 64
      SerialP$RunTx$runTask();
#line 64
      break;
#line 64
    case SerialP$startDoneTask:
#line 64
      SerialP$startDoneTask$runTask();
#line 64
      break;
#line 64
    case SerialP$stopDoneTask:
#line 64
      SerialP$stopDoneTask$runTask();
#line 64
      break;
#line 64
    case SerialP$defaultSerialFlushTask:
#line 64
      SerialP$defaultSerialFlushTask$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 64
      break;
#line 64
    case PrintfP$retrySend:
#line 64
      PrintfP$retrySend$runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP$setWakeupTask:
#line 64
      CC1000CsmaP$setWakeupTask$runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP$startStopDone:
#line 64
      CC1000CsmaP$startStopDone$runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP$sleepCheck:
#line 64
      CC1000CsmaP$sleepCheck$runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP$adjustSquelch:
#line 64
      CC1000CsmaP$adjustSquelch$runTask();
#line 64
      break;
#line 64
    case CC1000SendReceiveP$signalPacketSent:
#line 64
      CC1000SendReceiveP$signalPacketSent$runTask();
#line 64
      break;
#line 64
    case CC1000SendReceiveP$signalPacketReceived:
#line 64
      CC1000SendReceiveP$signalPacketReceived$runTask();
#line 64
      break;
#line 64
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case AdcP$acquiredData:
#line 64
      AdcP$acquiredData$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x4033ce28);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 48 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

#line 48
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 155 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(last, msg, err);
}

# 108 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static am_addr_t CC1000ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 108
{
  cc1000_header_t *header = CC1000ActiveMessageP$getHeader(amsg);

#line 110
  return __nesc_ntoh_uint16(header->dest.data);
}

#line 62
static error_t CC1000ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 64
{
  cc1000_header_t *header = CC1000ActiveMessageP$getHeader(amsg);

#line 66
  __nesc_hton_uint8(header->type.data, id);
  __nesc_hton_uint16(header->dest.data, addr);
  __nesc_hton_uint16(header->source.data, CC1000ActiveMessageP$AMPacket$address());
  __nesc_hton_uint8(header->group.data, TOS_AM_GROUP);
  return CC1000ActiveMessageP$SubSend$send(amsg, len);
}

# 161 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 62 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 141 "proj1C.nc"
static bool proj1C$loadQ(msg_q_t *q, lmsg_t *m)
#line 141
{
  unsigned char __nesc_temp45;
  unsigned char *__nesc_temp44;
#line 142
  int i;
  bool q_loaded = FALSE;

  if (__nesc_ntoh_uint8(q->full.data)) {
      return FALSE;
    }

  for (i = 0; i < Q_LEN; i++) {

      if (!__nesc_ntoh_uint16(q->load_ts[i].data)) {
          break;
        }
    }

  if (i == Q_LEN) {
      __nesc_hton_uint8(q->full.data, TRUE);
    }
  else 
    {
      (__nesc_temp44 = q->size.data, __nesc_hton_uint8(__nesc_temp44, (__nesc_temp45 = __nesc_ntoh_uint8(__nesc_temp44)) + 1), __nesc_temp45);
      __nesc_hton_uint16(q->load_ts[i].data, proj1C$LclTime$getNow());
      memcpy((lmsg_t *)&q->buff[i], m, sizeof(lmsg_t ));
      q_loaded = TRUE;
    }

  if (__nesc_ntoh_uint8(q->size.data) == Q_LEN) {
      __nesc_hton_uint8(q->full.data, TRUE);
    }

  return q_loaded;
}

# 45 "/opt/tinyos-2.1.0/tos/system/AMQueueEntryP.nc"
static error_t /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(msg, dest);
  /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(msg, 16);
  return /*proj1AppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(msg, len);
}

# 143 "/opt/tinyos-2.1.0/tos/lib/printf/PrintfP.nc"
  int printfflush(void )
#line 143
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 144
    {
      if (PrintfP$state == PrintfP$S_FLUSHING) 
        {
          int __nesc_temp = 
#line 146
          SUCCESS;

          {
#line 146
            __nesc_atomic_end(__nesc_atomic); 
#line 146
            return __nesc_temp;
          }
        }
#line 147
      if (PrintfP$Queue$empty()) 
        {
          int __nesc_temp = 
#line 148
          FAIL;

          {
#line 148
            __nesc_atomic_end(__nesc_atomic); 
#line 148
            return __nesc_temp;
          }
        }
#line 149
      PrintfP$state = PrintfP$S_FLUSHING;
    }
#line 150
    __nesc_atomic_end(__nesc_atomic); }
  PrintfP$sendNext();
  return SUCCESS;
}

#line 132
static void PrintfP$sendNext(void )
#line 132
{
  int i;
  printf_msg_t *m = (printf_msg_t *)PrintfP$Packet$getPayload(&PrintfP$printfMsg, sizeof(printf_msg_t ));
  uint16_t length_to_send = PrintfP$Queue$size() < sizeof(printf_msg_t ) ? PrintfP$Queue$size() : sizeof(printf_msg_t );

#line 136
  memset(m->buffer, 0, sizeof(printf_msg_t ));
  for (i = 0; i < length_to_send; i++) 
    __nesc_hton_uint8(m->buffer[i].data, PrintfP$Queue$dequeue());
  if (PrintfP$AMSend$send(AM_BROADCAST_ADDR, &PrintfP$printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP$retrySend$postTask();
    }
}

# 119 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t len)
#line 119
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 45 "/opt/tinyos-2.1.0/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 100);
  return /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 156 "/opt/tinyos-2.1.0/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg)
#line 156
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 158
  return __nesc_ntoh_uint8(header->type.data);
}

#line 132
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(message_t *amsg)
#line 132
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 134
  return __nesc_ntoh_uint16(header->dest.data);
}

#line 57
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 59
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 61
  __nesc_hton_uint16(header->dest.data, dest);





  __nesc_hton_uint8(header->type.data, id);
  __nesc_hton_uint8(header->length.data, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(msg, len);
}

# 502 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static void SerialP$MaybeScheduleTx(void )
#line 502
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 503
    {
      if (SerialP$txPending == 0) {
          if (SerialP$RunTx$postTask() == SUCCESS) {
              SerialP$txPending = 1;
            }
        }
    }
#line 509
    __nesc_atomic_end(__nesc_atomic); }
}

# 143 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

#line 133
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 220 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP$setWakeup(void )
#line 220
{
  switch (CC1000CsmaP$radioState) 
    {
      case CC1000CsmaP$IDLE_STATE: 




        if (!CC1000CsmaP$WakeupTimer$isRunning()) {
          if (CC1000CsmaP$CC1000Squelch$settled()) 
            {
              if (CC1000CsmaP$sleepTime == 0) {
                CC1000CsmaP$WakeupTimer$startOneShot(CC1K_SquelchIntervalSlow);
                }
              else {

                CC1000CsmaP$WakeupTimer$startOneShot(CC1000CsmaP$TIME_AFTER_CHECK);
                }
            }
          else {
#line 239
            CC1000CsmaP$WakeupTimer$startOneShot(CC1K_SquelchIntervalFast);
            }
          }
#line 240
      break;
      case CC1000CsmaP$PULSECHECK_STATE: 

        CC1000CsmaP$WakeupTimer$startOneShot(1);
      break;
      case CC1000CsmaP$POWERDOWN_STATE: 

        CC1000CsmaP$WakeupTimer$startOneShot(CC1000CsmaP$sleepTime);
      break;
    }
}

# 148 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 212 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 108 "/opt/tinyos-2.1.0/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$default_owner_id;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted();
            }
          {
            unsigned char __nesc_temp = 
#line 123
            SUCCESS;

            {
#line 123
              __nesc_atomic_end(__nesc_atomic); 
#line 123
              return __nesc_temp;
            }
          }
        }
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }
#line 126
  return FAIL;
}

# 195 "proj1C.nc"
static bool proj1C$getQ(msg_q_t *q, lmsg_t *m, am_addr_t trgt_addr)
#line 195
{
  unsigned char __nesc_temp47;
  unsigned char *__nesc_temp46;
#line 196
  int i;
  bool retval = TRUE;


  for (i = 0; i < Q_LEN; i++) {

      if (__nesc_ntoh_uint16(q->load_ts[i].data)) {

          if (__nesc_ntoh_uint16(q->buff[i].dst_addr.data) == trgt_addr || 
          trgt_addr == 0) {
              break;
            }
        }
    }

  if (i == Q_LEN) {
      retval = FALSE;
    }
  else 
    {
      __nesc_hton_uint8(q->full.data, FALSE);
      (__nesc_temp46 = q->size.data, __nesc_hton_uint8(__nesc_temp46, (__nesc_temp47 = __nesc_ntoh_uint8(__nesc_temp46)) - 1), __nesc_temp47);
      __nesc_hton_uint16(q->load_ts[i].data, 0);
      memcpy(m, (lmsg_t *)&q->buff[i], sizeof(lmsg_t ));
    }

  return retval;
}

# 353 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP$CC1000Control$off(void )
#line 353
{

  CC1000ControlP$CC$write(CC1K_MAIN, (((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_CORE_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
  CC1000ControlP$CC$write(CC1K_PA_POW, 0);
}

# 150 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP$radioOn(void )
#line 150
{
  CC1000CsmaP$CC1000Control$coreOn();
  CC1000CsmaP$BusyWait$wait(2000);
  CC1000CsmaP$CC1000Control$biasOn();
  CC1000CsmaP$BusyWait$wait(200);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    CC1000CsmaP$ByteRadio$listen();
#line 155
    __nesc_atomic_end(__nesc_atomic); }
}

# 400 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000SendReceiveP.nc"
static void CC1000SendReceiveP$ByteRadio$listen(void )
#line 400
{
  CC1000SendReceiveP$enterListenState();
  CC1000SendReceiveP$CC1000Control$rxMode();
  CC1000SendReceiveP$HplCC1000Spi$rxMode();
  CC1000SendReceiveP$HplCC1000Spi$enableIntr();
}

# 155 "/opt/tinyos-2.1.0/tos/lib/printf/PrintfP.nc"
static void PrintfP$AMSend$sendDone(message_t *msg, error_t error)
#line 155
{
  if (error == SUCCESS) {
      if (PrintfP$Queue$size() > 0) {
        PrintfP$sendNext();
        }
      else {
#line 159
        PrintfP$state = PrintfP$S_STARTED;
        }
    }
  else {
#line 161
    PrintfP$retrySend$postTask();
    }
}

# 155 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 347 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static void SerialP$testOff(void )
#line 347
{
  bool turnOff = FALSE;

#line 349
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP$txState == SerialP$TXSTATE_INACTIVE && 
      SerialP$rxState == SerialP$RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP$stopDoneTask$postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
        SerialP$offPending = FALSE;
#line 357
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
        SerialP$offPending = TRUE;
#line 360
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 86 "/opt/tinyos-2.1.0/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void )
#line 86
{
  HdlcTranslateC$state.sendEscape = 0;
  HdlcTranslateC$m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 155 "/opt/tinyos-2.1.0/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos++]);

  return SUCCESS;
}

# 164 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
static void HplAtm128UartP$HplUart0$tx(uint8_t data)
#line 164
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
}

# 90 "/opt/tinyos-2.1.0/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP$calibrateNow(void )
#line 90
{

  CC1000ControlP$CC$write(CC1K_CAL, ((
  1 << CC1K_CAL_START) | (
  1 << CC1K_CAL_WAIT)) | (
  6 << CC1K_CAL_ITERATE));
  while ((CC1000ControlP$CC$read(CC1K_CAL) & (1 << CC1K_CAL_COMPLETE)) == 0) 
    ;


  CC1000ControlP$CC$write(CC1K_CAL, (1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE));
}

# 171 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void )
#line 171
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP$HplUart0$rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

# 402 "/opt/tinyos-2.1.0/tos/lib/serial/SerialP.nc"
static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data)
#line 402
{

  switch (SerialP$rxState) {

      case SerialP$RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP$rxInit();
            SerialP$rxState = SerialP$RXSTATE_PROTO;
          }
      break;

      case SerialP$RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP$rxCRC = crcByte(SerialP$rxCRC, data);
            SerialP$rxState = SerialP$RXSTATE_TOKEN;
            SerialP$rxProto = data;
            if (!SerialP$valid_rx_proto(SerialP$rxProto)) {
              goto nosync;
              }
            if (SerialP$rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP$ReceiveBytePacket$startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP$RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP$rxSeqno = data;
            SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rxSeqno);
            SerialP$rxState = SerialP$RXSTATE_INFO;
          }
      break;

      case SerialP$RXSTATE_INFO: 
        if (SerialP$rxByteCnt < SerialP$SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP$rxByteCnt >= 2) {
                    if (SerialP$rx_current_crc() == SerialP$rxCRC) {
                        SerialP$ReceiveBytePacket$endPacket(SUCCESS);
                        SerialP$ack_queue_push(SerialP$rxSeqno);
                        goto nosync;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP$rxByteCnt >= 2) {
                    SerialP$ReceiveBytePacket$byteReceived(SerialP$rx_buffer_top());
                    SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rx_buffer_pop());
                  }
                SerialP$rx_buffer_push(data);
                SerialP$rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP$rxInit();
  SerialP$SerialFrameComm$resetReceive();
  SerialP$ReceiveBytePacket$endPacket(FAIL);
  if (SerialP$offPending) {
      SerialP$rxState = SerialP$RXSTATE_INACTIVE;
      SerialP$testOff();
    }
  else {
    if (isDelimeter) {
        SerialP$rxState = SerialP$RXSTATE_PROTO;
      }
    }
  done: ;
}

# 285 "/opt/tinyos-2.1.0/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result)
#line 285
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 287
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE;
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask();
    }
}

# 177 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void )
#line 177
{
  HplAtm128UartP$HplUart0$txDone();
}

# 92 "/opt/tinyos-2.1.0/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data)
#line 92
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC$state.sendEscape = 1;
      HdlcTranslateC$txTemp = data ^ 0x20;
      HdlcTranslateC$m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC$m_data = data;
    }
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 265 "/opt/tinyos-2.1.0/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_30(void )
#line 265
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP$HplUart1$rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 270
__attribute((interrupt))   void __vector_32(void )
#line 270
{
  HplAtm128UartP$HplUart1$txDone();
}

# 189 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void )
#line 189
{
  HplAtm128Timer3P$CompareA$fired();
}

__attribute((interrupt))   void __vector_27(void )
#line 193
{
  HplAtm128Timer3P$CompareB$fired();
}

__attribute((interrupt))   void __vector_28(void )
#line 197
{
  HplAtm128Timer3P$CompareC$fired();
}

__attribute((interrupt))   void __vector_25(void )
#line 201
{
  HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Timer$get());
}

__attribute((interrupt))   void __vector_29(void )
#line 205
{
  HplAtm128Timer3P$Timer$overflow();
}

# 168 "/opt/tinyos-2.1.0/tos/lib/printf/PrintfP.nc"
__attribute((noinline))   int uart_putchar(char c, struct __file *stream)
#line 168
{

  if (PrintfP$state == PrintfP$S_STARTED && PrintfP$Queue$size() >= 5 * sizeof(printf_msg_t )) {
      PrintfP$state = PrintfP$S_FLUSHING;
      PrintfP$sendNext();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      if (PrintfP$Queue$enqueue(c) == SUCCESS) 
        {
          int __nesc_temp = 
#line 176
          0;

          {
#line 176
            __nesc_atomic_end(__nesc_atomic); 
#line 176
            return __nesc_temp;
          }
        }
      else 
#line 177
        {
          int __nesc_temp = 
#line 177
          -1;

          {
#line 177
            __nesc_atomic_end(__nesc_atomic); 
#line 177
            return __nesc_temp;
          }
        }
    }
#line 180
    __nesc_atomic_end(__nesc_atomic); }
}

# 99 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void )
#line 99
{
  uint16_t data = HplAtm128AdcP$HplAtm128Adc$getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP$HplAtm128Adc$dataReady(data);
}

# 178 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 178
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Compare$fired();
}


__attribute((signal))   void __vector_16(void )
#line 184
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Timer$overflow();
}

