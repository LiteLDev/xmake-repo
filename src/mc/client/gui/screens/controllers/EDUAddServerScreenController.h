#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class EDUAddServerScreenController : public ::MinecraftScreenController {
public:
    // EDUAddServerScreenController inner types define
    using OnAddServer = std::function<void(const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>            mOnAddServer;
    ::ll::TypedStorage<8, 24, std::string> mServerId;
    ::ll::TypedStorage<1, 1, bool>         mShowServerIdTooltip;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUAddServerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUAddServerScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EDUAddServerScreenController(std::shared_ptr<MinecraftScreenModel>, std::function<void(const std::string&)>);

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, std::function<void(const std::string&)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

class EDUAddServerScreenController : public ::MinecraftScreenController {
public:
    // EDUAddServerScreenController inner types define
    using OnAddServer = ::std::function<void(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mOnAddServer;
    ::ll::TypedStorage<8, 32, ::std::string>                               mServerId;
    ::ll::TypedStorage<1, 1, bool>                                         mShowServerIdTooltip;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUAddServerScreenController() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class EDUAddServerScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
