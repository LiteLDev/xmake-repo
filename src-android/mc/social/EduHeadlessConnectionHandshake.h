#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

struct EduHeadlessConnectionHandshake {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> serverId;
    ::ll::TypedStorage<8, 24, std::string> sessionToken;
    ::ll::TypedStorage<8, 24, std::string> joinerToHostNonce;
    ::ll::TypedStorage<8, 24, std::string> hostToJoinerNonce;
    ::ll::TypedStorage<8, 8, long>         expiry;
    ::ll::TypedStorage<1, 1, bool>         hasDataFromMess;
    // NOLINTEND

public:
    // prevent constructor by default
    EduHeadlessConnectionHandshake& operator=(EduHeadlessConnectionHandshake const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduHeadlessConnectionHandshake();

    MCNAPI EduHeadlessConnectionHandshake(::Social::EduHeadlessConnectionHandshake const&);

    MCNAPI EduHeadlessConnectionHandshake(std::string const&, ::Json::Value const&);

    MCNAPI bool isExpired() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Social::EduHeadlessConnectionHandshake const&);

    MCNAPI void* $ctor(std::string const&, ::Json::Value const&);
    // NOLINTEND
};

} // namespace Social
