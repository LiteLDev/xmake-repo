#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace mce { class TexturePtr; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace mce { class TexturePtr; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class TextureGroupBase : public ::std::enable_shared_from_this<mce::TextureGroupBase> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TextureGroupBase() = default;

    virtual ::mce::TexturePtr getTexture(::ResourceLocation const&, bool, std::optional<uint>, ::cg::TextureSetLayerType const) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextureGroupBase : public ::std::enable_shared_from_this<::mce::TextureGroupBase> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureGroupBase() = default;

    virtual ::mce::TexturePtr
    getTexture(::ResourceLocation const&, bool, ::std::optional<uint>, ::cg::TextureSetLayerType const) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class TextureGroupBase {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
