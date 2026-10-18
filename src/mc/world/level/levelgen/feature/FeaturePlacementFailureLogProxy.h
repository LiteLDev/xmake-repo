#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/FeaturePlacementFailureLog.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class FeaturePlacementFailureLog;
namespace Bedrock { class StaticOptimizedString; }
// clang-format on

class FeaturePlacementFailureLogProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FeaturePlacementFailureLog*> mLogger;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FeaturePlacementFailureLogProxy(::FeaturePlacementFailureLog&);

    MCNAPI void logFailure(::Bedrock::StaticOptimizedString, ::Bedrock::StaticOptimizedString) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FeaturePlacementFailureLog&);
#else // @header-generator platform
    MCAPI void logFailure(::Bedrock::StaticOptimizedString source, ::Bedrock::StaticOptimizedString message) const;
#endif // @header-generator platform
    // NOLINTEND
};
