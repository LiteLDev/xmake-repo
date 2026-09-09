#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ddrv2__PoolItemHandle.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/util/EntityLighting.h"

// auto generated forward declare list
// clang-format off
struct DataDrivenRendererPool;
// clang-format on

struct RenderRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                       mHandle;
    ::ll::TypedStorage<4, 64, ::Matrix>                              mWorldTransform;
    ::ll::TypedStorage<8, 8, ulong>                                  mUniqueID;
    ::ll::TypedStorage<1, 1, bool>                                   mIsDitheringEnabled;
    ::ll::TypedStorage<8, 16, ::gsl::span<const Matrix>>             mBoneTransforms;
    ::ll::TypedStorage<4, 36, ::EntityLightingUtils::EntityLighting> mLightSample;
    // NOLINTEND
};
