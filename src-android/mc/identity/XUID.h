#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Social {

struct XUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    XUID();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<Social::XUID, std::error_code> parse(std::string_view, bool);
    // NOLINTEND
};

} // namespace Social
