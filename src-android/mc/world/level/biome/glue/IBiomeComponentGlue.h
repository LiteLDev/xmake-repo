#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
namespace SharedTypes::v1_20_60 { struct BlockSpecifier; }
// clang-format on

struct IBiomeComponentGlue {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBiomeComponentGlue();

    virtual bool resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&) = 0;

    virtual void applyToBiome(::Biome&, ::entt::meta_any const&) const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const* _getResolvedBlock(std::string const&, ::SharedTypes::v1_20_60::BlockSpecifier const&);

    MCNAPI static std::vector<const Block*>
    _getResolvedBlocks(std::string const&, std::vector<SharedTypes::v1_20_60::BlockSpecifier> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
