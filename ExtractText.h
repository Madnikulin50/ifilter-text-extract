

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for ExtractText.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ExtractText_h__
#define __ExtractText_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITextExtractor_FWD_DEFINED__
#define __ITextExtractor_FWD_DEFINED__
typedef interface ITextExtractor ITextExtractor;

#endif 	/* __ITextExtractor_FWD_DEFINED__ */


#ifndef __TextExtractor_FWD_DEFINED__
#define __TextExtractor_FWD_DEFINED__

#ifdef __cplusplus
typedef class TextExtractor TextExtractor;
#else
typedef struct TextExtractor TextExtractor;
#endif /* __cplusplus */

#endif 	/* __TextExtractor_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITextExtractor_INTERFACE_DEFINED__
#define __ITextExtractor_INTERFACE_DEFINED__

/* interface ITextExtractor */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ITextExtractor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0983E2B2-3728-4ACA-A98C-B1AFB4589E16")
    ITextExtractor : public IUnknown
    {
    public:
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE ExtractText( 
            /* [in] */ BSTR fileName,
            /* [in] */ long maxLength,
            /* [retval][out] */ BSTR *fileText) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITextExtractorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITextExtractor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITextExtractor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITextExtractor * This);
        
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ExtractText )( 
            ITextExtractor * This,
            /* [in] */ BSTR fileName,
            /* [in] */ long maxLength,
            /* [retval][out] */ BSTR *fileText);
        
        END_INTERFACE
    } ITextExtractorVtbl;

    interface ITextExtractor
    {
        CONST_VTBL struct ITextExtractorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITextExtractor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITextExtractor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITextExtractor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITextExtractor_ExtractText(This,fileName,maxLength,fileText)	\
    ( (This)->lpVtbl -> ExtractText(This,fileName,maxLength,fileText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITextExtractor_INTERFACE_DEFINED__ */



#ifndef __ExtractTextLib_LIBRARY_DEFINED__
#define __ExtractTextLib_LIBRARY_DEFINED__

/* library ExtractTextLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ExtractTextLib;

EXTERN_C const CLSID CLSID_TextExtractor;

#ifdef __cplusplus

class DECLSPEC_UUID("E5070C86-C142-4199-B17B-5AA76CBA3BF2")
TextExtractor;
#endif
#endif /* __ExtractTextLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


