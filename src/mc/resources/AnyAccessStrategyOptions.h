#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/PackParseErrorType.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackIOProvider;
class ResourceLocation;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct AnyAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                      mCreateWriter;
    ::ll::TypedStorage<8, 8, ::ResourceLocation&>       mLocation;
    ::ll::UntypedStorage<8, 32>                         mKeyProvider;
    ::ll::UntypedStorage<8, 64>                         mReport;
    ::ll::UntypedStorage<1, 8>                          mOptimizeForSpeedOverMemory;
    ::ll::UntypedStorage<1, 24>                         mZipSubDir;
    ::ll::TypedStorage<8, 16, ::IPackIOProvider const&> mIOProvider;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk3de3bb;
    ::ll::UntypedStorage<8, 8>  mUnk3b0c4c;
    ::ll::UntypedStorage<8, 24> mUnk8df2c0;
    ::ll::UntypedStorage<8, 64> mUnkb7f0ea;
    ::ll::UntypedStorage<1, 1>  mUnk33fc7b;
    ::ll::UntypedStorage<8, 32> mUnkf96200;
    ::ll::UntypedStorage<8, 8>  mUnkd85561;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AnyAccessStrategyOptions& operator=(AnyAccessStrategyOptions const&);
    AnyAccessStrategyOptions(AnyAccessStrategyOptions const&);
    AnyAccessStrategyOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AnyAccessStrategyOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
