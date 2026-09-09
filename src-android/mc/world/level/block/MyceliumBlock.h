#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class MyceliumBlock : public ::BlockType {
public:
    // prevent constructor by default
    MyceliumBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MyceliumBlock();

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MyceliumBlock(std::string const&, int);

    MCNAPI bool _canSpreadToBlock(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Brightness const& MIN_BRIGHTNESS_TO_PERSIST();

    MCNAPI static ::Brightness const& MIN_BRIGHTNESS_TO_SPREAD();
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
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
