#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/ResourceManager.h"
#include "mc/deps/minecraft_renderer/renderer/DynamicTexture.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/ResourceManager.h"
#include "mc/deps/minecraft_renderer/renderer/DynamicTexture.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct ClientTexture; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mcr {

#if defined(LL_PLAT_A) // @header-generator platform
struct DynamicTextureResourceManager
: public ::cg::ResourceManager<std::shared_ptr<mce::ClientTexture>, mce::DynamicTexture, std::map> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DynamicTextureResourceManager
: public ::cg::ResourceManager<::std::shared_ptr<::mce::ClientTexture>, ::mce::DynamicTexture, ::std::map> {};
#else // @header-generator platform
struct DynamicTextureResourceManager {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mcr
