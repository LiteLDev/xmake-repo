#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock {

class ICrashFileApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICrashFileApi();

    virtual std::string_view getSaveRoot() const = 0;

    virtual ::Bedrock::Result<void, std::error_code> createDirectory(char const*) = 0;

    virtual ::Bedrock::Result<void, std::error_code> writeFile(char const*, char const*, ulong) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
