#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace mce { class Color; }
// clang-format on

struct EDULibraryCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>          categoryLabel;
    ::ll::TypedStorage<8, 24, std::string>          icon;
    ::ll::TypedStorage<8, 24, std::string>          screenshot;
    ::ll::TypedStorage<4, 12, std::array<float, 3>> defaultColor;
    ::ll::TypedStorage<4, 12, std::array<float, 3>> interactColor;
    ::ll::UntypedStorage<8, 48>                     interactCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EDULibraryCategory& operator=(EDULibraryCategory const&);
    EDULibraryCategory(EDULibraryCategory const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::Color getDefaultColor() const;

    MCNAPI ::mce::Color getInteractColor() const;

    MCNAPI ~EDULibraryCategory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

struct EDULibraryCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                   categoryLabel;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   icon;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   screenshot;
    ::ll::TypedStorage<4, 12, ::std::array<float, 3>>                                          defaultColor;
    ::ll::TypedStorage<4, 12, ::std::array<float, 3>>                                          interactColor;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::shared_ptr<::MainMenuScreenModel>)>> interactCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EDULibraryCategory& operator=(EDULibraryCategory const&);
    EDULibraryCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDULibraryCategory(::EDULibraryCategory const&);

    MCAPI ~EDULibraryCategory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EDULibraryCategory const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct EDULibraryCategory {};
#endif // @header-generator platform
#endif // @header-generator platform
