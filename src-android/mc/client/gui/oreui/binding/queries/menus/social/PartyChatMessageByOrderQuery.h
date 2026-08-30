#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/menus/ChatMessageObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class PartyChatMessageByOrderQuery : public ::OreUI::QueryBase<OreUI::PartyChatMessageByOrderQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1120> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatMessageByOrderQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatMessageByOrderQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PartyChatMessageByOrderQuery(::OreUI::GameDependencies const&, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, uint);
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
