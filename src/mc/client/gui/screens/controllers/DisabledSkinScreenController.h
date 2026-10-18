#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DisabledSkinScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> twoButtonMode;
    ::ll::UntypedStorage<8, 48>    twoButtonCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    DisabledSkinScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisabledSkinScreenController();

    virtual std::string getTelemetryOverride() const;

    virtual void onEntered();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DisabledSkinScreenController(std::shared_ptr<MinecraftScreenModel>, bool, std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, bool, std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getTelemetryOverride() const;

    MCNAPI void $onEntered();
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

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DisabledSkinScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     twoButtonMode;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> twoButtonCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    DisabledSkinScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisabledSkinScreenController() /*override*/ = default;

    virtual ::std::string getTelemetryOverride() const /*override*/;

    virtual void onEntered() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DisabledSkinScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        bool                                      twoButtonWithCallback,
        ::std::function<void()>                   callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        bool                                      twoButtonWithCallback,
        ::std::function<void()>                   callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getTelemetryOverride() const;

    MCAPI void $onEntered();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
#else // @header-generator platform
class DisabledSkinScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
