#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ChatMessageObject; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class PartyChatMessagesFromRangeQuery : public ::OreUI::QueryBase<OreUI::PartyChatMessagesFromRangeQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mMessages;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatMessagesFromRangeQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatMessagesFromRangeQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PartyChatMessagesFromRangeQuery(::OreUI::GameDependencies const&, uint, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, uint, uint);
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
