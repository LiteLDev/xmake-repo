#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayerMessaging {

struct NetworkID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkID();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Json::Value toJson() const;

    MCNAPI std::string toString() const;
    // NOLINTEND
};

} // namespace PlayerMessaging
