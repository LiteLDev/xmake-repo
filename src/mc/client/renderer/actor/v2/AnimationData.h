#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/AnimationRemappingInfo.h"
#include "mc/client/renderer/actor/v2/PartVisibilityBoneSlice.h"
#include "mc/client/renderer/actor/v2/PartVisibilityExpression.h"
#include "mc/client/renderer/actor/v2/SkinnedMeshRemappingData.h"

struct AnimationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                   mLargestSkeletonBoneCount;
    ::ll::TypedStorage<8, 24, std::vector<AnimationRemappingInfo>>   mPerActorRemappingInfo;
    ::ll::TypedStorage<8, 24, std::vector<SkinnedMeshRemappingData>> mRemappingData;
    ::ll::TypedStorage<8, 24, std::vector<PartVisibilityBoneSlice>>  mPartVisibilityBoneSlices;
    ::ll::TypedStorage<8, 24, std::vector<PartVisibilityExpression>> mPartVisibilityExpressions;
    ::ll::TypedStorage<8, 24, std::vector<ushort>>                   mPerRenderControllerPartVisibility;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AnimationData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct AnimationRemappingInfo;
struct PartVisibilityBoneSlice;
struct PartVisibilityExpression;
struct SkinnedMeshRemappingData;
// clang-format on

struct AnimationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                       mLargestSkeletonBoneCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationRemappingInfo>>   mPerActorRemappingInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkinnedMeshRemappingData>> mRemappingData;
    ::ll::TypedStorage<8, 24, ::std::vector<::PartVisibilityBoneSlice>>  mPartVisibilityBoneSlices;
    ::ll::TypedStorage<8, 24, ::std::vector<::PartVisibilityExpression>> mPartVisibilityExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>                     mPerRenderControllerPartVisibility;
    // NOLINTEND
};
#else // @header-generator platform
struct AnimationData {};
#endif // @header-generator platform
#endif // @header-generator platform
