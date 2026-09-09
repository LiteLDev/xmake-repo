#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/minecraft_renderer/resources/ServerTexture.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Texture; }
namespace mce { class TextureResourceServiceContext; }
namespace mce { struct ResourceServiceTextureDescription; }
// clang-format on

namespace mce {

struct AssembleCubemapTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 144>           mTextures;
    ::ll::TypedStorage<8, 24, std::string> mDebugName;
    // NOLINTEND

public:
    // prevent constructor by default
    AssembleCubemapTransaction& operator=(AssembleCubemapTransaction const&);
    AssembleCubemapTransaction(AssembleCubemapTransaction const&);
    AssembleCubemapTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<mce::ResourceServiceTextureDescription> apply(
        ::mce::ResourcePointer<std::variant<
            std::monostate,
            mce::Texture,
            mce::ClientResourcePointer<dragon::ResolvedTextureResource>>> const&,
        ::mce::TextureResourceServiceContext&
    );

    MCNAPI ~AssembleCubemapTransaction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
