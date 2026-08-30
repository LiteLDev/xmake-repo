#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeSurfaceSystem {

struct SurfaceBuilderParamsResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 256> mUnk957438;
    ::ll::UntypedStorage<8, 24>  mUnk3e9888;
    ::ll::UntypedStorage<1, 1>   mUnk33bf1d;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceBuilderParamsResult& operator=(SurfaceBuilderParamsResult const&);
    SurfaceBuilderParamsResult(SurfaceBuilderParamsResult const&);
    SurfaceBuilderParamsResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SurfaceBuilderParamsResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BiomeSurfaceSystem
