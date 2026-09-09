#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPalette.h"

// auto generated forward declare list
// clang-format off
class Block;
class Level;
// clang-format on

class BlockHashPalette : public ::BlockPalette {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<uint, ulong>> mNetworkIdToPaletteIndexMap;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockHashPalette& operator=(BlockHashPalette const&);
    BlockHashPalette();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockHashPalette();

    virtual ::BlockPalette::PaletteType getPaletteType();

    virtual void appendBlock(::Block const&);

    virtual ::Block const& getBlock(uint const&) const;

    virtual void assignBlockNetworkId(::Block const&, ulong) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockHashPalette(::Level&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPalette::PaletteType $getPaletteType();

    MCNAPI void $appendBlock(::Block const&);

    MCNAPI ::Block const& $getBlock(uint const&) const;

    MCNAPI void $assignBlockNetworkId(::Block const&, ulong) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
