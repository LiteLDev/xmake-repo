#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/EducationServicesEnvironment.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace Identity { class IEduSsoStrategy; }
namespace Identity { struct ISettingStorageStrategy; }
// clang-format on

namespace Identity {

struct ActiveDirectoryIdentityParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                              mMinecraftEventing;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Identity::ISettingStorageStrategy>> mSettingStorageStrategy;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Identity::IEduSsoStrategy>>         mEduSsoStrategy;
    ::ll::TypedStorage<4, 8, std::optional<EducationServicesEnvironment>>        mEducationServicesEnvironment;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryIdentityParameters& operator=(ActiveDirectoryIdentityParameters const&);
    ActiveDirectoryIdentityParameters(ActiveDirectoryIdentityParameters const&);
    ActiveDirectoryIdentityParameters();
};

} // namespace Identity
