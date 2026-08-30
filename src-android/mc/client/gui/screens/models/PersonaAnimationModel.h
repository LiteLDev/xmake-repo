#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/ReactAnimationType.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
class IStoreCatalogItem;
class PersonaPiece;
class UIPropertyBag;
namespace persona { class PieceOfferWrapper; }
// clang-format on

class PersonaAnimationModel {
public:
    // PersonaAnimationModel inner types declare
    // clang-format off
    struct ReactAnimationTypeHash;
    // clang-format on

    // PersonaAnimationModel inner types define
    struct ReactAnimationTypeHash {};

    using ReactAnimationType = ::persona::ReactAnimationType;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                             mReactAnimations;
    ::ll::TypedStorage<8, 8, ::IPersonaRepository const&>   mPersonaRepo;
    ::ll::TypedStorage<8, 24, std::string>                  mEmoteAnimationToPlay;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mBoredAnimationType;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mIdleAnimationType;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mAnimationReactState;
    ::ll::TypedStorage<4, 4, float>                         mStartingRotation;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>               mDirtyFlag;
    ::ll::TypedStorage<4, 4, float>                         mNextBoredAnimationTime;
    ::ll::TypedStorage<1, 1, bool>                          mAnimationUpdated;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaAnimationModel& operator=(PersonaAnimationModel const&);
    PersonaAnimationModel(PersonaAnimationModel const&);
    PersonaAnimationModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersonaAnimationModel(::IPersonaRepository const&);

    MCNAPI void _populateReactAnimations();

    MCNAPI void playEmote(::IStoreCatalogItem const&);

    MCNAPI void playEmote(::persona::PieceOfferWrapper const&);

    MCNAPI void playReactAnimations(::SharedTypes::persona::PieceType, bool);

    MCNAPI void tick(::ui::DirtyFlag&);

    MCNAPI void updateAppearanceData(::persona::PieceOfferWrapper const&, bool);

    MCNAPI void updatePaperDollAnimation(::UIPropertyBag&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IPersonaRepository const&);
    // NOLINTEND
};
