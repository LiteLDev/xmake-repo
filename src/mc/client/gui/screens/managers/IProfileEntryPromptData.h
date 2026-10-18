#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class IProfileEntryPromptData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IProfileEntryPromptData() = default;

    virtual bool allowedToOpenCheck() const = 0;

    virtual void callOnOpen() = 0;

    virtual void callOnClose() = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IProfileEntryPromptData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IProfileEntryPromptData() = default;

    virtual bool allowedToOpenCheck() const = 0;

    virtual void callOnOpen() = 0;

    virtual void callOnClose() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IProfileEntryPromptData {};
#endif // @header-generator platform
#endif // @header-generator platform
