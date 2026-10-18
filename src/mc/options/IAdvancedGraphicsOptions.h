#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/LightingModels.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/IAdvancedGraphicsHardwareOptions.h"

class IAdvancedGraphicsOptions : public ::IAdvancedGraphicsHardwareOptions {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unregisterResourcePackListener() = 0;
#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual void unregisterResourcePackListener() = 0;

    virtual bool areRayTracingResourcesAvailable() const = 0;

    virtual bool isDeferredLightingModelAvailable() const = 0;

    virtual bool isRayTracingAvailable() const = 0;

    virtual bool areDeferredShadingAndResourcesAvailable() const = 0;

    virtual bool isVibrantVisualsAllowed() const = 0;

    virtual void setForceDisableVibrantVisuals(bool value) = 0;

    virtual bool isPlatformDeferredPerformanceCompatible() const = 0;

    virtual bool canSwitchGraphicsModeInGame() const = 0;

    virtual bool requiresPBRResources() const = 0;

    virtual ::dragon::rendering::LightingModels getLightingModel() const = 0;

    virtual void setLightingModel(::dragon::rendering::LightingModels const model) = 0;

    virtual void setCanSwitchGraphicsModeInGame(bool canRuntimeSwitch) = 0;

    virtual ::GraphicsMode getDefaultGraphicsMode() const = 0;

    virtual ::dragon::rendering::LightingModels toggleLightingModel() = 0;

    virtual ::GraphicsMode getPrevVanillaGraphicsMode() const = 0;

    virtual void setGraphicsMode(::GraphicsMode const graphicsMode) = 0;

    virtual bool isPrevAdvancedGraphicsMode() const = 0;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool areRayTracingResourcesAvailable() const = 0;

    virtual bool isDeferredLightingModelAvailable() const = 0;

    virtual bool isRayTracingAvailable() const = 0;

    virtual bool areDeferredShadingAndResourcesAvailable() const = 0;

    virtual bool isVibrantVisualsAllowed() const = 0;

    virtual void setForceDisableVibrantVisuals(bool) = 0;

    virtual bool isPlatformDeferredPerformanceCompatible() const = 0;

    virtual bool canSwitchGraphicsModeInGame() const = 0;

    virtual bool requiresPBRResources() const = 0;

    virtual ::dragon::rendering::LightingModels getLightingModel() const = 0;

    virtual void setLightingModel(::dragon::rendering::LightingModels const) = 0;

    virtual void setCanSwitchGraphicsModeInGame(bool) = 0;

    virtual ::GraphicsMode getDefaultGraphicsMode() const = 0;

    virtual ::dragon::rendering::LightingModels toggleLightingModel() = 0;

    virtual ::GraphicsMode getPrevVanillaGraphicsMode() const = 0;

    virtual void setGraphicsMode(::GraphicsMode const) = 0;

    virtual bool isPrevAdvancedGraphicsMode() const = 0;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& PBR_TAG();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::string_view const& PBR_TAG();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& RAY_TRACING_TAG();
#else // @header-generator platform
    MCNAPI static ::std::string_view const& RAY_TRACING_TAG();
#endif // @header-generator platform
    // NOLINTEND
};
