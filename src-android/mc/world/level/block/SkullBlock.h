#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Level;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class SkullBlock : public ::ActorBlock {
public:
    // SkullBlock inner types define
    enum class SkullType : int {
        UNSET    = -1,
        SKELETON = 0,
        WITHER   = 1,
        ZOMBIE   = 2,
        CHAR     = 3,
        CREEPER  = 4,
        DRAGON   = 5,
        PIGLIN   = 6,
        COUNT    = 7,
    };

public:
    // prevent constructor by default
    SkullBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkullBlock();

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual std::string buildDescriptionId(::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkullBlock(std::string const&, int);

    MCNAPI bool checkMobSpawn(::Level&, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const& getFlattenedBlock(::Block const&, ::BlockActor const&);
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
    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI std::string $buildDescriptionId(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
