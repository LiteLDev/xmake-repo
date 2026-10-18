#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/AnimationRemappingInfo.h"
#include "mc/client/renderer/actor/v2/DataDrivenRendererEntry.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"

// auto generated forward declare list
// clang-format off
struct AnimationRemappingInfo;
struct DataDrivenRendererEntry;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

struct PreviousTransformationData {
public:
    // PreviousTransformationData inner types declare
    // clang-format off
    struct BoneRemapping;
    // clang-format on

    // PreviousTransformationData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct BoneRemapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                     mNumBones;
        ::ll::TypedStorage<4, 4, uint>                     mBoneMatrixOffset;
        ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex> mSkeletalIndex;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DataDrivenRendererEntry>>                   mRendererEntries;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>                                     mSortedActorIDs;
    ::ll::TypedStorage<8, 24, std::vector<glm::mat<4, 4, float, (glm::qualifier)0>>>  mSortedActorTransforms;
    ::ll::TypedStorage<8, 24, std::vector<AnimationRemappingInfo>>                    mSortedActorRemappingInfo;
    ::ll::TypedStorage<8, 24, std::vector<PreviousTransformationData::BoneRemapping>> mBoneRemapping;
    ::ll::TypedStorage<8, 24, std::vector<glm::mat<4, 4, float, (glm::qualifier)0>>>  mBoneData;
    // NOLINTEND

public:
    // prevent constructor by default
    PreviousTransformationData& operator=(PreviousTransformationData const&);
    PreviousTransformationData(PreviousTransformationData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PreviousTransformationData& operator=(::PreviousTransformationData&&);

    MCNAPI ~PreviousTransformationData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct BoneRemapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                     mNumBones;
        ::ll::TypedStorage<4, 4, uint>                     mBoneMatrixOffset;
        ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex> mSkeletalIndex;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRendererEntry>>                   mRendererEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                                      mSortedActorIDs;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>>                               mSortedActorTransforms;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationRemappingInfo>>                    mSortedActorRemappingInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::PreviousTransformationData::BoneRemapping>> mBoneRemapping;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>>                               mBoneData;
    // NOLINTEND

public:
    // prevent constructor by default
    PreviousTransformationData& operator=(PreviousTransformationData const&);
    PreviousTransformationData(PreviousTransformationData const&);
    PreviousTransformationData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PreviousTransformationData& operator=(::PreviousTransformationData&&);

    MCAPI ~PreviousTransformationData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct BoneRemapping {};
#endif // @header-generator platform
#endif // @header-generator platform
};
