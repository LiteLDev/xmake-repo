#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/renderer/hal/TextureDescription.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Texture; }
namespace mce { class TextureResourceServiceContext; }
namespace mce { struct ResourceServiceTextureDescription; }
// clang-format on

namespace mce {

struct CreateTextureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::mce::TextureDescription> mTextureDescription;
    ::ll::TypedStorage<8, 16, std::string_view>          mDebugName;
    ::ll::TypedStorage<1, 1, bool>                       mValidateSize;
    // NOLINTEND

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
    // NOLINTEND
};

} // namespace mce
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
