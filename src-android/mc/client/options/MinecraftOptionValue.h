#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PointLightConfiguration.h"
#include "mc/PointLightQuality.h"
#include "mc/client/options/CloudQuality.h"
#include "mc/client/options/OptionValueInterface.h"
#include "mc/client/options/ReflectionsQuality.h"
#include "mc/client/options/ShadowQuality.h"
#include "mc/client/options/TargetResolution.h"
#include "mc/client/options/UpscalingMode.h"
#include "mc/client/options/UpscalingQuality.h"
#include "mc/client/options/VolumetricFogQuality.h"
#include "mc/client/renderer/CloudConfiguration.h"
#include "mc/client/renderer/ReflectionConfiguration.h"
#include "mc/client/renderer/RenderDistanceConfiguration.h"
#include "mc/client/renderer/ShadowConfiguration.h"
#include "mc/client/renderer/UpscalingConfiguration.h"
#include "mc/client/renderer/VolumetricFogConfiguration.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
// clang-format on

class MinecraftOptionValue : public ::OptionValueInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 5600, ::ShadowConfiguration>       mShadowConfiguration;
    ::ll::TypedStorage<4, 160, ::CloudConfiguration>         mCloudConfiguration;
    ::ll::TypedStorage<4, 272, ::VolumetricFogConfiguration> mVolumetricFogConfiguration;
    ::ll::TypedStorage<8, 544, ::PointLightConfiguration>    mPointLightConfiguration;
    ::ll::TypedStorage<4, 576, ::ReflectionConfiguration>    mReflectionConfiguration;
    ::ll::TypedStorage<4, 416, ::UpscalingConfiguration>     mUpscalingConfiguration;
    ::ll::TypedStorage<8, 24, ::RenderDistanceConfiguration> mRenderDistanceConfiguration;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame*>              mMinecraftGame;
    ::ll::TypedStorage<1, 1, bool>                           mEnableBloomDefault;
    ::ll::TypedStorage<1, 1, bool>                           mIsReadOnly;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftOptionValue();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftOptionValue();

    virtual std::vector<int> const getRenderDistanceLevels(int&) const;

    virtual std::vector<int> const getRayTracingRenderDistanceLevels(int&) const;

    virtual bool getDefaultTexelAA() const;

    virtual int getDefaultMSAA() const;

    virtual std::vector<int> const getSupportedMSAAValues(bool) const;

    virtual void setMSAAValue(int) const;

    virtual void setTexelAA(bool const) const;

    virtual void setShadowQuality(::ShadowQuality const) const;

    virtual void setShadowConfiguration(::ShadowConfiguration const&);

    virtual void setCloudQuality(::CloudQuality const) const;

    virtual void setCloudConfiguration(::CloudConfiguration const&);

    virtual void setLightingMixedResUpscale(float) const;

    virtual void setVolumetricFogQuality(::VolumetricFogQuality const) const;

    virtual void setVolumetricFogConfiguration(::VolumetricFogConfiguration const&);

    virtual void setPointLightQuality(::PointLightQuality const);

    virtual void setPointLightConfiguration(::PointLightConfiguration const&);

    virtual void setReflectionsQuality(::ReflectionsQuality const) const;

    virtual void setReflectionConfiguration(::ReflectionConfiguration const&);

    virtual void setBloomMultiplier(float const) const;

    virtual void setPlayerUIGamma(float const) const;

    virtual void setBloomEnabledDefault(bool);

    virtual bool getBloomEnabledDefault() const;

    virtual void setDeferredUpscalingConfiguration(::UpscalingConfiguration const&);

    virtual void setDeferredUpscalingQuality(::UpscalingQuality const, ::TargetResolution) const;

    virtual void setDeferredUpscalingMode(::UpscalingMode const) const;

    virtual void setRenderDistanceConfiguration(::RenderDistanceConfiguration const&);

    virtual std::vector<int> const getDeferredRenderDistanceLevels() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftOptionValue(::IMinecraftGame*, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame*, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<int> const $getRenderDistanceLevels(int&) const;

    MCNAPI std::vector<int> const $getRayTracingRenderDistanceLevels(int&) const;

    MCNAPI bool $getDefaultTexelAA() const;

    MCNAPI int $getDefaultMSAA() const;

    MCNAPI std::vector<int> const $getSupportedMSAAValues(bool) const;

    MCNAPI void $setMSAAValue(int) const;

    MCNAPI void $setTexelAA(bool const) const;

    MCNAPI void $setShadowQuality(::ShadowQuality const) const;

    MCNAPI void $setShadowConfiguration(::ShadowConfiguration const&);

    MCNAPI void $setCloudQuality(::CloudQuality const) const;

    MCNAPI void $setCloudConfiguration(::CloudConfiguration const&);

    MCNAPI void $setLightingMixedResUpscale(float) const;

    MCNAPI void $setVolumetricFogQuality(::VolumetricFogQuality const) const;

    MCNAPI void $setVolumetricFogConfiguration(::VolumetricFogConfiguration const&);

    MCNAPI void $setPointLightQuality(::PointLightQuality const);

    MCNAPI void $setPointLightConfiguration(::PointLightConfiguration const&);

    MCNAPI void $setReflectionsQuality(::ReflectionsQuality const) const;

    MCNAPI void $setReflectionConfiguration(::ReflectionConfiguration const&);

    MCNAPI void $setBloomMultiplier(float const) const;

    MCNAPI void $setPlayerUIGamma(float const) const;

    MCNAPI void $setBloomEnabledDefault(bool);

    MCNAPI bool $getBloomEnabledDefault() const;

    MCNAPI void $setDeferredUpscalingConfiguration(::UpscalingConfiguration const&);

    MCNAPI void $setDeferredUpscalingQuality(::UpscalingQuality const, ::TargetResolution) const;

    MCNAPI void $setDeferredUpscalingMode(::UpscalingMode const) const;

    MCNAPI void $setRenderDistanceConfiguration(::RenderDistanceConfiguration const&);

    MCNAPI std::vector<int> const $getDeferredRenderDistanceLevels() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
