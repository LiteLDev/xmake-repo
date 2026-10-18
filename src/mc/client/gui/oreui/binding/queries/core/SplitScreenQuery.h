#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct SplitScreenInfo;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct SplitScreenInfo;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class SplitScreenQuery : public ::OreUI::QueryBase<OreUI::SplitScreenQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                               mIsPrimaryUser;
    ::ll::UntypedStorage<8, 152>                               mSplitScreenPosition;
    ::ll::UntypedStorage<8, 152>                               mActivePlayers;
    ::ll::UntypedStorage<8, 152>                               mSplitScreenDirection;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mChangeToken;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitScreenQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SplitScreenQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SplitScreenQuery(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);

    MCNAPI void _updateData(::SplitScreenInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);
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
class SplitScreenQuery : public ::OreUI::QueryBase<::OreUI::SplitScreenQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                   mIsPrimaryUser;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mSplitScreenPosition;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mActivePlayers;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::SplitScreenDirection>> mSplitScreenDirection;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mChangeToken;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitScreenQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SplitScreenQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);

    MCAPI void _updateData(::SplitScreenInfo const& info);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND
};
#else // @header-generator platform
class SplitScreenQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
