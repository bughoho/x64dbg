#ifndef _SCRIPT_API_H
#define _SCRIPT_API_H

#include "_plugins.h"

#define SCRIPT_EXPORT PLUG_IMPEXP

namespace Script
{
namespace Debug
{
SCRIPT_EXPORT void Wait();
SCRIPT_EXPORT void Run();
SCRIPT_EXPORT void Pause();
SCRIPT_EXPORT void Stop();
SCRIPT_EXPORT void StepIn();
SCRIPT_EXPORT void StepOver();
SCRIPT_EXPORT void StepOut();
};

namespace Memory
{
SCRIPT_EXPORT bool Read(duint addr, void* data, duint size, duint* sizeRead);
SCRIPT_EXPORT bool Write(duint addr, const void* data, duint size, duint* sizeWritten);

SCRIPT_EXPORT unsigned char ReadByte(duint addr);
SCRIPT_EXPORT bool WriteByte(duint addr, unsigned char data);
SCRIPT_EXPORT unsigned short ReadWord(duint addr);
SCRIPT_EXPORT bool WriteWord(duint addr, unsigned short data);
SCRIPT_EXPORT unsigned int ReadDword(duint addr);
SCRIPT_EXPORT bool WriteDword(duint addr, unsigned int data);
#ifdef _WIN64
SCRIPT_EXPORT unsigned long long ReadQword(duint addr);
SCRIPT_EXPORT bool WriteQword(duint addr, unsigned long long data);
#endif //_WIN64
SCRIPT_EXPORT duint ReadPtr(duint addr);
SCRIPT_EXPORT bool WritePtr(duint addr, duint data);
};

namespace Register
{
enum RegisterEnum
{
    DR0,
    DR1,
    DR2,
    DR3,
    DR6,
    DR7,
    EAX,
    AX,
    AH,
    AL,
    EBX,
    BX,
    BH,
    BL,
    ECX,
    CX,
    CH,
    CL,
    EDX,
    DX,
    DH,
    DL,
    EDI,
    DI,
    ESI,
    SI,
    EBP,
    BP,
    ESP,
    SP,
    EIP,
    CIP,
#ifdef _WIN64
    RAX,
    RBX,
    RCX,
    RDX,
    RSI,
    SIL,
    RDI,
    DIL,
    RBP,
    BPL,
    RSP,
    SPL,
    RIP,
    R8,
    R8D,
    R8W,
    R8B,
    R9,
    R9D,
    R9W,
    R9B,
    R10,
    R10D,
    R10W,
    R10B,
    R11,
    R11D,
    R11W,
    R11B,
    R12,
    R12D,
    R12W,
    R12B,
    R13,
    R13D,
    R13W,
    R13B,
    R14,
    R14D,
    R14W,
    R14B,
    R15,
    R15D,
    R15W,
    R15B
#endif //_WIN64
};

SCRIPT_EXPORT duint Get(RegisterEnum reg);
SCRIPT_EXPORT bool Set(RegisterEnum reg, duint value);

SCRIPT_EXPORT duint GetDR0();
SCRIPT_EXPORT bool SetDR0(duint value);
SCRIPT_EXPORT duint GetDR1();
SCRIPT_EXPORT bool SetDR1(duint value);
SCRIPT_EXPORT duint GetDR2();
SCRIPT_EXPORT bool SetDR2(duint value);
SCRIPT_EXPORT duint GetDR3();
SCRIPT_EXPORT bool SetDR3(duint value);
SCRIPT_EXPORT duint GetDR6();
SCRIPT_EXPORT bool SetDR6(duint value);
SCRIPT_EXPORT duint GetDR7();
SCRIPT_EXPORT bool SetDR7(duint value);
SCRIPT_EXPORT unsigned int GetEAX();
SCRIPT_EXPORT bool SetEAX(unsigned int value);
SCRIPT_EXPORT unsigned short GetAX();
SCRIPT_EXPORT bool SetAX(unsigned short value);
SCRIPT_EXPORT unsigned char GetAH();
SCRIPT_EXPORT bool SetAH(unsigned char value);
SCRIPT_EXPORT unsigned char GetAL();
SCRIPT_EXPORT bool SetAL(unsigned char value);
SCRIPT_EXPORT unsigned int GetEBX();
SCRIPT_EXPORT bool SetEBX(unsigned int value);
SCRIPT_EXPORT unsigned short GetBX();
SCRIPT_EXPORT bool SetBX(unsigned short value);
SCRIPT_EXPORT unsigned char GetBH();
SCRIPT_EXPORT bool SetBH(unsigned char value);
SCRIPT_EXPORT unsigned char GetBL();
SCRIPT_EXPORT bool SetBL(unsigned char value);
SCRIPT_EXPORT unsigned int GetECX();
SCRIPT_EXPORT bool SetECX(unsigned int value);
SCRIPT_EXPORT unsigned short GetCX();
SCRIPT_EXPORT bool SetCX(unsigned short value);
SCRIPT_EXPORT unsigned char GetCH();
SCRIPT_EXPORT bool SetCH(unsigned char value);
SCRIPT_EXPORT unsigned char GetCL();
SCRIPT_EXPORT bool SetCL(unsigned char value);
SCRIPT_EXPORT unsigned int GetEDX();
SCRIPT_EXPORT bool SetEDX(unsigned int value);
SCRIPT_EXPORT unsigned short GetDX();
SCRIPT_EXPORT bool SetDX(unsigned short value);
SCRIPT_EXPORT unsigned char GetDH();
SCRIPT_EXPORT bool SetDH(unsigned char value);
SCRIPT_EXPORT unsigned char GetDL();
SCRIPT_EXPORT bool SetDL(unsigned char value);
SCRIPT_EXPORT unsigned int GetEDI();
SCRIPT_EXPORT bool SetEDI(unsigned int value);
SCRIPT_EXPORT unsigned short GetDI();
SCRIPT_EXPORT bool SetDI(unsigned short value);
SCRIPT_EXPORT unsigned int GetESI();
SCRIPT_EXPORT bool SetESI(unsigned int value);
SCRIPT_EXPORT unsigned short GetSI();
SCRIPT_EXPORT bool SetSI(unsigned short value);
SCRIPT_EXPORT unsigned int GetEBP();
SCRIPT_EXPORT bool SetEBP(unsigned int value);
SCRIPT_EXPORT unsigned short GetBP();
SCRIPT_EXPORT bool SetBP(unsigned short value);
SCRIPT_EXPORT unsigned int GetESP();
SCRIPT_EXPORT bool SetESP(unsigned int value);
SCRIPT_EXPORT unsigned short GetSP();
SCRIPT_EXPORT bool SetSP(unsigned short value);
SCRIPT_EXPORT unsigned int GetEIP();
SCRIPT_EXPORT bool SetEIP(unsigned int value);
SCRIPT_EXPORT duint GetCIP();
SCRIPT_EXPORT bool SetCIP(duint value);
#ifdef _WIN64
SCRIPT_EXPORT unsigned long long GetRAX();
SCRIPT_EXPORT bool SetRAX(unsigned long long value);
SCRIPT_EXPORT unsigned long long GetRBX();
SCRIPT_EXPORT bool SetRBX(unsigned long long value);
SCRIPT_EXPORT unsigned long long GetRCX();
SCRIPT_EXPORT bool SetRCX(unsigned long long value);
SCRIPT_EXPORT unsigned long long GetRDX();
SCRIPT_EXPORT bool SetRDX(unsigned long long value);
SCRIPT_EXPORT unsigned long long GetRSI();
SCRIPT_EXPORT bool SetRSI(unsigned long long value);
SCRIPT_EXPORT unsigned char GetSIL();
SCRIPT_EXPORT bool SetSIL(unsigned char value);
SCRIPT_EXPORT unsigned long long GetRDI();
SCRIPT_EXPORT bool SetRDI(unsigned long long value);
SCRIPT_EXPORT unsigned char GetDIL();
SCRIPT_EXPORT bool SetDIL(unsigned char value);
SCRIPT_EXPORT unsigned long long GetRBP();
SCRIPT_EXPORT bool SetRBP(unsigned long long value);
SCRIPT_EXPORT unsigned char GetBPL();
SCRIPT_EXPORT bool SetBPL(unsigned char value);
SCRIPT_EXPORT unsigned long long GetRSP();
SCRIPT_EXPORT bool SetRSP(unsigned long long value);
SCRIPT_EXPORT unsigned char GetSPL();
SCRIPT_EXPORT bool SetSPL(unsigned char value);
SCRIPT_EXPORT unsigned long long GetRIP();
SCRIPT_EXPORT bool SetRIP(unsigned long long value);
SCRIPT_EXPORT unsigned long long GetR8();
SCRIPT_EXPORT bool SetR8(unsigned long long value);
SCRIPT_EXPORT unsigned int GetR8D();
SCRIPT_EXPORT bool SetR8D(unsigned int value);
SCRIPT_EXPORT unsigned short GetR8W();
SCRIPT_EXPORT bool SetR8W(unsigned short value);
SCRIPT_EXPORT unsigned char GetR8B();
SCRIPT_EXPORT bool SetR8B(unsigned char value);
SCRIPT_EXPORT unsigned long long GetR9();
SCRIPT_EXPORT bool SetR9(unsigned long long value);
SCRIPT_EXPORT unsigned int GetR9D();
SCRIPT_EXPORT bool SetR9D(unsigned int value);
SCRIPT_EXPORT unsigned short GetR9W();
SCRIPT_EXPORT bool SetR9W(unsigned short value);
SCRIPT_EXPORT unsigned char GetR9B();
SCRIPT_EXPORT bool SetR9B(unsigned char value);
SCRIPT_EXPORT unsigned long long GetR10();
SCRIPT_EXPORT bool SetR10(unsigned long long value);
SCRIPT_EXPORT unsigned int GetR10D();
SCRIPT_EXPORT bool SetR10D(unsigned int value);
SCRIPT_EXPORT unsigned short GetR10W();
SCRIPT_EXPORT bool SetR10W(unsigned short value);
SCRIPT_EXPORT unsigned char GetR10B();
SCRIPT_EXPORT bool SetR10B(unsigned char value);
SCRIPT_EXPORT unsigned long long GetR11();
SCRIPT_EXPORT bool SetR11(unsigned long long value);
SCRIPT_EXPORT unsigned int GetR11D();
SCRIPT_EXPORT bool SetR11D(unsigned int value);
SCRIPT_EXPORT unsigned short GetR11W();
SCRIPT_EXPORT bool SetR11W(unsigned short value);
SCRIPT_EXPORT unsigned char GetR11B();
SCRIPT_EXPORT bool SetR11B(unsigned char value);
SCRIPT_EXPORT unsigned long long GetR12();
SCRIPT_EXPORT bool SetR12(unsigned long long value);
SCRIPT_EXPORT unsigned int GetR12D();
SCRIPT_EXPORT bool SetR12D(unsigned int value);
SCRIPT_EXPORT unsigned short GetR12W();
SCRIPT_EXPORT bool SetR12W(unsigned short value);
SCRIPT_EXPORT unsigned char GetR12B();
SCRIPT_EXPORT bool SetR12B(unsigned char value);
SCRIPT_EXPORT unsigned long long GetR13();
SCRIPT_EXPORT bool SetR13(unsigned long long value);
SCRIPT_EXPORT unsigned int GetR13D();
SCRIPT_EXPORT bool SetR13D(unsigned int value);
SCRIPT_EXPORT unsigned short GetR13W();
SCRIPT_EXPORT bool SetR13W(unsigned short value);
SCRIPT_EXPORT unsigned char GetR13B();
SCRIPT_EXPORT bool SetR13B(unsigned char value);
SCRIPT_EXPORT unsigned long long GetR14();
SCRIPT_EXPORT bool SetR14(unsigned long long value);
SCRIPT_EXPORT unsigned int GetR14D();
SCRIPT_EXPORT bool SetR14D(unsigned int value);
SCRIPT_EXPORT unsigned short GetR14W();
SCRIPT_EXPORT bool SetR14W(unsigned short value);
SCRIPT_EXPORT unsigned char GetR14B();
SCRIPT_EXPORT bool SetR14B(unsigned char value);
SCRIPT_EXPORT unsigned long long GetR15();
SCRIPT_EXPORT bool SetR15(unsigned long long value);
SCRIPT_EXPORT unsigned int GetR15D();
SCRIPT_EXPORT bool SetR15D(unsigned int value);
SCRIPT_EXPORT unsigned short GetR15W();
SCRIPT_EXPORT bool SetR15W(unsigned short value);
SCRIPT_EXPORT unsigned char GetR15B();
SCRIPT_EXPORT bool SetR15B(unsigned char value);
#endif //_WIN64
};
};

#endif //_SCRIPT_API_H