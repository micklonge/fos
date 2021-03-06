/*------------------------------------------------------------------------------
   �ַ������� 
------------------------------------------------------------------------------*/

#ifndef        _STRING_H_
#define        _STRING_H_

/*----------------------------------------------------------------------------*/
#define        BCD_TO_BIN(val)     ((val)=((val)&15) + ((val)>>4)*10) 
/*----------------------------------------------------------------------------*/

#endif
/*----------------------------------------------------------------------------*/
int    dispos;
char   *v_array;

extern inline char * strcpy(char * dest,const char *src);
extern inline char * strncpy(char * dest,const char *src,int count);
extern inline char * strcat(char * dest,const char * src);
extern inline char * strncat(char * dest,const char * src,int count);
extern inline int strcmp(const char * cs,const char * ct);
extern inline int strncmp(const char * cs,const char * ct,int count);
extern inline char * strchr(const char * s,char c);
extern inline char * strrchr(const char * s,char c);
extern inline int strspn(const char * cs, const char * ct);
extern inline int strcspn(const char * cs, const char * ct);
extern inline char * strpbrk(const char * cs,const char * ct);
extern inline char * strstr(const char * cs,const char * ct);
extern inline int strlen(const char * s);
extern inline void * memcpy(void * dest,const void * src, int n);
extern inline void * memmove(void * dest,const void * src, int n);
extern inline int memcmp(const void * cs,const void * ct,int count);
extern inline void * memchr(const void * cs,char c,int count);
extern inline void * memset(void * s,char c,int count);

int    print_int(int32 val,char* out);
void   printc(char *fmt,...);
void   printk(char *fmt,...);
