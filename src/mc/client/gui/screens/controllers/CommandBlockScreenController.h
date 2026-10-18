#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/IntellisenseHandler.h"
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class MinecartCommandBlockManager;
class Player;
struct ActorUniqueID;
struct TextEditScreenEventData;
namespace mce { class Color; }
// clang-format on

class CommandBlockScreenController : public ::BlockScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/IntellisenseHandler.h"
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class MinecartCommandBlockManager;
class Player;
struct ActorUniqueID;
// clang-format on

class CommandBlockScreenController : public ::BlockScreenController {
#else // @header-generator platform
class CommandBlockScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // CommandBlockScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class CommandBlockColorContext : int {
        DropDown = 0,
        Dialog   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecartCommandBlockManager>> mCBManager;
    ::ll::TypedStorage<8, 96, ::IntellisenseHandler>                       mIntellisense;
    ::ll::TypedStorage<1, 1, bool>                                         mOutputWasTracked;
    ::ll::TypedStorage<1, 1, bool>                                         mBlockTypeDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                         mConditionDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                         mRedstoneDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                         mIsInputMaximized;
    ::ll::TypedStorage<1, 1, bool>                                         mModified;
    ::ll::TypedStorage<1, 1, bool>                                         mUpdateIntellisense;
    ::ll::TypedStorage<1, 1, bool>                                         mTextBoxEditing;
    ::ll::TypedStorage<1, 1, bool>                                         mShouldUseFilteredMessage;
    ::ll::UntypedStorage<8, 24>                                            mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandBlockScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandBlockScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::Player&, ::BlockPos const&, ::ActorUniqueID const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class CommandBlockColorContext : int {
        DropDown = 0,
        Dialog   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecartCommandBlockManager>> mCBManager;
    ::ll::TypedStorage<8, 104, ::IntellisenseHandler>                          mIntellisense;
    ::ll::TypedStorage<1, 1, bool>                                             mOutputWasTracked;
    ::ll::TypedStorage<1, 1, bool>                                             mBlockTypeDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                             mConditionDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                             mRedstoneDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                             mIsInputMaximized;
    ::ll::TypedStorage<1, 1, bool>                                             mModified;
    ::ll::TypedStorage<1, 1, bool>                                             mUpdateIntellisense;
    ::ll::TypedStorage<1, 1, bool>                                             mTextBoxEditing;
    ::ll::TypedStorage<1, 1, bool>                                             mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandBlockScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandBlockScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
#else // @header-generator platform
    enum class CommandBlockColorContext : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
