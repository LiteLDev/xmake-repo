#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/render_dragon/rendering/LightingModels.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/IAdvancedGraphicsOptions.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsHardwareOptions;
class ResourcePackManager;
// clang-format on

class RayTracingOptions : public ::ResourcePackListener, public ::IAdvancedGraphicsOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                mAdvancedGraphicsHardwareOptions;
    ::ll::TypedStorage<1, 1, bool>                                             mRayTracingResourcesAvailable;
    ::ll::TypedStorage<1, 1, bool>                                             mPBRResourcesAvailable;
    ::ll::TypedStorage<1, 1, bool>                                             mSupportsVibrantVisualsPackStack;
    ::ll::TypedStorage<1, 1, bool>                                             mForceDisableVibrantVisuals;
    ::ll::TypedStorage<1, 1, bool>                                             mCanSwitchGraphicsModeInGame;
    ::ll::TypedStorage<1, 1, ::GraphicsMode>                                   mDefaultGraphicsMode;
    ::ll::TypedStorage<4, 8, std::optional<dragon::rendering::LightingModels>> mPrevSelectedAdvancedGraphicsModel;
    ::ll::TypedStorage<1, 1, ::GraphicsMode>                                   mPrevVanillaGraphicsMode;
    ::ll::TypedStorage<1, 1, ::GraphicsMode>                                   mGraphicsMode;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::LightingModels>              mLightingModel;
    ::ll::UntypedStorage<8, 24>                                                mResourcePackManager;
    // NOLINTEND

public:
    // prevent constructor by default
    RayTracingOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RayTracingOptions();

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&);

    virtual void unregisterResourcePackListener();

    virtual bool isHardwareRayTracingCompatible() const;

    virtual bool isVibrantVisualsSupported() const;

    virtual bool areRayTracingResourcesAvailable() const;

    virtual bool isDeferredLightingModelAvailable() const;

    virtual bool isPlatformCompatible() const;

    virtual bool isPlatformDeferredPerformanceCompatible() const;

    virtual bool isRayTracingAvailable() const;

    virtual bool areDeferredShadingAndResourcesAvailable() const;

    virtual bool isVibrantVisualsAllowed() const;

    virtual void setForceDisableVibrantVisuals(bool);

    virtual bool canSwitchGraphicsModeInGame() const;

    virtual bool requiresPBRResources() const;

    virtual bool isUpscalingAvailable() const;

    virtual ::dragon::rendering::LightingModels getLightingModel() const;

    virtual void setLightingModel(::dragon::rendering::LightingModels const);

    virtual void setCanSwitchGraphicsModeInGame(bool);

    virtual ::GraphicsMode getDefaultGraphicsMode() const;

    virtual ::dragon::rendering::LightingModels toggleLightingModel();

    virtual ::GraphicsMode getPrevVanillaGraphicsMode() const;

    virtual void setGraphicsMode(::GraphicsMode const);

    virtual bool isPrevAdvancedGraphicsMode() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RayTracingOptions(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsHardwareOptions>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourcePackManager>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsHardwareOptions>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourcePackManager>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);

    MCNAPI void $unregisterResourcePackListener();

    MCNAPI bool $isHardwareRayTracingCompatible() const;

    MCNAPI bool $isVibrantVisualsSupported() const;

    MCNAPI bool $areRayTracingResourcesAvailable() const;

    MCNAPI bool $isDeferredLightingModelAvailable() const;

    MCNAPI bool $isPlatformCompatible() const;

    MCNAPI bool $isPlatformDeferredPerformanceCompatible() const;

    MCNAPI bool $isRayTracingAvailable() const;

    MCNAPI bool $areDeferredShadingAndResourcesAvailable() const;

    MCNAPI bool $isVibrantVisualsAllowed() const;

    MCNAPI void $setForceDisableVibrantVisuals(bool);

    MCNAPI bool $canSwitchGraphicsModeInGame() const;

    MCNAPI bool $requiresPBRResources() const;

    MCNAPI bool $isUpscalingAvailable() const;

    MCNAPI ::dragon::rendering::LightingModels $getLightingModel() const;

    MCNAPI void $setLightingModel(::dragon::rendering::LightingModels const);

    MCNAPI void $setCanSwitchGraphicsModeInGame(bool);

    MCNAPI ::GraphicsMode $getDefaultGraphicsMode() const;

    MCNAPI ::dragon::rendering::LightingModels $toggleLightingModel();

    MCNAPI ::GraphicsMode $getPrevVanillaGraphicsMode() const;

    MCNAPI void $setGraphicsMode(::GraphicsMode const);

    MCNAPI bool $isPrevAdvancedGraphicsMode() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
