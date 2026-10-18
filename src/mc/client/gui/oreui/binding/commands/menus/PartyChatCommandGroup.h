#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
namespace Parties { class PartySystem; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Parties { class PartySystem; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class PartyChatCommandGroup : public ::OreUI::CommandGroupBase<OreUI::PartyChatCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mPartySystem;
    ::ll::UntypedStorage<8, 144> mSendComposedMessage;
    ::ll::UntypedStorage<8, 144> mSetComposedMessage;
    ::ll::UntypedStorage<8, 144> mSetIsOpen;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PartyChatCommandGroup(::OreUI::GameDependencies const&);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PartyChatCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::PartyChatCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartySystem>>  mPartySystem;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mSendComposedMessage;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mSetComposedMessage;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, bool>>          mSetIsOpen;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PartyChatCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class PartyChatCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
