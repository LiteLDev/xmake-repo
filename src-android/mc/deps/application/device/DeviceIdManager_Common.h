#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/DeviceIdContext.h"
#include "mc/deps/application/device/DeviceIdEnvironment.h"
#include "mc/deps/application/device/DeviceIdManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIDPlatformEnvironment; }
// clang-format on

namespace Bedrock {

class DeviceIdManager_Common : public ::Bedrock::DeviceIdManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                     mDeviceId;
    ::ll::TypedStorage<8, 24, std::string>                     mDeviceIdWarning;
    ::ll::TypedStorage<8, 96, ::Bedrock::DeviceIdContext>      mDeviceIdContext;
    ::ll::TypedStorage<8, 128, ::Bedrock::DeviceIdEnvironment> mEnvironment;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdManager_Common();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceIdManager_Common();

    virtual void initialize();

    virtual void updateDeviceId(bool const);

    virtual std::string const& getDeviceId() const;

    virtual std::string const& getDeviceIdWarning() const;

    virtual ::Bedrock::DeviceIdContext const& getDeviceIdContext() const;

    virtual bool isDeviceIdValid() const;

    virtual void _initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DeviceIdManager_Common(::Bedrock::DeviceIdEnvironment&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::DeviceIdEnvironment&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $updateDeviceId(bool const);

    MCNAPI std::string const& $getDeviceId() const;

    MCNAPI std::string const& $getDeviceIdWarning() const;

    MCNAPI ::Bedrock::DeviceIdContext const& $getDeviceIdContext() const;

    MCNAPI bool $isDeviceIdValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
