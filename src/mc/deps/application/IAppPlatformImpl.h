#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/options/UIProfile.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class BatteryMonitorInterface;
class IPlatformScreenshots;
#if defined(LL_PLAT_A) // @header-generator platform
class SuspendHandler;
#else // @header-generator platform
#endif // @header-generator platform
class ThermalMonitorInterface;
struct IntegrityTokenResult;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class DiskAccessTracker; }
namespace Core { class LoadTimeProfiler; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SuspendHandler;
#endif // @header-generator platform
// clang-format on

class IAppPlatformImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAppPlatformImpl() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<SuspendHandler> getSuspendHandler(bool, ::AppPlatform&) = 0;

    virtual ::BatteryMonitorInterface const& getBatteryMonitorInterface() const = 0;

    virtual ::ThermalMonitorInterface const& getThermalMonitorInterface() const = 0;

#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual ::Bedrock::NonOwnerPointer<::SuspendHandler>
    getSuspendHandler(bool updateCachedValue, ::AppPlatform& appPlatform) = 0;

    virtual ::BatteryMonitorInterface const& getBatteryMonitorInterface() const = 0;

    virtual ::ThermalMonitorInterface const& getThermalMonitorInterface() const = 0;

#endif
#endif // @header-generator platform
    virtual ::IPlatformScreenshots& getPlatformScreenshots() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setServiceLocators(::AppPlatform&) = 0;
#else // @header-generator platform
    virtual void setServiceLocators(::AppPlatform& platform) = 0;
#endif // @header-generator platform

    virtual void resetServiceLocators() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDiskAccessEventing(::Core::DiskAccessTracker&) = 0;
#else // @header-generator platform
    virtual void setDiskAccessEventing(::Core::DiskAccessTracker& diskAccessTracker) = 0;
#endif // @header-generator platform

    virtual bool isRealmsEnabled() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription initializeLoadProfiler(::Core::LoadTimeProfiler&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription initializeLoadProfiler(::Core::LoadTimeProfiler& profiler) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<IntegrityTokenResult> requestIntegrityToken(std::string const&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::IntegrityTokenResult> requestIntegrityToken(::std::string const&) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getFullLanguageCode() = 0;
#else // @header-generator platform
    virtual ::std::string getFullLanguageCode() = 0;
#endif // @header-generator platform

    virtual bool mouseInputHandledByImGui() = 0;

    virtual bool keyboardInputHandledByImGui() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateImGuiMousePosition(float, float) = 0;
#else // @header-generator platform
    virtual void updateImGuiMousePosition(float x, float y) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateImGuiMouseButton(uchar, bool) = 0;
#else // @header-generator platform
    virtual void updateImGuiMouseButton(uchar button, bool isDown) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateImGuiMouseScrollBar(float) = 0;
#else // @header-generator platform
    virtual void updateImGuiMouseScrollBar(float value) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void imGuiAddInputChar(ushort) = 0;
#else // @header-generator platform
    virtual void imGuiAddInputChar(ushort c) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool updateImGuiKeyboard(uchar, bool) = 0;
#else // @header-generator platform
    virtual bool updateImGuiKeyboard(uchar param, bool isDown) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::UIProfile getDefaultUIProfile(::UIScalingRules) const = 0;
#else // @header-generator platform
    virtual ::UIProfile getDefaultUIProfile(::UIScalingRules uiScalingRules) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
