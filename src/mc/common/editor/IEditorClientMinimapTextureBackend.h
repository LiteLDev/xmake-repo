#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class IEditorClientMinimapTextureBackend {
public:
    // IEditorClientMinimapTextureBackend inner types declare
    // clang-format off
    struct UploadedTexture;
    // clang-format on

    // IEditorClientMinimapTextureBackend inner types define
    struct UploadedTexture {};
};

} // namespace Editor::Services
#endif // @header-generator platform
