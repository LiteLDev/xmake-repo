#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ActiveBundleData.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenController;
class ItemStack;
class ItemStackBase;
struct BundleTooltipLayoutData;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ActiveBundleData.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenController;
class ItemStack;
class ItemStackBase;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
class BundleHelper {
public:
    // BundleHelper inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class BundleItemStickScrollDirection : int {
        Left  = 0,
        Right = 1,
        Up    = 2,
        Down  = 3,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class BundleItemStickScrollDirection : int {
        Left  = 0,
        Right = 1,
        Up    = 2,
        Down  = 3,
    };
#else // @header-generator platform
    enum class BundleItemStickScrollDirection : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class BundleItemScrollWheelDirection : int {
        Up   = 0,
        Down = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::ActiveBundleData> mActiveBundleData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemStack const&
    getItemStackFromBundle(::ContainerScreenController const&, ::ItemStackBase const&, int) const;

    MCNAPI void handleBundleUnselected(::ContainerScreenController&);

    MCNAPI bool isSlotInteractiveBundle(::ContainerScreenController const&, std::string const&, int) const;

    MCNAPI ::ui::ViewRequest
    onBundleItemRightStick(::ContainerScreenController&, ::BundleHelper::BundleItemStickScrollDirection);

    MCNAPI ::ui::ViewRequest
    onBundleItemScrollWheel(::ContainerScreenController&, ::BundleHelper::BundleItemScrollWheelDirection);

    MCNAPI ~BundleHelper();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _shouldShowBundleOpen(std::string const&, int, bool, ::ActiveBundleData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class BundleItemScrollWheelDirection : int {
        Up   = 0,
        Down = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::ActiveBundleData> mActiveBundleData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ui::ViewRequest handleBundlePlaceAll(
        ::ContainerScreenController& controller,
        ::std::string const&         collectionName,
        int                          collectionIndex
    );

    MCAPI ::ui::ViewRequest handleBundlePlaceOne(
        ::ContainerScreenController& controller,
        ::std::string const&         collectionName,
        int                          collectionIndex
    );

    MCAPI void handleBundleUnselected(::ContainerScreenController& controller);

    MCAPI bool isSlotInteractiveBundle(
        ::ContainerScreenController const& controller,
        ::std::string const&               collectionName,
        int                                collectionIndex
    ) const;

    MCAPI ::ui::ViewRequest onBundleItemRightStick(
        ::ContainerScreenController&                   controller,
        ::BundleHelper::BundleItemStickScrollDirection direction
    );

    MCAPI ::ui::ViewRequest onBundleItemScrollWheel(
        ::ContainerScreenController&                   controller,
        ::BundleHelper::BundleItemScrollWheelDirection direction
    );

    MCAPI bool shouldHandleBundleIdlePlaceAll(
        ::ContainerScreenController& controller,
        ::std::string const&         collectionName,
        int                          collectionIndex
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _shouldShowBundleOpen(
        ::std::string const&      collectionName,
        int                       collectionIndex,
        bool                      usingTouchScheme,
        ::ActiveBundleData const& activeBundleData
    );

    MCAPI static ::ItemStack const& getItemStackFromBundle(
        ::ContainerScreenController const& controller,
        ::ItemStackBase const&             bundleItem,
        int                                bundleItemIdx
    );

    MCAPI static void registerBindings(::ContainerScreenController& controller);

    MCAPI static void registerEventHandlers(::ContainerScreenController& controller);

    MCAPI static void registerStateMachine(::ContainerScreenController& controller);
    // NOLINTEND
#else // @header-generator platform
    enum class BundleItemScrollWheelDirection : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
