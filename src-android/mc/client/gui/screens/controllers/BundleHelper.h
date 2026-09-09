#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class BundleHelper {
public:
    // BundleHelper inner types define
    enum class BundleItemStickScrollDirection : int {
        Left  = 0,
        Right = 1,
        Up    = 2,
        Down  = 3,
    };

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
};
