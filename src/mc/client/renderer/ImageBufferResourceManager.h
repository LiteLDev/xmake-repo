#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/core_graphics/ResourceManager.h"

struct ImageBufferResourceManager
: public ::cg::ResourceManager<std::shared_ptr<cg::ImageBuffer>, ResourceLocation, std::map> {
public:
    // prevent constructor by default
    ImageBufferResourceManager& operator=(ImageBufferResourceManager const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/ResourceManager.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageBuffer; }
// clang-format on

struct ImageBufferResourceManager
: public ::cg::ResourceManager<::std::shared_ptr<::cg::ImageBuffer>, ::ResourceLocation, ::std::map> {};
#else // @header-generator platform
struct ImageBufferResourceManager {};
#endif // @header-generator platform
#endif // @header-generator platform
