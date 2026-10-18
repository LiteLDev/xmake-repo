#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"

// auto generated forward declare list
// clang-format off
class FeatureToggles;
class I18n;
class IMinecraftEventing;
class ThrottledFileWriteManager;
namespace flighting { class IFlightReader; }
// clang-format on

#endif // @header-generator platform
namespace AppPlatformImpl {

#if defined(LL_PLAT_A) // @header-generator platform
class IDependencies {};
#else // @header-generator platform
class IDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDependencies() = default;

    virtual ::ServiceReference<::IMinecraftEventing> getEventing() = 0;

    virtual ::ServiceReference<::FeatureToggles> getFeatureToggles() = 0;

    virtual ::Bedrock::NonOwnerPointer<::ThrottledFileWriteManager> getFileWriteManager() = 0;

    virtual ::ServiceReference<::flighting::IFlightReader> getTreatmentToggles() = 0;

    virtual ::I18n& getI18n() = 0;

    virtual bool& getUseSuspendHandler() = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace AppPlatformImpl
