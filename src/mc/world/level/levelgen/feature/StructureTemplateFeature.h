#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/Rotation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/Direction.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockWorldGenAPI;
#else // @header-generator platform
#endif // @header-generator platform
class IStructureConstraint;
class StructureTemplate;
// clang-format on

class StructureTemplateFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::StructureTemplate*>                                mStructure;
    ::ll::TypedStorage<4, 4, int>                                                 mAdjustmentRadius;
    ::ll::UntypedStorage<1, 1>                                                    mFaceDirection;
    ::ll::TypedStorage<1, 1, bool>                                                mRotateAroundCenter;
    ::ll::TypedStorage<4, 4, int>                                                 mGroundLevel;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IStructureConstraint>>> mConstraints;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::StructureTemplate*>                                      mStructure;
    ::ll::TypedStorage<4, 4, int>                                                       mAdjustmentRadius;
    ::ll::TypedStorage<1, 1, ::Direction::Type>                                         mFaceDirection;
    ::ll::TypedStorage<1, 1, bool>                                                      mRotateAroundCenter;
    ::ll::TypedStorage<4, 4, int>                                                       mGroundLevel;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IStructureConstraint>>> mConstraints;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructureTemplateFeature();
#else // @header-generator platform
    virtual ~StructureTemplateFeature() /*override*/ = default;
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
