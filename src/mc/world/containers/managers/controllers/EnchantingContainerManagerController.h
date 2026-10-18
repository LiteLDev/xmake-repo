#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class EnchantingContainerManagerModel;
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class EnchantingContainerManagerController : public ::ContainerManagerController {
public:
    // EnchantingContainerManagerController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum OptionStatus : uint {
        selectable              = 0,
        invalidMaterial         = 1,
        insufficientPlayerLevel = 2,
        absent                  = 3,
#else // @header-generator platform
    enum class OptionStatus : int {
        Selectable              = 0,
        InvalidMaterial         = 1,
        InsufficientPlayerLevel = 2,
        Absent                  = 3,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<EnchantingContainerManagerModel>> mEnchantingContainerManagerModel;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::EnchantingContainerManagerModel>> mEnchantingContainerManagerModel;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    EnchantingContainerManagerController();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    EnchantingContainerManagerController();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EnchantingContainerManagerController();
#else // @header-generator platform
    virtual ~EnchantingContainerManagerController() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerContainerCallbacks();
#else // @header-generator platform
    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
#else // @header-generator platform
    virtual void registerContainerCallbacks() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EnchantingContainerManagerController(std::weak_ptr<EnchantingContainerManagerModel>);

    MCNAPI std::string _getEnchantHint(int);

    MCNAPI void _setupCallbacks();

    MCNAPI void enchantResult(int);

    MCNAPI int getCostForOption(int);

    MCNAPI std::string getEnchantHint(int);

    MCNAPI std::string getHoverText(int);

    MCNAPI int getInputItemId();

    MCNAPI int getOutputItemId();

    MCNAPI int getPlayerLevels();

    MCNAPI std::string getRunesForOption(int);

    MCNAPI ::EnchantingContainerManagerController::OptionStatus getStatusForOption(int);

    MCNAPI bool shouldBookBeOpen();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit EnchantingContainerManagerController(
        ::std::weak_ptr<::EnchantingContainerManagerModel> containerManagerModel
    );

    MCNAPI ::std::string _getEnchantHint(int option);

    MCNAPI void _setupCallbacks();

    MCNAPI void enchantResult(int option);

    MCNAPI ::std::string getEnchantHint(int option);

    MCNAPI ::std::string getHoverText(int option);

    MCNAPI int getInputItemId();

    MCNAPI int getPlayerLevels();

    MCNAPI ::std::string getRunesForOption(int option);

    MCNAPI ::EnchantingContainerManagerController::OptionStatus getStatusForOption(int option);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::weak_ptr<EnchantingContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::EnchantingContainerManagerModel> containerManagerModel);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerContainerCallbacks();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI void $registerContainerCallbacks();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
