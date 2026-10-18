#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/options/EducationServicesEnvironment.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace Identity { class IEduSsoStrategy; }
namespace Identity { struct ISettingStorageStrategy; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Identity {

struct ActiveDirectoryIdentityParameters {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                              mMinecraftEventing;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Identity::ISettingStorageStrategy>> mSettingStorageStrategy;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Identity::IEduSsoStrategy>>         mEduSsoStrategy;
    ::ll::TypedStorage<4, 8, std::optional<EducationServicesEnvironment>>        mEducationServicesEnvironment;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkc89eb0;
    ::ll::UntypedStorage<8, 8> mUnk73f93b;
    ::ll::UntypedStorage<8, 8> mUnkbaa194;
    ::ll::UntypedStorage<4, 8> mUnk182bab;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryIdentityParameters& operator=(ActiveDirectoryIdentityParameters const&);
    ActiveDirectoryIdentityParameters(ActiveDirectoryIdentityParameters const&);
    ActiveDirectoryIdentityParameters();
};

} // namespace Identity
