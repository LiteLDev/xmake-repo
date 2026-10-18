#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class IIdentityAssertionGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IIdentityAssertionGenerator() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> createAssertion(std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::optional<::std::string> createAssertion(::std::string const& fingerprints) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view idpDomain() const = 0;
#else // @header-generator platform
    virtual ::std::string_view idpDomain() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view idpProtocol() const;
#else // @header-generator platform
    virtual ::std::string_view idpProtocol() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string_view $idpProtocol() const;
#else // @header-generator platform
    MCNAPI ::std::string_view $idpProtocol() const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
