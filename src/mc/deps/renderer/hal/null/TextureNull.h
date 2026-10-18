#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/base/TextureBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { struct TextureDescription; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/base/TextureBase.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class TextureNull : public ::mce::TextureBase {
public:
    // TextureNull inner types define
    using resourceType = int;

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void createTexture(::mce::RenderContext&, ::mce::TextureDescription const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextureNull : public ::mce::TextureBase {};
#else // @header-generator platform
class TextureNull {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
