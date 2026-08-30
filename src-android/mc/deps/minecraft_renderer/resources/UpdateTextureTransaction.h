#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Texture; }
namespace mce { class TextureResourceServiceContext; }
namespace mce { struct ResourceServiceTextureDescription; }
// clang-format on

namespace mce {

struct UpdateTextureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> mImageBuffer;
    ::ll::TypedStorage<8, 24, std::string>       mDebugName;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateTextureTransaction& operator=(UpdateTextureTransaction const&);
    UpdateTextureTransaction(UpdateTextureTransaction const&);
    UpdateTextureTransaction();

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

    MCNAPI ~UpdateTextureTransaction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
