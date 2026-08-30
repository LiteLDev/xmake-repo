#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/managers/IProfileEntryPromptData.h"

class MockProfileEntryPromptData : public ::IProfileEntryPromptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<1, 1, bool>         mCanOpen;
    ::ll::TypedStorage<1, 1, bool>         mIsOpen;
    // NOLINTEND

public:
    // prevent constructor by default
    MockProfileEntryPromptData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MockProfileEntryPromptData() = default;

    virtual bool allowedToOpenCheck() const;

    virtual void callOnOpen();

    virtual void callOnClose();
    // NOLINTEND
};
