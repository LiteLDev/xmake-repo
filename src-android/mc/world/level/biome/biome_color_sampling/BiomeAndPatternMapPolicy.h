#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/biome/biome_color_sampling/MapPolicy.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockSource;
namespace mce { class Color; }
// clang-format on

namespace BiomeColorSampling {

class BiomeAndPatternMapPolicy : public ::BiomeColorSampling::MapPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<int (*)(const Biome&, const BlockPos&)> const> mSampler;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos> const>                                  mPattern;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeAndPatternMapPolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeAndPatternMapPolicy();

    virtual ::mce::Color get(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $get(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BiomeColorSampling
