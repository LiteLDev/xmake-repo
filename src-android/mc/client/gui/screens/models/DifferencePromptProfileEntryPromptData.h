#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
