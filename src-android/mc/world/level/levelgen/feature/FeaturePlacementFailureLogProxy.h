#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/FeaturePlacementFailureLog.h"

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
    MCNAPI explicit FeaturePlacementFailureLogProxy(::FeaturePlacementFailureLog&);

    MCNAPI void logFailure(::Bedrock::StaticOptimizedString, ::Bedrock::StaticOptimizedString) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FeaturePlacementFailureLog&);
    // NOLINTEND
};
