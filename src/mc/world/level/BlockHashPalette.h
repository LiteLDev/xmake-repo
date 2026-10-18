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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<uint, ulong>> mNetworkIdToPaletteIndexMap;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<uint, uint64>> mNetworkIdToPaletteIndexMap;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    BlockHashPalette& operator=(BlockHashPalette const&);
#else // @header-generator platform
#endif // @header-generator platform
    BlockHashPalette();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockHashPalette();
#else // @header-generator platform
    virtual ::BlockPalette::PaletteType getPaletteType() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPalette::PaletteType getPaletteType();
#else // @header-generator platform
    virtual void appendBlock(::Block const& block) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendBlock(::Block const&);
#else // @header-generator platform
    virtual ::Block const& getBlock(uint const& networkId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlock(uint const&) const;

    virtual void assignBlockNetworkId(::Block const&, ulong) const;
#else // @header-generator platform
    virtual void assignBlockNetworkId(::Block const& block, uint64 networkId) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockHashPalette(::Level&);
#else // @header-generator platform
    MCAPI explicit BlockHashPalette(::Level& level);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Level&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Level& level);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPalette::PaletteType $getPaletteType();
#else // @header-generator platform
    MCFOLD ::BlockPalette::PaletteType $getPaletteType();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendBlock(::Block const&);
#else // @header-generator platform
    MCAPI void $appendBlock(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getBlock(uint const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $getBlock(uint const& networkId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $assignBlockNetworkId(::Block const&, ulong) const;
#else // @header-generator platform
    MCAPI void $assignBlockNetworkId(::Block const& block, uint64 networkId) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
