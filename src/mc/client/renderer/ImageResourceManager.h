#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/image/Image.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/ResourceManager.h"

struct ImageResourceManager
: public ::cg::ResourceManager<std::shared_ptr<mce::Image>, ResourceLocation, std::unordered_map> {};
#else // @header-generator platform
struct ImageResourceManager {};
#endif // @header-generator platform
