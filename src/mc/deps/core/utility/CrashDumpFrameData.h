#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpFrameData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>  mNumControllers;
    ::ll::TypedStorage<4, 4, uint>  mPrimaryControllerId;
    ::ll::TypedStorage<8, 8, ulong> mFreeMemory;
    ::ll::TypedStorage<4, 4, float> mX;
    ::ll::TypedStorage<4, 4, float> mY;
    ::ll::TypedStorage<4, 4, float> mZ;
    ::ll::TypedStorage<4, 4, float> mDirection;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkd9e800;
    ::ll::UntypedStorage<4, 4> mUnk60a3ee;
    ::ll::UntypedStorage<8, 8> mUnk15745b;
    ::ll::UntypedStorage<4, 4> mUnk957c6e;
    ::ll::UntypedStorage<4, 4> mUnk7ef28a;
    ::ll::UntypedStorage<4, 4> mUnk3ecde3;
    ::ll::UntypedStorage<4, 4> mUnk6d152b;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDumpFrameData(int, int, ulong, float, float, float, float);
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    CrashDumpFrameData& operator=(CrashDumpFrameData const&);
    CrashDumpFrameData(CrashDumpFrameData const&);
    CrashDumpFrameData();
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[7]> kFormat();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int, ulong, float, float, float, float);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
