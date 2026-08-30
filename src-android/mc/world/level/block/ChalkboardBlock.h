#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ChalkboardBlockActor;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
class Player;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class ChalkboardBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ChalkboardBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ChalkboardBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual ::AABB const& getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool getIgnoresDestroyPermissions(::Actor&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual int getVariant(::Block const&) const;

    virtual bool isInteractiveBlock() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChalkboardBlock(std::string const&, int);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _getShape(::ChalkboardSize, bool, int, ::AABB&);

    MCNAPI static bool mayPlayerEdit(::Player&, ::BlockPos const&);
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

    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $getIgnoresDestroyPermissions(::Actor&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
