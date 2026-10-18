#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/diagnostics/CrashDumpLogGUID.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpGlobalData : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 32, char[32]>           mPlatform;
    ::ll::TypedStorage<1, 32, char[32]>           mGameVersion;
    ::ll::TypedStorage<4, 4, int>                 mResourcePack;
    ::ll::TypedStorage<4, 4, int>                 mWorldSeed;
    ::ll::TypedStorage<2, 2, short>               mRegion;
    ::ll::TypedStorage<2, 2, short>               mEditorWorld;
    ::ll::TypedStorage<2, 2, short>               mDynamicTexturesEnabled;
    ::ll::TypedStorage<2, 2, short>               mGraphicsMode;
    ::ll::TypedStorage<8, 8, ulong>               mTotalMemory;
    ::ll::TypedStorage<4, 16, ::CrashDumpLogGUID> mDeviceSessionId;
    ::ll::TypedStorage<1, 48, char[48]>           mDeviceId;
    ::ll::TypedStorage<1, 1024, char[1024]>       mResourcePackIds;
    ::ll::TypedStorage<1, 1024, char[1024]>       mBehaviorPackIds;
    ::ll::TypedStorage<1, 128, char[128]>         mMainSceneStack;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 32>   mUnkca8e0f;
    ::ll::UntypedStorage<1, 32>   mUnkcdc261;
    ::ll::UntypedStorage<4, 4>    mUnk5ad8ae;
    ::ll::UntypedStorage<4, 4>    mUnka922d4;
    ::ll::UntypedStorage<2, 2>    mUnkc0cb4e;
    ::ll::UntypedStorage<2, 2>    mUnk82e64c;
    ::ll::UntypedStorage<2, 2>    mUnk1c9651;
    ::ll::UntypedStorage<2, 2>    mUnk214525;
    ::ll::UntypedStorage<8, 8>    mUnk8b3e76;
    ::ll::UntypedStorage<4, 16>   mUnk8fa513;
    ::ll::UntypedStorage<1, 48>   mUnk879639;
    ::ll::UntypedStorage<1, 1024> mUnkd52db8;
    ::ll::UntypedStorage<1, 1024> mUnka2adc4;
    ::ll::UntypedStorage<1, 128>  mUnk6489a8;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI bool setDeviceSessionID(std::string const&);
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    CrashDumpGlobalData& operator=(CrashDumpGlobalData const&);
    CrashDumpGlobalData(CrashDumpGlobalData const&);
    CrashDumpGlobalData();
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[14]> kFormat();
    // NOLINTEND
};
