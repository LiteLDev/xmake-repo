#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/PDPSectionType.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class ScreenController;
class StoreCatalogItem;
struct PDPData;
// clang-format on

class PDPSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PDPSectionType> mType;
    ::ll::TypedStorage<8, 24, std::string>     mSectionTitle;
    // NOLINTEND

public:
    // prevent constructor by default
    PDPSection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PDPSection() = default;

    virtual std::unique_ptr<ScreenController> makeScreenController(std::shared_ptr<MainMenuScreenModel>);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/PDPSectionType.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class ScreenController;
// clang-format on

class PDPSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PDPSectionType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>   mSectionTitle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PDPSection() = default;

    virtual ::std::unique_ptr<::ScreenController> makeScreenController(::std::shared_ptr<::MainMenuScreenModel>);
    // NOLINTEND
};
#else // @header-generator platform
class PDPSection {};
#endif // @header-generator platform
#endif // @header-generator platform
