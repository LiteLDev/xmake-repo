#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/Image.h"
#include "mc/deps/core_graphics/ResourceManager.h"
#include "mc/deps/minecraft_renderer/renderer/DynamicTexture.h"

struct DynamicImageResourceManager
: public ::cg::ResourceManager<std::shared_ptr<mce::Image>, mce::DynamicTexture, std::map> {};
