#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/constraints/IStructureConstraint.h"

// auto generated forward declare list
// clang-format off
class IBlockWorldGenAPI;
class StructureTemplate;
// clang-format on

class GroundedConstraint : public ::IStructureConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mFoundationOffsets;
    // NOLINTEND

public:
    // prevent constructor by default
    GroundedConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GroundedConstraint();

    virtual bool isSatisfied(::IBlockWorldGenAPI const&, ::BlockPos const&, ::Rotation const&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GroundedConstraint(::StructureTemplate&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StructureTemplate&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSatisfied(::IBlockWorldGenAPI const&, ::BlockPos const&, ::Rotation const&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
