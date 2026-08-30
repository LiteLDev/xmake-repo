#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class EDUExternalScreenController : public ::MinecraftScreenController {
public:
    // EDUExternalScreenController inner types define
    using WorldCountCallback = std::function<ulong()>;

    using StorageLocationChangedCallback = std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mWorldCountCallback;
    ::ll::UntypedStorage<8, 48> mStorageLocationChangedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUExternalScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUExternalScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EDUExternalScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        std::function<void()>,
        std::function<ulong()>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, std::function<void()>, std::function<ulong()>);
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
