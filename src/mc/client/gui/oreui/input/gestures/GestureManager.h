#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class GestureRecognizerBase; }
namespace OreUI { struct TouchEventData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class GestureRecognizerBase; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class GestureManager {
public:
    // GestureManager inner types define
    using GestureRecognizerPtrVector = std::vector<std::unique_ptr<OreUI::GestureRecognizerBase>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<OreUI::GestureRecognizerBase>>> mRecognizers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addRecognizer(std::unique_ptr<OreUI::GestureRecognizerBase>);

    MCNAPI ~GestureManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GestureManager {
public:
    // GestureManager inner types define
    using GestureRecognizerPtrVector = ::std::vector<::std::unique_ptr<::OreUI::GestureRecognizerBase>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::OreUI::GestureRecognizerBase>>> mRecognizers;
    // NOLINTEND
};
#else // @header-generator platform
class GestureManager {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
