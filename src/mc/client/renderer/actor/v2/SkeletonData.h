#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct SkeletonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mParentIndices;
    ::ll::TypedStorage<8, 24, std::vector<uint>>  mBoneOrientationIndices;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkeletonData(::SkeletonData const&);

    MCNAPI ~SkeletonData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SkeletonData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SkeletonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mParentIndices;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>   mBoneOrientationIndices;
    // NOLINTEND
};
#else // @header-generator platform
struct SkeletonData {};
#endif // @header-generator platform
#endif // @header-generator platform
