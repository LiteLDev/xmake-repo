#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

class IStorageAreaConfig_android {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStorageAreaConfig_android();

    virtual ::Core::PathBuffer<std::string> getInternalStoragePath() const = 0;

    virtual ::Core::PathBuffer<std::string> getExternalStoragePath() const = 0;

    virtual ::Core::PathBuffer<std::string> getLegacyExternalStoragePath() const = 0;

    virtual int getAndroidSdkVersion() const = 0;

    virtual bool hasWriteExternalStoragePermission() const = 0;

    virtual bool isRunningInBrowserStack() const = 0;

    virtual bool isChromebook() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
