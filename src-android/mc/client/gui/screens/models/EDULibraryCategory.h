#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
