#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/ICrashFileApi.h"
#include "mc/platform/Result.h"

namespace Bedrock {

class CrashFileApiImpl : public ::Bedrock::ICrashFileApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrashFileApiImpl();

    virtual std::string_view getSaveRoot() const;

    virtual ::Bedrock::Result<void, std::error_code> createDirectory(char const*);

    virtual ::Bedrock::Result<void, std::error_code> writeFile(char const*, char const*, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string_view $getSaveRoot() const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $createDirectory(char const*);

    MCNAPI ::Bedrock::Result<void, std::error_code> $writeFile(char const*, char const*, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
