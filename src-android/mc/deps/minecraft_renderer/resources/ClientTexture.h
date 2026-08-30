#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/renderer/hal/interface/Texture.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"

namespace mce {

struct ClientTexture
: public ::mce::ResourceReferenceTraits<
      std::variant<std::monostate, mce::Texture, mce::ClientResourcePointer<dragon::ResolvedTextureResource>>>::
      ClientResourceType {
public:
    // ClientTexture inner types define
    using ClientResource = ::mce::ClientResourcePointer<
        std::variant<std::monostate, mce::Texture, mce::ClientResourcePointer<dragon::ResolvedTextureResource>>>;

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientTexture(
        ::mce::ClientResourcePointer<
            std::variant<std::monostate, mce::Texture, mce::ClientResourcePointer<dragon::ResolvedTextureResource>>>&&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::ClientResourcePointer<
            std::variant<std::monostate, mce::Texture, mce::ClientResourcePointer<dragon::ResolvedTextureResource>>>&&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
