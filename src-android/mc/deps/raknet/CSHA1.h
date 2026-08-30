#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CSHA1 {
public:
    // CSHA1 inner types define
    enum REPORT_TYPE : uint {
        REPORT_HEX       = 0,
        REPORT_DIGIT     = 1,
        REPORT_HEX_SHORT = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, uint[5]>   m_state;
    ::ll::TypedStorage<4, 8, uint[2]>    m_count;
    ::ll::TypedStorage<4, 4, uint[1]>    m_reserved0;
    ::ll::TypedStorage<1, 64, uchar[64]> m_buffer;
    ::ll::TypedStorage<1, 20, uchar[20]> m_digest;
    ::ll::TypedStorage<4, 12, uint[3]>   m_reserved1;
    ::ll::TypedStorage<1, 64, uchar[64]> m_workspace;
    ::ll::UntypedStorage<8, 8>           m_block;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CSHA1();

    MCNAPI void Final();

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
    // NOLINTEND
};
