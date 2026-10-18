#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PromptActionVariant.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PromptActionVariant.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct PromptAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mId;
    ::ll::TypedStorage<8, 24, std::string>                 mLabel;
    ::ll::TypedStorage<4, 4, ::OreUI::PromptActionVariant> mVariant;
    // NOLINTEND

public:
    // prevent constructor by default
    PromptAction& operator=(PromptAction const&);
    PromptAction();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PromptAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mId;
    ::ll::TypedStorage<8, 32, ::std::string>               mLabel;
    ::ll::TypedStorage<4, 4, ::OreUI::PromptActionVariant> mVariant;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PromptAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PromptAction {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
