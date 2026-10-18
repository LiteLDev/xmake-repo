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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IBiomeComponentGlue();
#else // @header-generator platform
    virtual ~IBiomeComponentGlue() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&) = 0;
#else // @header-generator platform
    virtual bool
    resolveAndValidate(::entt::meta_any const& biomeJsonComponent, ::BiomeRegistry const& biomeRegistry) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyToBiome(::Biome&, ::entt::meta_any const&) const = 0;
#else // @header-generator platform
    virtual void applyToBiome(::Biome& biome, ::entt::meta_any const& component) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const* _getResolvedBlock(std::string const&, ::SharedTypes::v1_20_60::BlockSpecifier const&);

    MCNAPI static std::vector<const Block*>
    _getResolvedBlocks(std::string const&, std::vector<SharedTypes::v1_20_60::BlockSpecifier> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::vector<::Block const*> _getResolvedBlocks(
        ::std::string const&                                          fieldName,
        ::std::vector<::SharedTypes::v1_20_60::BlockSpecifier> const& blockSpecifiers
    );
#endif // @header-generator platform
    // NOLINTEND
};
