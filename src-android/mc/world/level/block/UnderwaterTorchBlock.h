#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TorchBlock.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockPos;
class BlockSource;
struct BlockAnimateTickData;
// clang-format on

class UnderwaterTorchBlock : public ::TorchBlock {
public:
    // prevent constructor by default
    UnderwaterTorchBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UnderwaterTorchBlock();

    virtual bool isLavaBlocking() const;

    virtual bool canBeUsedInCommands(::BaseGameVersion const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UnderwaterTorchBlock(std::string const&, int);
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
    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
