#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/MinecraftGameplayGraphicsResources.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FrameUpdateContext;
namespace mce { class ImageResourceLoader; }
namespace mce { class ImmediateBuffer; }
namespace mce { class QuadIndexBuffer; }
namespace mce { class RenderContext; }
namespace mce::framebuilder { class PBRTextureDataManager; }
// clang-format on

class MinecraftGraphics : public ::Bedrock::EnableNonOwnerReferences, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                                          mShaderGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::QuadIndexBuffer>>                     mQuadBuffer;
    ::ll::UntypedStorage<8, 24>                                                         mImmediateBuffer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::framebuilder::PBRTextureDataManager>> mPBRTextureDataManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ImageResourceLoader>>                mImageResourceLoader;
    ::ll::UntypedStorage<8, 312> mMinecraftGameplayGraphicsResources;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGraphics();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGraphics();

    virtual void onAppSuspended();

    virtual void onAppTerminated();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftGraphics(::mce::RenderContext&);

    MCNAPI void frameUpdate(::FrameUpdateContext&);

    MCNAPI ::mce::QuadIndexBuffer& getGlobalQuadBuffer();

    MCNAPI std::shared_ptr<mce::ImageResourceLoader> getImageResourceLoader() const;

    MCNAPI ::mce::ClientResourcePointer<mce::ImmediateBuffer>& getImmediateBuffer();

    MCNAPI ::MinecraftGameplayGraphicsResources& getMinecraftGameplayGraphicsResources();

    MCNAPI ::Bedrock::NonOwnerPointer<mce::framebuilder::PBRTextureDataManager> getPBRTextureDataManager() const;

    MCNAPI void setPBRTextureDataManager(std::unique_ptr<mce::framebuilder::PBRTextureDataManager>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::RenderContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppTerminated();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/MinecraftGameplayGraphicsResources.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FrameUpdateContext;
namespace mce { class ImageResourceLoader; }
namespace mce { class ImmediateBuffer; }
namespace mce { class QuadIndexBuffer; }
namespace mce { class RenderContext; }
namespace mce { class ShaderGroup; }
namespace mce::framebuilder { class PBRTextureDataManager; }
// clang-format on

class MinecraftGraphics : public ::Bedrock::EnableNonOwnerReferences, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::ShaderGroup>>                         mShaderGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::QuadIndexBuffer>>                     mQuadBuffer;
    ::ll::TypedStorage<8, 24, ::mce::ClientResourcePointer<::mce::ImmediateBuffer>>         mImmediateBuffer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::framebuilder::PBRTextureDataManager>> mPBRTextureDataManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::ImageResourceLoader>>                mImageResourceLoader;
    ::ll::TypedStorage<8, 312, ::MinecraftGameplayGraphicsResources> mMinecraftGameplayGraphicsResources;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGraphics();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGraphics() /*override*/ = default;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppTerminated() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MinecraftGraphics(::mce::RenderContext& renderContext);

    MCAPI void frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCAPI ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager> getPBRTextureDataManager() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::RenderContext& renderContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onAppSuspended();

    MCFOLD void $onAppTerminated();
    // NOLINTEND
};
#else // @header-generator platform
class MinecraftGraphics {};
#endif // @header-generator platform
#endif // @header-generator platform
