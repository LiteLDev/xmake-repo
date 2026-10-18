#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"
#include "mc/android/file/IStorageAreaConfig_android.h"
#include "mc/deps/core/file/PathBuffer.h"

class DefaultStorageAreaConfig_android : public ::IStorageAreaConfig_android {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>     mAndroidSdkVersion;
    ::ll::TypedStorage<8, 8, ::_jobject*>   mActivity;
    ::ll::TypedStorage<8, 8, ::_jmethodID*> mMethodGetInternalStoragePath;
    ::ll::TypedStorage<8, 8, ::_jmethodID*> mMethodGetExternalStoragePath;
    ::ll::TypedStorage<8, 8, ::_jmethodID*> mMethodGetLegacyExternalStoragePath;
    ::ll::TypedStorage<8, 8, ::_jmethodID*> mMethodHasWriteExternalStoragePermission;
    ::ll::TypedStorage<8, 8, ::_jmethodID*> mMethodIsRunningInBrowserStack;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultStorageAreaConfig_android();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultStorageAreaConfig_android();

    virtual ::Core::PathBuffer<std::string> getInternalStoragePath() const;

    virtual ::Core::PathBuffer<std::string> getExternalStoragePath() const;

    virtual ::Core::PathBuffer<std::string> getLegacyExternalStoragePath() const;

    virtual int getAndroidSdkVersion() const;

    virtual bool hasWriteExternalStoragePermission() const;

    virtual bool isRunningInBrowserStack() const;

    virtual bool isChromebook() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DefaultStorageAreaConfig_android(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::PathBuffer<std::string> $getInternalStoragePath() const;

    MCNAPI ::Core::PathBuffer<std::string> $getExternalStoragePath() const;

    MCNAPI ::Core::PathBuffer<std::string> $getLegacyExternalStoragePath() const;

    MCNAPI int $getAndroidSdkVersion() const;

    MCNAPI bool $hasWriteExternalStoragePermission() const;

    MCNAPI bool $isRunningInBrowserStack() const;

    MCNAPI bool $isChromebook() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
