#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/input/ButtonIndiciesEnum.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenController;
class MinecraftScreenModel;
class PersonaAppearance;
class PersonaScreenModel;
class PersonaScreenModelCommon;
class UIPropertyBag;
// clang-format on

class EmoteWheelCommonModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<PersonaScreenModelCommon>> mPersonaModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MinecraftScreenModel>>     mScreenModel;
    ::ll::UntypedStorage<8, 48>                                          mOnButtonClick;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                            mDirtyFlag;
    ::ll::TypedStorage<4, 4, int>                                        mHoverSlotIndex;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>                  mHoveredEmote;
    ::ll::TypedStorage<4, 4, int>                                        mHoverIndex;
    ::ll::TypedStorage<4, 4, int>                                        mPreviousSelectedSlotIndex;
    ::ll::TypedStorage<1, 1, bool>                                       mIsUsingAnalogToHover;
    // NOLINTEND

public:
    // prevent constructor by default
    EmoteWheelCommonModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EmoteWheelCommonModel(::MinecraftScreenController&, std::shared_ptr<PersonaScreenModel>);

    MCNAPI EmoteWheelCommonModel(
        ::MinecraftScreenController&,
        std::shared_ptr<PersonaScreenModelCommon>,
        std::shared_ptr<MinecraftScreenModel>
    );

    MCNAPI std::string _constructHoveredButtonMessage(bool, int, int, std::string const&) const;

    MCNAPI void _fetchEmoteCatalogOffers();

    MCNAPI void _registerBindings(::MinecraftScreenController&);

    MCNAPI void _registerEvents(::MinecraftScreenController&);

    MCNAPI void _setHoverIndex(int);

    MCNAPI void clearHover();

    MCNAPI int getEmoteWheelIndexAsUserFacingValue(::ButtonIndiciesEnum const&) const;

    MCNAPI int getInvalidEmoteIndex() const;

    MCNAPI void setOnEmoteSlotSelected(std::function<void(int)>);

    MCNAPI void update(::ui::DirtyFlag&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenController&, std::shared_ptr<PersonaScreenModel>);

    MCNAPI void* $ctor(
        ::MinecraftScreenController&,
        std::shared_ptr<PersonaScreenModelCommon>,
        std::shared_ptr<MinecraftScreenModel>
    );
    // NOLINTEND
};
