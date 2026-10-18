#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
namespace mce { struct BufferResourceService; }
namespace mce { struct ClientTexture; }
// clang-format on

class CameraAimAssistRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>         mCameraAimAssistBlockHighlightTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>         mCameraAimAssistEntityHighlightTex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::Mesh>> mCameraAimAssistMesh;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistRenderer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraAimAssistRenderer(std::shared_ptr<mce::TextureGroup>, std::weak_ptr<mce::BufferResourceService>);

    MCNAPI ::mce::ClientTexture const& getBlockHighlightTexture() const;

    MCNAPI ::mce::ClientTexture const& getEntityHighlightTexture() const;

    MCNAPI ::mce::Mesh const* getMesh() const;

    MCNAPI void reinitializeMesh(std::weak_ptr<mce::BufferResourceService>);

    MCNAPI void safeReleaseMesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>, std::weak_ptr<mce::BufferResourceService>);
    // NOLINTEND
};
#else // @header-generator platform
class CameraAimAssistRenderer {};
#endif // @header-generator platform
