#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class HardwareMemoryTierUtil;
// clang-format on

class IAppPlatform : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAppPlatform() = default;

    virtual bool restartRequested() = 0;

    virtual ::Core::PathBuffer<std::string> getLoggingPath() const = 0;

    virtual bool isLowMemoryDevice() const = 0;

    virtual bool isLowPhysicalMemoryDevice() const = 0;

    virtual bool hasPlatformSpecificInvites() const = 0;

    virtual bool isRealmsEnabled() const = 0;

    virtual void initAppPlatformNetworkSettings() = 0;

    virtual int const numberOfThrottledTreatmentPacksToImportPerMinute() const = 0;

    virtual bool const areTreatmentPacksThrottled() const = 0;

    virtual void goToExternalConsumablesStoreListing() const = 0;

    virtual void showPlatformEmptyStoreDialog(std::function<void(bool)>&&) = 0;

    virtual bool isNetworkEnabled(bool) const = 0;

    virtual bool isNetworkAvailable() const = 0;

    virtual bool isLANAvailable() const = 0;

    virtual bool isLANAllowed() const = 0;

    virtual bool isInternetAvailable() const = 0;

    virtual bool multiplayerRequiresPremiumAccess() const = 0;

    virtual bool multiplayerRequiresUGCEnabled() const = 0;

    virtual int getDefaultNetworkMaxPlayers() const = 0;

    virtual ::BuildPlatform getBuildPlatform() const = 0;

    virtual std::string getPlatformString() const = 0;

    virtual ulong getLowPhysicalMemoryThreshold() const = 0;

    virtual ulong getTotalPhysicalMemory() const = 0;

    virtual ::HardwareMemoryTierUtil const& getHardwareMemoryTierUtil() const = 0;

    virtual std::string getDeviceId() const = 0;
    // NOLINTEND
};
