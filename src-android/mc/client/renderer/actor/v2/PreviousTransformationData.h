#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/AnimationRemappingInfo.h"
#include "mc/client/renderer/actor/v2/DataDrivenRendererEntry.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"

struct PreviousTransformationData {
public:
    // PreviousTransformationData inner types declare
    // clang-format off
    struct BoneRemapping;
    // clang-format on

    // PreviousTransformationData inner types define
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
};
