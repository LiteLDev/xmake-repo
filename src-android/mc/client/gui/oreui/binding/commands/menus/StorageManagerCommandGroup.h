#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace StorageManager { class ContentItemProvider; }
// clang-format on

namespace OreUI {

class StorageManagerCommandGroup : public ::OreUI::CommandGroupBase<OreUI::StorageManagerCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mStorageContentItemProviderFunc;
    ::ll::UntypedStorage<8, 144> mSetSelected;
    ::ll::UntypedStorage<8, 144> mSetAllSelected;
    ::ll::UntypedStorage<8, 144> mDeleteSelectedItems;
    ::ll::UntypedStorage<8, 144> mConvertLegacyWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageManagerCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageManagerCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageManagerCommandGroup(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);
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

} // namespace OreUI
