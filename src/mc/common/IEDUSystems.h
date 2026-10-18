#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class MessPublicKeyManager;
#else // @header-generator platform
#endif // @header-generator platform
namespace Identity { class IEduAuth; }
namespace Social { class IEduMultiplayerHeadless; }
// clang-format on

class IEDUSystems : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<MessPublicKeyManager>> mMessPublicKeyManager;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk28a258;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    IEDUSystems& operator=(IEDUSystems const&);
    IEDUSystems(IEDUSystems const&);
    IEDUSystems();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IEDUSystems();
#else // @header-generator platform
    virtual ~IEDUSystems() /*override*/ = default;
#endif // @header-generator platform

    virtual ::Identity::IEduAuth& getEduAuth() const = 0;

    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
