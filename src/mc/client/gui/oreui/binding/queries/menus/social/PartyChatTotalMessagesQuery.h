#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class PartyChatTotalMessagesQuery : public ::OreUI::QueryBase<OreUI::PartyChatTotalMessagesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                               mTotalMessages;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTotalMessagesChangedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatTotalMessagesQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatTotalMessagesQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PartyChatTotalMessagesQuery(::OreUI::GameDependencies const&);
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
class PartyChatTotalMessagesQuery : public ::OreUI::QueryBase<::OreUI::PartyChatTotalMessagesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint>>        mTotalMessages;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTotalMessagesChangedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatTotalMessagesQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PartyChatTotalMessagesQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class PartyChatTotalMessagesQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
