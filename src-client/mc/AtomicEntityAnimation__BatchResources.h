#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/AtomicEntityAnimation__ResolvedAnimationResources.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinition;
class BoneOrientation;
class DataDrivenModel;
struct SkeletonData;
// clang-format on

namespace AtomicEntityAnimation {

struct BatchResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<DataDrivenModel>>                    mModelLock;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorResourceDefinition>>            mResourceDefLock;
    ::ll::TypedStorage<8, 8, ::SkeletonData const*>                                mSkeleton;
    ::ll::TypedStorage<8, 16, ::gsl::span<const BoneOrientation>>                  mDefaultBoneOrientations;
    ::ll::TypedStorage<8, 32, ::AtomicEntityAnimation::ResolvedAnimationResources> mResolved;
    // NOLINTEND
};

} // namespace AtomicEntityAnimation
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
