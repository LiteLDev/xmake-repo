#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/ISessionIdArgumentValidator.h"
#include "mc/platform/brstd/flat_set.h"

class SessionIdArgumentValidator : public ::ISessionIdArgumentValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSessionIdKey;
    ::ll::UntypedStorage<8, 24>            mReportedSessionIds;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionIdArgumentValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SessionIdArgumentValidator();

    virtual std::optional<std::string> extractNewSessionId(std::unordered_map<std::string, std::string> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<ISessionIdArgumentValidator> createSessionIdArgumentValidator(std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<std::string> $extractNewSessionId(std::unordered_map<std::string, std::string> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
