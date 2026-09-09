#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IAppPlatformImpl.h"
#include "mc/deps/application/IPlatformScreenshots.h"
#include "mc/deps/core/utility/UniqueService.h"

// auto generated forward declare list
// clang-format off
class BatteryMonitorInterface;
class FeatureToggles;
class NetworkDebugManager;
class SuspendHandler;
class ThermalMonitorInterface;
namespace AppPlatformImpl { class IDependencies; }
// clang-format on

namespace AppPlatformImpl {

class Impl : public ::IAppPlatformImpl, public ::IPlatformScreenshots {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<AppPlatformImpl::IDependencies>>> mDeps;
    ::ll::UntypedStorage<8, 16>                                                                 mFeatureToggles;
    ::ll::UntypedStorage<8, 16>                                                                 mNetworkDebugManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SuspendHandler>>                                   mSuspendHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BatteryMonitorInterface>> mBatteryMonitorInterface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ThermalMonitorInterface>> mThermalMonitorInterface;
    // NOLINTEND
};

} // namespace AppPlatformImpl
