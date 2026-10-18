#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/PointLightQuality.h"
#include "mc/client/options/CloudQuality.h"
#include "mc/client/options/ReflectionsQuality.h"
#include "mc/client/options/ShadowQuality.h"
#include "mc/client/options/TargetResolution.h"
#include "mc/client/options/UpscalingMode.h"
#include "mc/client/options/UpscalingQuality.h"
#include "mc/client/options/VolumetricFogQuality.h"

// auto generated forward declare list
// clang-format off
struct CloudConfiguration;
struct PointLightConfiguration;
struct ReflectionConfiguration;
struct RenderDistanceConfiguration;
struct ShadowConfiguration;
struct UpscalingConfiguration;
struct VolumetricFogConfiguration;
// clang-format on

class OptionValueInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionValueInterface() = default;

    virtual std::vector<int> const getRenderDistanceLevels(int&) const = 0;

    virtual std::vector<int> const getRayTracingRenderDistanceLevels(int&) const = 0;

    virtual bool getDefaultTexelAA() const = 0;

    virtual int getDefaultMSAA() const = 0;

    virtual std::vector<int> const getSupportedMSAAValues(bool) const = 0;

    virtual void setMSAAValue(int) const = 0;

    virtual void setTexelAA(bool const) const = 0;

    virtual void setShadowQuality(::ShadowQuality const) const = 0;

    virtual void setShadowConfiguration(::ShadowConfiguration const&) = 0;

    virtual void setCloudQuality(::CloudQuality const) const = 0;

    virtual void setCloudConfiguration(::CloudConfiguration const&) = 0;

    virtual void setLightingMixedResUpscale(float) const = 0;

    virtual void setVolumetricFogQuality(::VolumetricFogQuality const) const = 0;

    virtual void setVolumetricFogConfiguration(::VolumetricFogConfiguration const&) = 0;

    virtual void setPointLightQuality(::PointLightQuality const) = 0;

    virtual void setPointLightConfiguration(::PointLightConfiguration const&) = 0;

    virtual void setReflectionsQuality(::ReflectionsQuality const) const = 0;

    virtual void setReflectionConfiguration(::ReflectionConfiguration const&) = 0;

    virtual void setBloomMultiplier(float const) const = 0;

    virtual void setPlayerUIGamma(float const) const = 0;

    virtual void setBloomEnabledDefault(bool) = 0;

    virtual bool getBloomEnabledDefault() const = 0;

    virtual void setDeferredUpscalingConfiguration(::UpscalingConfiguration const&) = 0;

    virtual void setDeferredUpscalingQuality(::UpscalingQuality const, ::TargetResolution) const = 0;

    virtual void setDeferredUpscalingMode(::UpscalingMode const) const = 0;

    virtual void setRenderDistanceConfiguration(::RenderDistanceConfiguration const&) = 0;

    virtual std::vector<int> const getDeferredRenderDistanceLevels() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class OptionValueInterface {};
#endif // @header-generator platform
