#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IProfileEntryPromptData;
class MinecraftScreenController;
// clang-format on

class ProfileEntryPromptManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                   mIndex;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IProfileEntryPromptData>>> mData;
    ::ll::TypedStorage<1, 1, bool>                                                   mModalOpen;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(std::unique_ptr<IProfileEntryPromptData>);

    MCNAPI void closeCurrentModal(bool);

    MCNAPI ~ProfileEntryPromptManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
