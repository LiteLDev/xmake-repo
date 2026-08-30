#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class GetCollisionShapeInterface;
class IConstBlockSource;
struct Brightness;
// clang-format on

class TrialSpawnerBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    TrialSpawnerBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TrialSpawnerBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual int getVariant(::Block const&) const;

    virtual ::Brightness getLightEmission(::Block const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TrialSpawnerBlock(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI ::Brightness $getLightEmission(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
