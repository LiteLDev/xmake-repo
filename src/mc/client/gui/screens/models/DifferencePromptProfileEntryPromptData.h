#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/managers/IProfileEntryPromptData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenController;
namespace persona { class Profile; }
// clang-format on

class DifferencePromptProfileEntryPromptData : public ::IProfileEntryPromptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                  mScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<persona::Profile>> mPersonaProfile;
    // NOLINTEND

public:
    // prevent constructor by default
    DifferencePromptProfileEntryPromptData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DifferencePromptProfileEntryPromptData();

    virtual bool allowedToOpenCheck() const;

    virtual void callOnOpen();

    virtual void callOnClose();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $allowedToOpenCheck() const;

    MCNAPI void $callOnOpen();

    MCNAPI void $callOnClose();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/managers/IProfileEntryPromptData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenController;
namespace persona { class Profile; }
// clang-format on

class DifferencePromptProfileEntryPromptData : public ::IProfileEntryPromptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController>> mScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::persona::Profile>>                      mPersonaProfile;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DifferencePromptProfileEntryPromptData() /*override*/ = default;

    virtual bool allowedToOpenCheck() const /*override*/;

    virtual void callOnOpen() /*override*/;

    virtual void callOnClose() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $allowedToOpenCheck() const;

    MCAPI void $callOnOpen();

    MCAPI void $callOnClose();
    // NOLINTEND
};
#else // @header-generator platform
class DifferencePromptProfileEntryPromptData {};
#endif // @header-generator platform
#endif // @header-generator platform
