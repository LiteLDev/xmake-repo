#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/resources/IContentAccessibilityProvider.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

#endif // @header-generator platform
namespace ServerContentKeyProvider {

#if defined(LL_PLAT_C) // @header-generator platform
class ServerContentKeyProviderImpl {};
#else // @header-generator platform
class ServerContentKeyProviderImpl : public ::IContentAccessibilityProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string getContentKey(::ContentIdentity const& contentIdentity) const /*override*/;

    virtual bool canAccess(::ContentIdentity const&) const /*override*/;

    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&) /*override*/;

    virtual void clearTempContentKeys() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getContentKey(::ContentIdentity const& contentIdentity) const;

    MCNAPI bool $canAccess(::ContentIdentity const&) const;

    MCNAPI void $setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&);

    MCNAPI void $clearTempContentKeys();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ServerContentKeyProvider
#endif // @header-generator platform
