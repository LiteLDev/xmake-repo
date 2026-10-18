#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class SimpleInProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mTitleString;
    ::ll::TypedStorage<8, 24, std::string const> mProgressString;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleInProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleInProgressScreenController() = default;

    virtual void onOpen();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

class SimpleInProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mTitleString;
    ::ll::TypedStorage<8, 32, ::std::string const> mProgressString;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleInProgressScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class SimpleInProgressScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
