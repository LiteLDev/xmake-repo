#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/renderer/hal/interface/Texture.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"

// auto generated forward declare list
// clang-format off
namespace mce { class TextureResourceServiceContext; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Texture; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureResourceService
: public ::mce::CheckedResourceService<
      std::variant<std::monostate, mce::Texture, mce::ClientResourcePointer<dragon::ResolvedTextureResource>>> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextureResourceService
: public ::mce::CheckedResourceService<
      ::std::
          variant<::std::monostate, ::mce::Texture, ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>> {
};
#else // @header-generator platform
struct TextureResourceService {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
