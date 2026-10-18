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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mAssertion;
    ::ll::TypedStorage<8, 24, std::string> mIdpDomain;
    ::ll::TypedStorage<8, 24, std::string> mIdpProtocol;
    ::ll::TypedStorage<8, 24, std::string> mFingerprints;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkcc8e6a;
    ::ll::UntypedStorage<8, 32> mUnkeda113;
    ::ll::UntypedStorage<8, 32> mUnkb28683;
    ::ll::UntypedStorage<8, 32> mUnk84cde6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    IdentityAssertion& operator=(IdentityAssertion const&);
    IdentityAssertion(IdentityAssertion const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    IdentityAssertion();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string injectIntoSdp(std::string const&) const;

    MCNAPI ~IdentityAssertion();
#else // @header-generator platform
    MCNAPI ::std::string injectIntoSdp(::std::string const& sdp) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<NetherNet::IdentityAssertion>
    create(::NetherNet::IIdentityAssertionGenerator&, ::webrtc::SessionDescriptionInterface const&);
#else // @header-generator platform
    MCNAPI static ::std::optional<::NetherNet::IdentityAssertion> create(
        ::NetherNet::IIdentityAssertionGenerator&    generator,
        ::webrtc::SessionDescriptionInterface const& localDescription
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<NetherNet::IdentityAssertion> extractFromSdp(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::optional<::NetherNet::IdentityAssertion> extractFromSdp(::std::string const& sdp);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
