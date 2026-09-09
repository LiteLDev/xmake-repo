#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CSSGameplayFlags.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemStack;
namespace mce::framebuilder { struct CustomSurfaceShaderMetadata; }
// clang-format on

class CSSMetadataFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::framebuilder::CustomSurfaceShaderMetadata createCSSMetadataFromActor(::Actor const&);

    MCNAPI static ::mce::framebuilder::CustomSurfaceShaderMetadata createCSSMetadataFromBlock(::Block const&);

    MCNAPI static ::mce::framebuilder::CustomSurfaceShaderMetadata createCSSMetadataFromItem(::ItemStack const&);
    // NOLINTEND
};
