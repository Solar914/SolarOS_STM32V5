/*
*********************************************************************************************************
*
*	模块名称   :   钩子函数相关功能头文件
*	文件名称   :   tHooks.h
*	版    本   :   V1.0
*	说    明   :   定义相关钩子函数，用于内核功能的扩展
*
*	修改记录   :
*		             版本号     日期         作者            说明
*		              V1.0    2019-4-16      Solar           第一次版本发布
*		              
*
*	版权       ：  仅限学习交流使用，禁止用于商业用途
*
*********************************************************************************************************
*/

#ifndef _THOOKS_H
#define _THOOKS_H

#include "SOLAROS.h"

/*------用于内核功能扩展的钩子函数------*/
void tHooksCpuIdle(void);
void tHooksSysTick(void);
void tHooksTaskSwitch(void);
void tHooksTaskInit(void);

#endif

/***************************** SOLAROS (END OF FILE) *********************************/
