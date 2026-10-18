#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/application/device/DeviceIdEnvironment.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIdContext; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock { struct DeviceIdEnvironment; }
namespace Bedrock { struct ImplCtor; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock {

class DeviceIdManager
: public ::Bedrock::EnableNonOwnerReferences,
#if defined(LL_PLAT_A) // @header-generator platform
  public ::Bedrock::ImplBase<Bedrock::DeviceIdManager, Bedrock::ImplCtor(Bedrock::DeviceIdEnvironment&&)> {
#else // @header-generator platform
  public ::Bedrock::ImplBase<::Bedrock::DeviceIdManager, ::Bedrock::ImplCtor(::Bedrock::DeviceIdEnvironment&&)> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateDeviceId(bool const) = 0;
#else // @header-generator platform
    virtual void updateDeviceId(bool const isAnonymous) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getDeviceId() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getDeviceId() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getDeviceIdWarning() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getDeviceIdWarning() const = 0;
#endif // @header-generator platform

    virtual ::Bedrock::DeviceIdContext const& getDeviceIdContext() const = 0;

    virtual bool isDeviceIdValid() const = 0;
    // NOLINTEND
};

} // namespace Bedrock
