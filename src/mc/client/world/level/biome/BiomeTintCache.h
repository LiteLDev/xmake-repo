#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/biome/LatticePointColorCache.h"
#include "mc/world/level/biome/BiomeIdLatticeBatch.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

class BiomeTintCache : public ::LatticePointColorCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource*>         mBlockSource;
    ::ll::TypedStorage<8, 32, ::BiomeIdLatticeBatch> mBiomeIdCache;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeTintCache();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BiomeTintCache();

    virtual ::mce::Color sampleColor(::TintMethod, ::BlockPos const&, std::function<mce::Color (const BlockPos&, int, TintMethod)>) const;

    virtual int _getLatticeData(::BlockPos const&) const;

    virtual ::mce::Color _getTint(::BlockPos const&, int, ::TintMethod) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeTintCache(::BlockSource*, ::BlockPos const&);

    MCNAPI void setBiomeIdCache(::BiomeIdLatticeBatch);

    MCNAPI void setRegion(::BlockSource&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource*, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color
    $sampleColor(::TintMethod, ::BlockPos const&, std::function<mce::Color(const BlockPos&, int, TintMethod)>) const;

    MCNAPI int $_getLatticeData(::BlockPos const&) const;

    MCNAPI ::mce::Color $_getTint(::BlockPos const&, int, ::TintMethod) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class BiomeTintCache {};
#endif // @header-generator platform
