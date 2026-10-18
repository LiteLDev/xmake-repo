#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpRenderData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag;
    ::ll::TypedStorage<2, 2, short>                  mPad;
    ::ll::TypedStorage<4, 4, int>                    mObjectId;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnk779e78;
    ::ll::UntypedStorage<2, 2> mUnka0b5de;
    ::ll::UntypedStorage<4, 4> mUnk43e0af;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDumpRenderData(::CrashDumpLogStringID, int);
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    CrashDumpRenderData& operator=(CrashDumpRenderData const&);
    CrashDumpRenderData(CrashDumpRenderData const&);
    CrashDumpRenderData();
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[3]> kFormat();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CrashDumpLogStringID, int);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
