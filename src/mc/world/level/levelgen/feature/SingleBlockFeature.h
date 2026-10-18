#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockWorldGenAPI;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SingleBlockFeature : public ::IFeature {
public:
    // SingleBlockFeature inner types declare
    // clang-format off
    struct WeightedBlockDescriptor;
    // clang-format on

    // SingleBlockFeature inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class AttachCondition : uchar {
        MayAttachTo    = 0,
        MayNotAttachTo = 1,
    };

#endif // @header-generator platform
    enum class CheckDirection : uchar {
        Top      = 0,
        Bottom   = 1,
        North    = 2,
        East     = 3,
        South    = 4,
        West     = 5,
        All      = 6,
        Sides    = 7,
        Diagonal = 8,
#if defined(LL_PLAT_A) // @header-generator platform
        _Count   = 9,
    };

    enum class AttachCondition : uchar {
        MayAttachTo    = 0,
        MayNotAttachTo = 1,
#else // @header-generator platform
        Count    = 9,
#endif // @header-generator platform
    };

    struct WeightedBlockDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 168, ::BlockDescriptor> mBlockDescriptor;
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::BlockDescriptor> mBlockDescriptor;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, float>               mWeight;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        WeightedBlockDescriptor& operator=(WeightedBlockDescriptor const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using PlacementConditions = ::Bedrock::DenseEnumMap<
        SingleBlockFeature::CheckDirection,
        std::vector<BlockDescriptor>,
        (SingleBlockFeature::CheckDirection)9>;
#else // @header-generator platform
    using PlacementConditions =
        ::Bedrock::DenseEnumMap<::SingleBlockFeature::CheckDirection, ::std::vector<::BlockDescriptor>, 9>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SingleBlockFeature::WeightedBlockDescriptor>> mPossibleBlocks;
    ::ll::UntypedStorage<8, 216>                                                        mMayAttachTo;
    ::ll::UntypedStorage<8, 216>                                                        mMayNotAttachTo;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>                             mMayReplace;
    ::ll::TypedStorage<4, 4, int>                                                       mMinAttachedSides;
    ::ll::TypedStorage<1, 1, bool>                                                      mEnforcePlacementRules;
    ::ll::TypedStorage<1, 1, bool>                                                      mEnforceSurvivabilityRules;
    ::ll::TypedStorage<1, 1, bool>                                                      mAutoRotate;
    ::ll::TypedStorage<1, 1, bool>                                                      mRandomRotation;
    ::ll::TypedStorage<1, 1, bool>                                                      mEnforceAttachmentRules;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SingleBlockFeature::WeightedBlockDescriptor>> mPossibleBlocks;
    ::ll::TypedStorage<
        8,
        216,
        ::Bedrock::DenseEnumMap<::SingleBlockFeature::CheckDirection, ::std::vector<::BlockDescriptor>, 9>>
        mMayAttachTo;
    ::ll::TypedStorage<
        8,
        216,
        ::Bedrock::DenseEnumMap<::SingleBlockFeature::CheckDirection, ::std::vector<::BlockDescriptor>, 9>>
                                                                mMayNotAttachTo;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayReplace;
    ::ll::TypedStorage<4, 4, int>                               mMinAttachedSides;
    ::ll::TypedStorage<1, 1, bool>                              mEnforcePlacementRules;
    ::ll::TypedStorage<1, 1, bool>                              mEnforceSurvivabilityRules;
    ::ll::TypedStorage<1, 1, bool>                              mAutoRotate;
    ::ll::TypedStorage<1, 1, bool>                              mRandomRotation;
    ::ll::TypedStorage<1, 1, bool>                              mEnforceAttachmentRules;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SingleBlockFeature();
#else // @header-generator platform
    virtual ~SingleBlockFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
