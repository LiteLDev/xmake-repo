#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
