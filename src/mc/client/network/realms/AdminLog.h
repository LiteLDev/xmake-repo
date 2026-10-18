#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
struct AdminLog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>                      mEpochTime;
    ::ll::TypedStorage<8, 24, std::string>              mEventName;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mEventDetails;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mEventKeys;
    // NOLINTEND

public:
    // prevent constructor by default
    AdminLog(AdminLog const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Realms::AdminLog& operator=(::Realms::AdminLog&&);

    MCNAPI ~AdminLog();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Realms::AdminLog fromJson(::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct AdminLog {};
#endif // @header-generator platform

} // namespace Realms
