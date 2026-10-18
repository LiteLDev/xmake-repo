#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/BundleTooltipLayoutData.h"
#include "mc/world/containers/SlotData.h"

// auto generated forward declare list
// clang-format off
class ContainerManagerController;
class ItemStackBase;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/BundleTooltipLayoutData.h"
#include "mc/world/containers/SlotData.h"

// auto generated forward declare list
// clang-format off
class ContainerManagerController;
class ItemStackBase;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
struct ActiveBundleData {
public:
    // ActiveBundleData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class BundleState : int {
        Inactive = 0,
        Active   = 1,
        Hovered  = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class BundleState : int {
        Inactive = 0,
        Active   = 1,
        Hovered  = 2,
    };
#else // @header-generator platform
    enum class BundleState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mMinimizedTooltip;
    ::ll::TypedStorage<4, 8, std::optional<int>>                      mSelectedCollectionIndex;
    ::ll::TypedStorage<8, 32, ::SlotData>                             mSlotData;
    ::ll::TypedStorage<4, 4, ::ActiveBundleData::BundleState>         mBundleState;
    ::ll::TypedStorage<8, 80, std::optional<BundleTooltipLayoutData>> mCachedBundleTooltipLayoutData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActiveBundleData();

    MCNAPI ::BundleTooltipLayoutData const&
    getBundleTooltipLayoutData(::ItemStackBase const&, ::ContainerManagerController&) const;

    MCNAPI std::pair<std::string, int> getCollectionNameAndIndex() const;

    MCNAPI int getContainerIndexFromCollectionIndex(::BundleTooltipLayoutData const&, int) const;

    MCNAPI int getSelectedItemContainerIndex(::BundleTooltipLayoutData const&) const;

    MCNAPI void invalidateBundleTooltipLayoutData();

    MCNAPI bool isActive() const;

    MCNAPI bool isHovered() const;

    MCNAPI void resetData();

    MCNAPI void setActive(std::string const&, int);

    MCNAPI void setHovered(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BundleTooltipLayoutData
    _calculateBundleTooltipLayoutData(::ItemStackBase const&, ::ContainerManagerController&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class TooltipDirection : int {
        SouthEast = 0,
        NorthEast = 1,
        NorthWest = 2,
        SouthWest = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                        mMinimizedTooltip;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                        mSelectedCollectionIndex;
    ::ll::TypedStorage<8, 40, ::SlotData>                                 mSlotData;
    ::ll::TypedStorage<4, 4, ::ActiveBundleData::BundleState>             mBundleState;
    ::ll::TypedStorage<8, 80, ::std::optional<::BundleTooltipLayoutData>> mCachedBundleTooltipLayoutData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BundleTooltipLayoutData const& getBundleTooltipLayoutData(
        ::ItemStackBase const&        bundleItem,
        ::ContainerManagerController& containerManagerController
    ) const;

    MCAPI ::std::pair<::std::string, int> getCollectionNameAndIndex() const;

    MCAPI int
    getContainerIndexFromCollectionIndex(::BundleTooltipLayoutData const& tooltipLayoutData, int collectionIndex) const;
    // NOLINTEND
#else // @header-generator platform
    enum class TooltipDirection : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
