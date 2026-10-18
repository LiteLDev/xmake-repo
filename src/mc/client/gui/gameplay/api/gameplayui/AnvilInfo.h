#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct AnvilInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> costText;
    ::ll::TypedStorage<8, 24, std::string> costSentiment;
    ::ll::TypedStorage<1, 1, bool>         shouldCrossOutIconBeVisible;
    ::ll::TypedStorage<8, 24, std::string> previewItemName;
    ::ll::TypedStorage<1, 1, bool>         hasInputItem;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilInfo& operator=(AnvilInfo const&);
    AnvilInfo(AnvilInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AnvilInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AnvilInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> costText;
    ::ll::TypedStorage<8, 32, ::std::string> costSentiment;
    ::ll::TypedStorage<1, 1, bool>           shouldCrossOutIconBeVisible;
    ::ll::TypedStorage<8, 32, ::std::string> previewItemName;
    ::ll::TypedStorage<1, 1, bool>           hasInputItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AnvilInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct AnvilInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
