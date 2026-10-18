#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/image/Image.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Texture; }
namespace mce { class TextureResourceServiceContext; }
namespace mce { struct ResourceServiceTextureDescription; }
// clang-format on

namespace mce {

struct CreateTextureFromOwnedImageTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::mce::Image> mImage;
    ::ll::TypedStorage<8, 24, std::string>  mDebugName;
    ::ll::TypedStorage<1, 1, bool>          mValidateSize;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateTextureFromOwnedImageTransaction& operator=(CreateTextureFromOwnedImageTransaction const&);
    CreateTextureFromOwnedImageTransaction(CreateTextureFromOwnedImageTransaction const&);
    CreateTextureFromOwnedImageTransaction();

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

    MCNAPI ~CreateTextureFromOwnedImageTransaction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
