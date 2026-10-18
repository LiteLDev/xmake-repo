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

struct CrashDumpGameplayData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mFunc;
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag;
    ::ll::TypedStorage<4, 4, int>                    mClientId;
    ::ll::TypedStorage<4, 4, int>                    mBuildActionIntention;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnk3c8d03;
    ::ll::UntypedStorage<2, 2> mUnk656645;
    ::ll::UntypedStorage<4, 4> mUnk73f8c0;
    ::ll::UntypedStorage<4, 4> mUnkbc40f6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpGameplayData& operator=(CrashDumpGameplayData const&);
    CrashDumpGameplayData(CrashDumpGameplayData const&);
    CrashDumpGameplayData();
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[4]> kFormat();
    // NOLINTEND
};
