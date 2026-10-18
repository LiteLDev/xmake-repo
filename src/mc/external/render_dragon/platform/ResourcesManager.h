#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/external/render_dragon/materials/CompiledMaterialManager.h"
#include "mc/external/render_dragon/mesh/IndexBufferResourceManager.h"
#include "mc/external/render_dragon/mesh/IndexSpanRegistry.h"
#include "mc/external/render_dragon/mesh/VertexBufferResourceManager.h"
#include "mc/external/render_dragon/mesh/VertexDeclManager.h"
#include "mc/external/render_dragon/mesh/VertexSpanRegistry.h"
#include "mc/external/render_dragon/rendering/TextureResourceManager.h"
#include "mc/external/render_dragon/resources/DragonBufferResourceServiceContext.h"
#include "mc/external/render_dragon/resources/DragonMaterialResourceServiceContext.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/texture_streaming/texture_cache/TextureCacheConfiguration.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SharedMemoryTracker; }
namespace dragon { class ResolvedImageResource; }
namespace dragon { class ResolvedMaterialResource; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct ResolvedAccelerationStructureResource; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedShaderBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace dragon::materials { struct MaterialInitializationOptions; }
namespace dragon::platform { struct ResourcesManagerConfiguration; }
namespace dragon::tasks { class GraphicsTasks; }
namespace dragon::texturestreaming { struct DragonTextureCacheContext; }
namespace dragon::texturestreaming { struct TextureStreamingConfiguration; }
namespace dragon::texturestreaming { template<typename T0> class TextureCache; }
namespace dragon::texturestreaming { template<typename T0> class TextureStreamingManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::platform {

#if defined(LL_PLAT_A) // @header-generator platform
class ResourcesManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::dragon::rendering::TextureResourceManager>  mTextureManager;
    ::ll::TypedStorage<8, 8, ::dragon::mesh::VertexDeclManager>             mVertexDeclManager;
    ::ll::TypedStorage<8, 16, ::dragon::mesh::VertexBufferResourceManager>  mVertexBufferManager;
    ::ll::TypedStorage<8, 8, ::dragon::mesh::IndexBufferResourceManager>    mIndexBufferManager;
    ::ll::UntypedStorage<1, 328>                                            mVertexSpanStorage;
    ::ll::UntypedStorage<1, 200>                                            mIndexSpanStorage;
    ::ll::UntypedStorage<8, 304>                                            mCompiledMaterialManager;
    ::ll::UntypedStorage<8, 16>                                             mTextureCache;
    ::ll::UntypedStorage<8, 16>                                             mTextureStreamingManager;
    ::ll::TypedStorage<8, 24, ::dragon::DragonBufferResourceServiceContext> mBufferResourceServiceContext;
    ::ll::UntypedStorage<8, 80>                                             mVertexBufferResourceService;
    ::ll::UntypedStorage<8, 80>                                             mIndexBufferResourceService;
    ::ll::UntypedStorage<8, 88>                                             mShaderBufferResourceService;
    ::ll::UntypedStorage<8, 64>                                             mMaterialResourceServiceContext;
    ::ll::UntypedStorage<8, 128>                                            mMaterialResourceService;
    ::ll::UntypedStorage<8, 104>                                            mTextureResourceService;
    ::ll::UntypedStorage<8, 80>                                             mAccelerationStructureResourceService;
    ::ll::UntypedStorage<8, 64>                                             mImageResourceService;
    ::ll::TypedStorage<8, 64, ::dragon::texturestreaming::TextureCacheConfiguration> mCacheConfig;
    ::ll::TypedStorage<8, 8, ::dragon::tasks::GraphicsTasks&>                        mGraphicsTasks;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcesManager& operator=(ResourcesManager const&);
    ResourcesManager(ResourcesManager const&);
    ResourcesManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcesManager(
        ::dragon::tasks::GraphicsTasks&,
        ::dragon::platform::ResourcesManagerConfiguration const&,
        ::dragon::materials::MaterialInitializationOptions&&,
        ::dragon::texturestreaming::TextureStreamingConfiguration,
        std::function<
            mce::ServerResourcePointer<dragon::ResolvedTextureResource>(const std::string&, const std::string&)> const&,
        std::function<bool(const std::string&, std::string&)> const
    );

    MCNAPI void enableTextureStreamer();

    MCNAPI void flush(::Core::SharedMemoryTracker&);

    MCNAPI void initializeTextureCache();

    MCNAPI ~ResourcesManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::dragon::tasks::GraphicsTasks&,
        ::dragon::platform::ResourcesManagerConfiguration const&,
        ::dragon::materials::MaterialInitializationOptions&&,
        ::dragon::texturestreaming::TextureStreamingConfiguration,
        std::function<
            mce::ServerResourcePointer<dragon::ResolvedTextureResource>(const std::string&, const std::string&)> const&,
        std::function<bool(const std::string&, std::string&)> const
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ResourcesManager {};
#endif // @header-generator platform

} // namespace dragon::platform
