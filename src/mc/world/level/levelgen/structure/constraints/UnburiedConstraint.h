#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/constraints/IStructureConstraint.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockPos;
#endif // @header-generator platform
class IBlockWorldGenAPI;
class StructureTemplate;
// clang-format on

class UnburiedConstraint : public ::IStructureConstraint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mCeilingOffsets;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>> mCeilingOffsets;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    UnburiedConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~UnburiedConstraint();
#else // @header-generator platform
    virtual ~UnburiedConstraint() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSatisfied(::IBlockWorldGenAPI const&, ::BlockPos const&, ::Rotation const&, ::BlockPos const&) const;
    // clang-format on
#else // @header-generator platform
    virtual bool isSatisfied(
        ::IBlockWorldGenAPI const& target,
        ::BlockPos const&          structurePos,
        ::Rotation const&          structureRot,
        ::BlockPos const&          centeringOffset
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit UnburiedConstraint(::StructureTemplate&);
#else // @header-generator platform
    MCAPI explicit UnburiedConstraint(::StructureTemplate& structure);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::StructureTemplate&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::StructureTemplate& structure);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSatisfied(::IBlockWorldGenAPI const&, ::BlockPos const&, ::Rotation const&, ::BlockPos const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $isSatisfied(
        ::IBlockWorldGenAPI const& target,
        ::BlockPos const&          structurePos,
        ::Rotation const&          structureRot,
        ::BlockPos const&          centeringOffset
    ) const;
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
