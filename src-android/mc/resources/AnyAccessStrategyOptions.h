#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

struct AnyAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mCreateWriter;
    ::ll::TypedStorage<8, 8, ::ResourceLocation&>       mLocation;
    ::ll::UntypedStorage<8, 32>                         mKeyProvider;
    ::ll::UntypedStorage<8, 64>                         mReport;
    ::ll::UntypedStorage<1, 8>                          mOptimizeForSpeedOverMemory;
    ::ll::UntypedStorage<1, 24>                         mZipSubDir;
    ::ll::TypedStorage<8, 16, ::IPackIOProvider const&> mIOProvider;
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
