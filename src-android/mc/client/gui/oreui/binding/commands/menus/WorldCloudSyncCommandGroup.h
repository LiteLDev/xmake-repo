#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class WorldCloudSyncCommandGroup : public ::OreUI::CommandGroupBase<OreUI::WorldCloudSyncCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mTaskGroup;
    ::ll::UntypedStorage<8, 144> mSetLocalOnly;
    ::ll::UntypedStorage<8, 144> mSetCloudSaved;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCloudSyncCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCloudSyncCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldCloudSyncCommandGroup(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
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
