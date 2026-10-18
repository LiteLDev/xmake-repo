#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PartyChatMemberQuery : public ::OreUI::QueryBase<::OreUI::PartyChatMemberQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mXuid;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mGamerTag;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mGamerIcon;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatMemberQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatMemberQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyChatMemberQuery(
        ::OreUI::GameDependencies const&   game,
        ::OreUI::ClientDependencies const& client,
        ::std::string const&               xuid
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client, ::std::string const& xuid);
    // NOLINTEND
};
#else // @header-generator platform
class PartyChatMemberQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
