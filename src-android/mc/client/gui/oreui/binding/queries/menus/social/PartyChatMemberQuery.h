#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class PartyChatMemberQuery : public ::OreUI::QueryBase<OreUI::PartyChatMemberQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>            mXuid;
    ::ll::UntypedStorage<8, 168>            mGamerTag;
    ::ll::UntypedStorage<8, 168>            mGamerIcon;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatMemberQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatMemberQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    PartyChatMemberQuery(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&, std::string const&);
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
