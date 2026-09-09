#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/DynamicImageResourceManager.h"
#include "mc/client/renderer/ImageBufferResourceManager.h"
#include "mc/client/renderer/ImageResourceManager.h"
#include "mc/client/renderer/TickingTextures.h"
#include "mc/deps/core_graphics/ResourceManagerTracker.h"
#include "mc/deps/minecraft_renderer/resources/ImmediateBufferResourceService.h"
#include "mc/deps/minecraft_renderer/resources/TextureResourceService.h"
#include "mc/deps/minecraft_renderer/resources/mcr/DynamicTextureResourceManager.h"

// auto generated forward declare list
// clang-format off
class FrameUpdateContext;
class RuntimeLocalLightingConfig;
namespace mce { class RenderContext; }
namespace mce { struct BufferResourceService; }
namespace mcr { struct DeferredResourceTransactions; }
// clang-format on

class MinecraftGameplayGraphicsResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ImageResourceManager>                          mImageResources;
    ::ll::UntypedStorage<8, 8>                                                 mImageResourceTracker;
    ::ll::TypedStorage<8, 24, ::ImageBufferResourceManager>                    mItemAtlasResources;
    ::ll::UntypedStorage<8, 8>                                                 mSharedImageBufferAtlasTracker;
    ::ll::TypedStorage<8, 24, ::DynamicImageResourceManager>                   mDynamicImageResourceManager;
    ::ll::UntypedStorage<8, 8>                                                 mDynamicImageTracker;
    ::ll::TypedStorage<8, 8, ::TickingTextures>                                mTickingTextures;
    ::ll::TypedStorage<8, 24, ::mcr::DynamicTextureResourceManager>            mDynamicTextures;
    ::ll::UntypedStorage<8, 64>                                                mTextureResourceService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::BufferResourceService>>     mBufferResourceService;
    ::ll::UntypedStorage<8, 72>                                                mImmediateBufferResourceService;
    ::ll::TypedStorage<8, 16, std::weak_ptr<const RuntimeLocalLightingConfig>> mRuntimeLocalLightingConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameplayGraphicsResources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void cleanImageCachesForActiveResourcePackChange();

    MCNAPI void deviceLost();

    MCNAPI void flushResourceService();

    MCNAPI ::mcr::DeferredResourceTransactions getDeferredResourceTransactions();

    MCNAPI void reloadTickingTextures();

    MCNAPI void resume();

    MCNAPI bool servicesAreEnabled() const;

    MCNAPI void suspend();

    MCNAPI void tickUpdate();

    MCNAPI ~MinecraftGameplayGraphicsResources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
