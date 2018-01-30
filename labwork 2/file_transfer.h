/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FILE_TRANSFER_H_RPCGEN
#define _FILE_TRANSFER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct file {
	char *file_name;
	char *file_content;
};
typedef struct file file;

#define FILE_TRANSFER_PROG 0x24121996
#define FILE_TRANSFER_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SEND_FILE 1
extern  int * send_file_1(file *, CLIENT *);
extern  int * send_file_1_svc(file *, struct svc_req *);
extern int file_transfer_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SEND_FILE 1
extern  int * send_file_1();
extern  int * send_file_1_svc();
extern int file_transfer_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_file (XDR *, file*);

#else /* K&R C */
extern bool_t xdr_file ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FILE_TRANSFER_H_RPCGEN */
