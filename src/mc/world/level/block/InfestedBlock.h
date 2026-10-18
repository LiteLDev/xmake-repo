#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
struct ResourceDropsContext;
// clang-format on

class InfestedBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString const> mUninfestedBlockId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString const> mUninfestedBlockId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    InfestedBlock();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~InfestedBlock();
#else // @header-generator platform
    virtual ::Block const* tryGetUninfested(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

    virtual ::Block const* tryGetUninfested(::Block const&) const;
    // clang-format on
#else // @header-generator platform
    virtual void spawnAfterBreak(
        ::BlockSource& region,
        ::Block const&,
        ::BlockPos const&             pos,
        ::ResourceDropsContext const& resourceDropsContext
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InfestedBlock(std::string const&, int, ::HashedString const&);
#else // @header-generator platform
    MCAPI InfestedBlock(::std::string const& nameId, int id, ::HashedString const& uninfestedBlockId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void spawnSilverfish(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static void spawnSilverfish(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& nameId, int id, ::HashedString const& uninfestedBlockId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;
#else // @header-generator platform
    MCFOLD ::Block const* $tryGetUninfested(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $tryGetUninfested(::Block const&) const;
#else // @header-generator platform
    MCAPI void $spawnAfterBreak(
        ::BlockSource& region,
        ::Block const&,
        ::BlockPos const&             pos,
        ::ResourceDropsContext const& resourceDropsContext
    ) const;


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
