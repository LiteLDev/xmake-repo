#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/renderer/hal/interface/Texture.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

namespace mce {

struct ServerTexture
: public ::mce::ResourceReferenceTraits<
      std::variant<std::monostate, mce::Texture, mce::ClientResourcePointer<dragon::ResolvedTextureResource>>>::
      ServerResourceType {
public:
    // ServerTexture inner types define
    using ServerResource = ::mce::ServerResourcePointer<
        std::variant<std::monostate, mce::Texture, mce::ClientResourcePointer<dragon::ResolvedTextureResource>>>;

public:
    // prevent constructor by default
    ServerTexture& operator=(ServerTexture const&);

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
