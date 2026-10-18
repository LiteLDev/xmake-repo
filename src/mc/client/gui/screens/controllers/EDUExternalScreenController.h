#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class EDUExternalScreenController : public ::MinecraftScreenController {
public:
    // EDUExternalScreenController inner types define
    using StorageLocationChangedCallback = ::std::function<void()>;

    using WorldCountCallback = ::std::function<uint64()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<uint64()>> mWorldCountCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>   mStorageLocationChangedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUExternalScreenController();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDUExternalScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::function<void()>                   storageLocationChangedCallback,
        ::std::function<uint64()>                 worldCountCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::function<void()>                   storageLocationChangedCallback,
        ::std::function<uint64()>                 worldCountCallback
    );
    // NOLINTEND
};
#else // @header-generator platform
class EDUExternalScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
