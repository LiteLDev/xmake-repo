#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class IdentityAssertion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mAssertion;
    ::ll::TypedStorage<8, 24, std::string> mIdpDomain;
    ::ll::TypedStorage<8, 24, std::string> mIdpProtocol;
    ::ll::TypedStorage<8, 24, std::string> mFingerprints;
    // NOLINTEND

public:
    // prevent constructor by default
    IdentityAssertion& operator=(IdentityAssertion const&);
    IdentityAssertion(IdentityAssertion const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string injectIntoSdp(std::string const&) const;

    MCNAPI ~IdentityAssertion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<NetherNet::IdentityAssertion>
    create(::NetherNet::IIdentityAssertionGenerator&, ::webrtc::SessionDescriptionInterface const&);

    MCNAPI static std::optional<NetherNet::IdentityAssertion> extractFromSdp(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
