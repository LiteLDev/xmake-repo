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
    enum OptionStatus : uint {
        selectable              = 0,
        invalidMaterial         = 1,
        insufficientPlayerLevel = 2,
        absent                  = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<EnchantingContainerManagerModel>> mEnchantingContainerManagerModel;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantingContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingContainerManagerController();

    virtual void registerContainerCallbacks();

    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<EnchantingContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerContainerCallbacks();

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
