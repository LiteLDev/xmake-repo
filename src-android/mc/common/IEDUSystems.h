#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MessPublicKeyManager;
namespace Identity { class IEduAuth; }
namespace Social { class IEduMultiplayerHeadless; }
// clang-format on

class IEDUSystems : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<MessPublicKeyManager>> mMessPublicKeyManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEDUSystems();

    virtual ::Identity::IEduAuth& getEduAuth() const = 0;

    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
