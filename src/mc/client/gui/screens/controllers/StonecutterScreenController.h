#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/RepeatCraftButtonData.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class Player;
class StonecutterContainerManagerController;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class StonecutterScreenController : public ::ContainerScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/RepeatCraftButtonData.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class Player;
class StonecutterContainerManagerController;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class StonecutterScreenController : public ::ContainerScreenController {
#else // @header-generator platform
class StonecutterScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // StonecutterScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class LeftTabIndex : int {
        Inventory = 0,
        Stones    = 1,
        Count     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::StonecutterScreenController::LeftTabIndex> mSelectedTabIndex;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StonecutterContainerManagerController>> mStonecutterContainerManagerController;
    ::ll::TypedStorage<8, 136, ::RepeatCraftButtonData> mRepeatCraftButton;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    StonecutterScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StonecutterScreenController();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isStillValid() const;

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StonecutterScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const
    );

    MCNAPI void _changeLeftTab(int);
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
    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI bool $_isStillValid() const;

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class LeftTabIndex : int {
        Inventory = 0,
        Stones    = 1,
        Count     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StonecutterScreenController::LeftTabIndex> mSelectedTabIndex;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StonecutterContainerManagerController>>
                                                        mStonecutterContainerManagerController;
    ::ll::TypedStorage<8, 136, ::RepeatCraftButtonData> mRepeatCraftButton;
    // NOLINTEND

public:
    // prevent constructor by default
    StonecutterScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StonecutterScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StonecutterScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&,
        ::BlockPos const& pos,
        ::ActorUniqueID
    );

    MCAPI void _changeLeftTab(int dir);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, ::Player&, ::BlockPos const& pos, ::ActorUniqueID);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI bool $_isStillValid() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();
    // NOLINTEND
#else // @header-generator platform
    enum class LeftTabIndex : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
