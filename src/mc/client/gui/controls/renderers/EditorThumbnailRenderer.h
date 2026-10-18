#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkSource;
class IClientInstance;
class ScreenContext;
class StructureTemplate;
class StructureVolumeRenderer;
class UIScene;
class Vec2;
namespace cg { class ImageBuffer; }
namespace dragon { class ResolvedImageResource; }
// clang-format on

class EditorThumbnailRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIScene>>                                  mUIScene;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StructureVolumeRenderer>>                  mStructureVolumeRenderer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenContext>>                             mScreenContext;
    ::ll::TypedStorage<8, 24, ::mce::ClientResourcePointer<::dragon::ResolvedImageResource>> mTargetImage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>>                               mChunkSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockSource>>                               mBlockSource;
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mLabel;
    ::ll::TypedStorage<8, 8, uint64>                                                         mRenderCounter;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorThumbnailRenderer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorThumbnailRenderer(::IClientInstance& clientInstance);

    MCAPI void _initialize(::IClientInstance& clientInstance);

    MCAPI void capture(
        uint                                       screenshotWidth,
        uint                                       screenshotHeight,
        ::IClientInstance&                         clientInstance,
        ::StructureTemplate const&                 structure,
        ::std::function<void(::cg::ImageBuffer&&)> callback,
        ::Vec2                                     rotation
    );

    MCAPI ~EditorThumbnailRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IClientInstance& clientInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class EditorThumbnailRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
