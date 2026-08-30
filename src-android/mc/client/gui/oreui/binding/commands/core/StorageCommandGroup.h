#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
