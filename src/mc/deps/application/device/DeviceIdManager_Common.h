#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/application/device/DeviceIdContext.h"
#include "mc/deps/application/device/DeviceIdEnvironment.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/application/device/DeviceIdManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIDPlatformEnvironment; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DeviceIdEnvironment; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock {

class DeviceIdManager_Common : public ::Bedrock::DeviceIdManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                     mDeviceId;
    ::ll::TypedStorage<8, 24, std::string>                     mDeviceIdWarning;
    ::ll::TypedStorage<8, 96, ::Bedrock::DeviceIdContext>      mDeviceIdContext;
    ::ll::TypedStorage<8, 128, ::Bedrock::DeviceIdEnvironment> mEnvironment;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnk64126c;
    ::ll::UntypedStorage<8, 32>  mUnkae3728;
    ::ll::UntypedStorage<8, 120> mUnkf13734;
    ::ll::UntypedStorage<8, 120> mUnk66feb1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DeviceIdManager_Common& operator=(DeviceIdManager_Common const&);
    DeviceIdManager_Common(DeviceIdManager_Common const&);
#endif // @header-generator platform
    DeviceIdManager_Common();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DeviceIdManager_Common();
#else // @header-generator platform
    virtual void initialize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initialize();
#else // @header-generator platform
    virtual void updateDeviceId(bool const isAnonymous) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateDeviceId(bool const);
#else // @header-generator platform
    virtual ::std::string const& getDeviceId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getDeviceId() const;
#else // @header-generator platform
    virtual ::std::string const& getDeviceIdWarning() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getDeviceIdWarning() const;
#else // @header-generator platform
    virtual ::Bedrock::DeviceIdContext const& getDeviceIdContext() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::DeviceIdContext const& getDeviceIdContext() const;
#else // @header-generator platform
    virtual bool isDeviceIdValid() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDeviceIdValid() const;

    virtual void _initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const&) = 0;
#else // @header-generator platform
    virtual void _initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const& environment) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DeviceIdManager_Common(::Bedrock::DeviceIdEnvironment&&);
#else // @header-generator platform
    MCNAPI explicit DeviceIdManager_Common(::Bedrock::DeviceIdEnvironment&& environment);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::DeviceIdEnvironment&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::DeviceIdEnvironment&& environment);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateDeviceId(bool const);
#else // @header-generator platform
    MCNAPI void $updateDeviceId(bool const isAnonymous);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getDeviceId() const;
#else // @header-generator platform
    MCNAPI ::std::string const& $getDeviceId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getDeviceIdWarning() const;
#else // @header-generator platform
    MCNAPI ::std::string const& $getDeviceIdWarning() const;
#endif // @header-generator platform

    MCNAPI ::Bedrock::DeviceIdContext const& $getDeviceIdContext() const;

    MCNAPI bool $isDeviceIdValid() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForImplBase();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
