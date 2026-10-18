#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CSHA1 {
public:
    // CSHA1 inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum REPORT_TYPE : uint {
        REPORT_HEX       = 0,
        REPORT_DIGIT     = 1,
        REPORT_HEX_SHORT = 2,
#else // @header-generator platform
    enum class REPORT_TYPE : int {
        Hex      = 0,
        Digit    = 1,
        HexShort = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 20, uint[5]>   m_state;
    ::ll::TypedStorage<4, 8, uint[2]>    m_count;
    ::ll::TypedStorage<4, 4, uint[1]>    m_reserved0;
    ::ll::TypedStorage<1, 64, uchar[64]> m_buffer;
    ::ll::TypedStorage<1, 20, uchar[20]> m_digest;
    ::ll::TypedStorage<4, 12, uint[3]>   m_reserved1;
    ::ll::TypedStorage<1, 64, uchar[64]> m_workspace;
    ::ll::UntypedStorage<8, 8>           m_block;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 20> mUnk4559ac;
    ::ll::UntypedStorage<4, 8>  mUnk7068c2;
    ::ll::UntypedStorage<4, 4>  mUnkd21733;
    ::ll::UntypedStorage<1, 64> mUnkb78ee3;
    ::ll::UntypedStorage<1, 20> mUnk3ec896;
    ::ll::UntypedStorage<4, 12> mUnk3bbf1b;
    ::ll::UntypedStorage<1, 64> mUnk1f7c52;
    ::ll::UntypedStorage<8, 8>  mUnkb04bdb;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CSHA1& operator=(CSHA1 const&);
    CSHA1(CSHA1 const&);
    CSHA1();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CSHA1();
#else // @header-generator platform
    MCAPI void Final();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void Final();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool ReportHash_a(char* tszReport, ::CSHA1::REPORT_TYPE rtReportType) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar* GetHash() const;

    MCNAPI bool ReportHash_a(char*, ::CSHA1::REPORT_TYPE) const;

    MCNAPI void Reset();

    MCNAPI void Transform(uint*, uchar const*);

    MCNAPI void Update(uchar const*, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void Transform(uint* pState, uchar const* pBuffer);
#endif // @header-generator platform
    // NOLINTEND
};
