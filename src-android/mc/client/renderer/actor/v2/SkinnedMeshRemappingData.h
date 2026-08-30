#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"

struct SkinnedMeshRemappingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::span<const ulong>> mParentIndices;
    ::ll::TypedStorage<8, 16, ::gsl::span<const ulong>> mBoneIndicesToWrite;
    ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex>  mSkeletalHierarchyIndex;
    ::ll::TypedStorage<8, 16, ::gsl::span<const uint>>  mBoneOrientationIndices;
    ::ll::TypedStorage<4, 4, uint>                      mBoneMatrixOffset;
    ::ll::TypedStorage<4, 4, uint>                      mAssociatedGeoReferenceOffset;
    // NOLINTEND
};
