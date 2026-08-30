#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/resource_pack_copy_utils/IEntitlementCheck.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IEntitlementManager;
// clang-format on

class EntitlementCheck : public ::ResourcePackCopyUtils::IEntitlementCheck {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mEntitlementManager;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitlementCheck();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EntitlementCheck();

    virtual bool isValid(::ContentIdentity const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid(::ContentIdentity const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
