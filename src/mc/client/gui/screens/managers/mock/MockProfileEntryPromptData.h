#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/managers/IProfileEntryPromptData.h"

class MockProfileEntryPromptData : public ::IProfileEntryPromptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    ::ll::TypedStorage<1, 1, bool>           mCanOpen;
    ::ll::TypedStorage<1, 1, bool>           mIsOpen;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MockProfileEntryPromptData() /*override*/ = default;

    virtual bool allowedToOpenCheck() const /*override*/;

    virtual void callOnOpen() /*override*/;

    virtual void callOnClose() /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class MockProfileEntryPromptData {};
#endif // @header-generator platform
#endif // @header-generator platform
