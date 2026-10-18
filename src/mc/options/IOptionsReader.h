#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/UIProfile.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

class IOptionsReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOptionsReader() = default;

    virtual ::gsl::not_null<const Option*> get(::OptionID) const = 0;

    virtual bool getDevRenderBoundingBoxes() const = 0;

    virtual bool getDevRenderPaths() const = 0;

    virtual bool getDevRenderMobInfoState() const = 0;

    virtual bool getDevRenderSchedulerInfo() const = 0;

    virtual bool getDevRenderGoalState() const = 0;

    virtual bool getDevDeepDarkDebugRender() const = 0;

    virtual ushort getDevGameEventRetentionTicks() const = 0;

    virtual std::optional<DeviceMemoryTier> getScriptingMemoryTierOverride() const = 0;

    virtual std::optional<int> getDebugTextFilteringDelayMilliSeconds() const = 0;

    virtual bool getFilterProfanity() const = 0;

    virtual int getMaxViewDistanceChunks() const = 0;

    virtual ::GraphicsMode getGraphicsMode() const = 0;

    virtual ::UIProfile getUIProfile() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/UIProfile.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

class IOptionsReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOptionsReader() = default;

    virtual ::gsl::not_null<::Option const*> get(::OptionID optionId) const = 0;

    virtual bool getDevRenderBoundingBoxes() const = 0;

    virtual bool getDevRenderPaths() const = 0;

    virtual bool getDevRenderMobInfoState() const = 0;

    virtual bool getDevRenderSchedulerInfo() const = 0;

    virtual bool getDevRenderGoalState() const = 0;

    virtual bool getDevDeepDarkDebugRender() const = 0;

    virtual ushort getDevGameEventRetentionTicks() const = 0;

    virtual ::std::optional<::DeviceMemoryTier> getScriptingMemoryTierOverride() const = 0;

    virtual ::std::optional<int> getDebugTextFilteringDelayMilliSeconds() const = 0;

    virtual bool getFilterProfanity() const = 0;

    virtual int getMaxViewDistanceChunks() const = 0;

    virtual ::GraphicsMode getGraphicsMode() const = 0;

    virtual ::UIProfile getUIProfile() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IOptionsReader {};
#endif // @header-generator platform
#endif // @header-generator platform
