#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class InvocationStatus; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class StorageCommandGroup : public ::OreUI::CommandGroupBase<OreUI::StorageCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mOptions;
    ::ll::UntypedStorage<8, 144> mChangeStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageCommandGroup();
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
class StorageCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::StorageCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IOptionRegistry>>                   mOptions;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::FileStorageDirectory>> mChangeStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StorageCommandGroup(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};
#else // @header-generator platform
class StorageCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
