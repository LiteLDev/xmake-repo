#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ResourceManager.h"
#include "mc/deps/minecraft_renderer/renderer/DynamicTexture.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"

namespace mcr {

struct DynamicTextureResourceManager
: public ::cg::ResourceManager<std::shared_ptr<mce::ClientTexture>, mce::DynamicTexture, std::map> {};

} // namespace mcr
