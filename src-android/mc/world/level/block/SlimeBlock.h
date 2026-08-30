#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class EntityContext;
class IConstBlockSource;
class Material;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class SlimeBlock : public ::BlockType {
public:
    // prevent constructor by default
    SlimeBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SlimeBlock();

    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;

    virtual int getExtraRenderLayers() const;

    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SlimeBlock(std::string const&, int, ::Material const&);

    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;

    MCNAPI int $getExtraRenderLayers() const;

    MCNAPI float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
