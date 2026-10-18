#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ChatMessageObject; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ChatMessageObject; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PartyChatMessagesFromRangeQuery : public ::OreUI::QueryBase<::OreUI::PartyChatMessagesFromRangeQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::ChatMessageObject, ::std::allocator<::OreUI::ChatMessageObject>>>
        mMessages;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatMessagesFromRangeQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyChatMessagesFromRangeQuery(::OreUI::GameDependencies const& game, uint start, uint end);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, uint start, uint end);
    // NOLINTEND
};
#else // @header-generator platform
class PartyChatMessagesFromRangeQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
