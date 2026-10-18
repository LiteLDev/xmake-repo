#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/Identity.h"
#include "mc/identity/IdentityType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class GenericPlatformIdentity : public ::Social::Identity {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericPlatformIdentity();

    virtual ::Social::IdentityType getType() const;

    virtual bool isGuest() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Social::GenericPlatformIdentity> create();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Social::IdentityType $getType() const;

    MCNAPI bool $isGuest() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class GenericPlatformIdentity {};
#endif // @header-generator platform

} // namespace Social
