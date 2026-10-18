#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayerMessaging {

struct NetworkID {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk16c1ef;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NetworkID& operator=(NetworkID const&);
    NetworkID(NetworkID const&);
#endif // @header-generator platform
    NetworkID();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Json::Value toJson() const;
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI std::string toString() const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PlayerMessaging
