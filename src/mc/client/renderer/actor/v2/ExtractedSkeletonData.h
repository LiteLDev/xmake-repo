#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/SkeletonData.h"

struct ExtractedSkeletonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SkeletonData>           mData;
    ::ll::TypedStorage<8, 24, std::vector<uint>>        mBoneToModelPartIdx;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mBoneNames;
    // NOLINTEND

public:
    // prevent constructor by default
    ExtractedSkeletonData& operator=(ExtractedSkeletonData const&);
    ExtractedSkeletonData(ExtractedSkeletonData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ExtractedSkeletonData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/SkeletonData.h"

struct ExtractedSkeletonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SkeletonData>               mData;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>          mBoneToModelPartIdx;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mBoneNames;
    // NOLINTEND
};
#else // @header-generator platform
struct ExtractedSkeletonData {};
#endif // @header-generator platform
#endif // @header-generator platform
