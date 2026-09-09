#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
namespace Realms { class IRealmsMembers; }
namespace Realms { struct RealmId; }
// clang-format on

namespace OreUI {

class RealmsMembersCommandGroup : public ::OreUI::CommandGroupBase<OreUI::RealmsMembersCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mRealmsMembers;
    ::ll::UntypedStorage<8, 248> mTaskGroup;
    ::ll::UntypedStorage<8, 144> mAddRealmMembers;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsMembersCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsMembersCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsMembersCommandGroup(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[33]> NAME();
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
