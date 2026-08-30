#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class InboxSurface;
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
// clang-format on

namespace OreUI {

class InboxCommandGroup : public ::OreUI::CommandGroupBase<OreUI::InboxCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mInboxSurface;
    ::ll::UntypedStorage<8, 144> mReportClick;
    ::ll::UntypedStorage<8, 144> mReportSubmit;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InboxCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InboxCommandGroup(::OreUI::GameDependencies const&);
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
